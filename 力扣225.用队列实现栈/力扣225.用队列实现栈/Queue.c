#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"
#include "myStack.h"

void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = pq->tail = NULL;
	pq->size = 0;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->size == 0;
}

void QueuePush(Queue* pq, QDatatype x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;

	if (pq->head == NULL)
	{
		assert(pq->tail == NULL);

		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}

	pq->size++;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);

	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}

	pq->size--;
}

QDatatype QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);

	return pq->head->data;
}

QDatatype QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->tail != NULL);

	return pq->tail->data;

}

QDatatype QueueSize(Queue* pq)
{
	assert(pq);

	return pq->size;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->head = pq->tail = NULL;
	pq->size = 0;
}