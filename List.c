#include "List.h"

#include <stdlib.h>

List* _List_new() {
	List* this = (List*)malloc(sizeof(List));

	this->add = &_List_add;
	this->get = &_List_get;
	this->_new = &_List_new;
	this->_delete = &_List_delete;

	this->size = 0;
	this->head = NULL;
	this->last = NULL;
	return this;
};

void _List_delete(List* this) {
	ListNode* elem = this->head;
	while (elem != NULL) {
		ListNode* next = elem->next;
		elem->_delete(elem);
		elem = next;
	}

	this->size = 0;
	this->head = NULL;
	this->last = NULL;
	free(this);
};

void _List_add(List* this, int elem) {
	if (this->head == NULL) {
		this->head = _ListNode_new();
		this->last = this->head;
	}
	else {
		this->last->next = _ListNode_new();
		this->last = this->last->next;
	}
	this->last->next = NULL;
	this->last->data = elem;
	this->size++;
};

int _List_get(List* this, int pos) {
	if (pos > this->size) {
		return NULL;
	}
	ListNode* elem = this->head;
	for (int i = 0; i < pos; i++) {
		elem = elem->next;
	}
	return elem->data;
}
