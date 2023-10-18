#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

/*Queue QueueCreate()
{
	Queue q = (Queue)malloc(sizeof(Queue));
	if (q == NULL)
	{
		perror("malloc fail");
		return;
	}
	q->front = q->rear = NULL;
	return q;
}*/
void QueueInit(Queue* pq)
{
	assert(pq);

	pq->front = pq->rear = NULL;
	pq->size = 0;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->front;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->front = pq->rear = NULL;
	pq->size = 0;
}

void QueuePush(Queue* q,struct BTNode* x)
{
	QNode* qnode = (QNode*)malloc(sizeof(QNode));
	if (qnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	qnode->data = x;
	qnode->next = NULL;
	if (q->front == NULL)
	{
		q->front = q->rear = qnode;
	}
	else
	{
		q->rear->next = qnode;
		q->rear = qnode;
	}
	q->size++;
}


bool QueueIsEmpty(Queue* q)
{
	assert(q);

	return q->front == 0;
}

void QueuePop(Queue* q)
{
	assert(q);

	if (q->front == NULL)
	{
		printf("Queue is empty.\n");
		return -1;
	}
	char data = q->front->data;
	QNode* temp = q->front;
	q->front = q->front->next;
	free(temp);
	temp = NULL;
	if (q->front == NULL)
	{
		q->rear = NULL;
	}

	return data;
	if (q->front->next == NULL)
	{
		free(q->front);
		q->front = q->rear = NULL;
	}
	else
	{
		QNode* next = q->front->next;
		free(q->front);
		q->front = next;
	}

	q->size--;
}

struct BTNode* QueueFront(Queue* q)
{
	if (q == NULL || q->front == NULL)
	{
		return NULL;
	}
	return q->front->data;
}

//#include"Queue.h"
//
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//
//	pq->head = pq->tail = NULL;
//	pq->size = 0;
//}
//
//void QueueDestroy(Queue* pq)
//{
//	assert(pq);
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//
//	pq->head = pq->tail = NULL;
//	pq->size = 0;
//}
//
//void QueuePush(Queue* pq, QDatatype x)
//{
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL)
//	{
//		perror("malloc fail");
//		return;
//	}
//	newnode->data = x;
//	newnode->next = NULL;
//
//	if (pq->head == NULL)
//	{
//		assert(pq->tail == NULL);
//
//		pq->head = pq->tail = newnode;
//	}
//	else
//	{
//		pq->tail->next = newnode;
//		pq->tail = newnode;
//	}
//
//	pq->size++;
//}
//
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(pq->head != NULL);
//
//	/*QNode* next = pq->head->next;
//	free(pq->head);
//	pq->head = next;
//
//	if (pq->head == NULL)
//		pq->tail = NULL;*/
//
//	if (pq->head->next == NULL)
//	{
//		free(pq->head);
//		pq->head = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* next = pq->head->next;
//		free(pq->head);
//		pq->head = next;
//	}
//
//	pq->size--;
//}
//
//int QueueSize(Queue* pq)
//{
//	assert(pq);
//
//	return pq->size;
//}
//
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//
//	return pq->size == 0;
//}
//
//QDatatype QueueFront(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->data;
//}
//
//QDatatype QueueBack(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->tail->data;
//}