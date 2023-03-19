#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h" 

ListNode* BuyListNode(LTDataType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->next = NULL;
	node->prev = NULL;
	node->data = x;

	return node;
}

ListNode* ListInit()
{
	ListNode* phead = BuyListNode(-1);
	phead->next = phead;
	phead->prev = phead;
	
	return phead;
}

void ListDestory(ListNode* phead)
{
	assert(phead);

	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}

	free(phead);
}

void ListPrint(ListNode* phead)
{
	assert(phead);

	printf("head<=>");
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);

	//ListNode* newnode = BuyListNode(x);
	//ListNode* tail = phead->prev;

	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;

	ListInsert(phead, x);
}

bool LTEmpty(ListNode* phead)
{
	assert(phead);
	return phead->next == phead;
}

void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));

	//ListNode* tail = phead->prev;
	//ListNode* tailPrev = tail->prev;

	//tailPrev->next = phead;
	//phead->prev = tailPrev;
	//free(tail);
	//tail = NULL;

	ListErase(phead->prev);
}

void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);

	//ListNode* newnode = BuyListNode(x);
	//ListNode* first = phead->next;

	//phead->next = newnode;
	//newnode->prev = phead;
	//newnode->next = first;
	//first->prev = newnode;

	ListInsert(phead->next, x);
}

void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));

	//ListNode* first = phead->next;
	//ListNode* firstNext = first->next;

	//firstNext->prev = phead;
	//phead->next = firstNext;
	//free(first);
	//first = NULL;

	ListErase(phead->next);
}

ListNode* ListFind(ListNode* phead, LTDataType x)// 双向链表查找,配合Insert和Erase使用
{
	assert(phead);

	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);

	ListNode* prev = pos->prev;
	ListNode* newnode = BuyListNode(x);

	prev->next = newnode;
	newnode->prev = prev;

	newnode->next = pos;
	pos->prev = newnode;
}

void ListErase(ListNode* pos)
{
	assert(pos);

	ListNode* prev = pos->prev;
	ListNode* next = pos->next;

	prev->next = next;
	next->prev = prev;
	free(pos);
}