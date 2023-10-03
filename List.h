#ifndef _LIST
#define _LIST

#include "ListNode.h"

typedef struct List {
	int size;
	ListNode* head;
	ListNode* last;

	void	(*add)();
	int		(*get)();
	void	(*_new)();
	void	(*_delete)();
} List;

List* _List_new();

void _List_delete(List* this);

void _List_add(List* this, int elem);

int _List_get(List* this, int pos);

#endif