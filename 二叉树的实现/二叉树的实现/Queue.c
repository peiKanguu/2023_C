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
//void QueuePush(Queue* q, char x)
//{
//	QNode* node = (QNode*)malloc(sizeof(QNode));
//	if (node == NULL)
//	{
//		perror("malloc fail");
//		return;
//	}
//	node->data = x;
//	node->next = NULL;
//	if (q->front == NULL)
//	{
//		q->front = q->rear = node;
//	}
//	else
//	{
//		q->rear->next = node;
//		q->rear = q->rear->next;
//	}
//}
void QueuePush(Queue* q, char x)
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

	return q->front == NULL;
}

void QueuePop(Queue* q)
{
	assert(q);

	//if (q->front == NULL)
	//{
	//	printf("Queue is empty.\n");
	//	return -1;
	//}
	//char data = q->front->data;
	//QNode* temp = q->front;
	//q->front = q->front->next;
	//free(temp);
	//temp = NULL;
	//if (q->front == NULL)
	//{
	//	q->rear = NULL;
	//}

	//return data;
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

BTNode* QueueFront(Queue* q)
{
	if (q == NULL || q->front == NULL)
	{
		return NULL;
	}
	return q->front->data;
}