#define _CRT_SECURE_NO_WARNINGS 1
#include"slist.h"

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);

	SListNode* newnode = BuySListNode(x);

	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		//урн╡
		SListNode* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);

	SListNode* newnode = BuySListNode(x);
	SListNode* head = newnode;
	newnode->next = *pplist;
	*pplist = newnode;
}

void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	assert(*pplist);

	//SListNode* tail = *pplist;
	//SListNode* prev = NULL;
	//while (tail->next != NULL)
	//{
	//	prev = tail;
	//	tail = tail->next;
	//}
	//if (prev == NULL)
	//	*pplist = NULL;
	//else
	//	prev->next = NULL;
	//free(tail);
	if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
	}
}

void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	assert(*pplist);

	SListNode* head = *pplist;
	*pplist = head->next;
	free(head);
	head = NULL;
}

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* cur = plist;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

void SLTInsert(SListNode** pplist, SListNode* pos, SLTDateType x)
{
	assert(pos);
	assert(pplist);

	if (pos == *pplist)
	{
		SListPushFront(pplist, x);
	}
	else
	{
		SListNode* prev = *pplist;
		while (prev->next != pos)
		{

			prev = prev->next;
		}
		SListNode* newnode = BuySListNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);

	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListErase(SListNode** pplist, SListNode* pos)
{
	assert(*pplist);
	assert(pos);

	if (*pplist == pos)
	{

		SListPopFront(pplist);
	}
	else
	{
		SListNode* prev = *pplist;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}


}

void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	assert(pos->next);

	SListNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}

void SListDestroy(SListNode* plist)
{
	SListNode* curr = plist;
	while (curr != NULL)
	{
		SListNode* temp = curr;
		curr = curr->next;
		free(temp);
	}
}
