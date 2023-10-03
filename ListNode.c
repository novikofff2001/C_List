#include "ListNode.h"

#include <stdlib.h>

ListNode* _ListNode_new() {
	ListNode* this = (ListNode*)malloc(sizeof(ListNode));
	this->_new = &_ListNode_new;
	this->_delete = &_ListNode_delete;

	this->data = 0;
	this->next = NULL;
	return this;
};

void _ListNode_delete(ListNode* node) {
	free(node);
}
