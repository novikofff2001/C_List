#ifndef _LIST_NODE
#define _LIST_NODE

typedef struct ListNode ListNode;

typedef struct ListNode {
	int data;
	ListNode* next;

	void (*_new)   ();
	void (*_delete)();
} ListNode;

ListNode* _ListNode_new();

void _ListNode_delete(ListNode* node);

#endif