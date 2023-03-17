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

void ListDestory(ListNode* pHead);

void ListPrint(ListNode* phead)
{
	assert(phead);

	printf("head <=>");
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

	ListNode* newnode = BuyListNode(x);
	ListNode* tail = phead->prev;

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
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

	ListNode* tail = phead->prev;
	ListNode* tailPrev = tail->prev;

	tailPrev->next = phead;
	phead->prev = tailPrev;
	free(tail);
	tail = NULL;
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

	ListNode* first = phead->next;
	ListNode* firstNext = first->next;

	firstNext->prev = phead;
	phead->next = firstNext;
	free(first);
	first = NULL;
}
// 双向链表查找
ListNode* ListFind(ListNode* pHead, LTDataType x);

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
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos);