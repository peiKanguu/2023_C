#define _CRT_SECURE_NO_WARNINGS 1
#include"myQueue.h"

MyQueue* myQueueCreate()
{
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	if (obj == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	StackInit(&obj->pushst);//����ջ��ʼ��
	StackInit(&obj->popst);//����ջ��ʼ��
	return obj;
}

void myQueuePush(MyQueue* obj, int x)
{
	StackPush(&obj->pushst, x);
}

int myQueuePeek(MyQueue* obj)
{
	if (StackEmpty(&obj->popst))
	{
		//������
		while (!StackEmpty(&obj->pushst))
		{
			StackPush(&obj->popst, StackTop(&obj->pushst));
			StackPop(&obj->pushst);
		}
	}

	return StackTop(&obj->popst);
}

bool myQueueEmpty(MyQueue* obj)
{
	return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
}

int myQueuePop(MyQueue* obj)
{
	int front = myQueuePeek(obj);
	StackPop(&obj->popst);

	return front;
}

void myQueueFree(MyQueue* obj)
{
	StackDestroy(&obj->pushst);
	StackDestroy(&obj->popst);

	free(obj);
}

void myQueuePrint(MyQueue* obj)
{

}