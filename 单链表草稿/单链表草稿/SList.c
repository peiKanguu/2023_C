#include "SList.h"


SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

SLTNode* CreateSList(int n)
{
	SLTNode* phead = NULL, * ptail = NULL;
	int x = 0;
	for (int i = 0; i < n; ++i)
	{
		//scanf("%d", &x);
		//SLTNode* newnode = BuySLTNode(x);
		SLTNode* newnode = BuySLTNode(i + 10);
		if (phead == NULL)
		{
			ptail = phead = newnode;
		}
		else
		{
			ptail->next = newnode;
			ptail = newnode;
		}
	}

	//ptail->next = NULL;

	return phead;
}

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		//printf("[%d|%p]->", cur->data, cur->next);
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		// 找尾
		while (tail->next)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

//void SLTPopBack(SLTNode* phead)
//{
//	SLTNode* tail = phead;
//	while (tail->next)
//	{
//		tail = tail->next;
//	}
//	free(tail);
//	tail = NULL;
//}

void SLTPopBack(SLTNode** pphead)
{
	// 暴力的检查
	assert(*pphead);

	// 温柔的检查
	//if (*pphead == NULL)
	//	return;

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		/*SLTNode* prev = NULL;
		SLTNode* tail = phead;
		while (tail->next)
		{
		prev = tail;
		tail = tail->next;
		}

		free(tail);
		prev->next = NULL;*/

		SLTNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
	}
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead);

	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}