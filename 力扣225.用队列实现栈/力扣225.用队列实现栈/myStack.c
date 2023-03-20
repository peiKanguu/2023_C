#define _CRT_SECURE_NO_WARNINGS 1
#include"myStack.h"
#include"Queue.h"

MyStack* myStackCreate() {
	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
	if (pst == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	QueueInit(&pst->q1);
	QueueInit(&pst->q2);

	return pst;
}

void myStackPush(MyStack* obj, int x) {
	if (!QueueEmpty(&obj->q1))
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}

int myStackPop(MyStack* obj) {
	Queue* emptyQ = &obj->q1;
	Queue* nonemptyQ = &obj->q2;
	if (!QueueEmpty(&obj->q1))
	{
		emptyQ = &obj->q2;
		nonemptyQ = &obj->q1;
	}

	while (QueueSize(nonemptyQ) > 1)
	{
		QueuePush(emptyQ, QueueFront(nonemptyQ));//非空队列前（n-1）元素先入先出进入空队列。相当于拷贝，实际元素没出队列
		QueuePop(nonemptyQ);
	}

	int top = QueueFront(nonemptyQ);
	QueuePop(nonemptyQ);

	return top;
}

int myStackTop(MyStack* obj) {
	if (!QueueEmpty(&obj->q1))
	{
		return QueueBack(&obj->q1);
	}
	else
	{
		return QueueBack(&obj->q2);
	}
}

bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);
	free(obj);
}