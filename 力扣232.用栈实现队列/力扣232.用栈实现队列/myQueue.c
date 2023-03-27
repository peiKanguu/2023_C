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

	StackInit(&obj->pushst);//入入栈初始化
	StackInit(&obj->popst);//出出栈初始化
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
		//倒数据
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



//MyQueue* myQueueCreate() {
//    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//    if (obj == NULL) {
//        perror("malloc fail");
//        return NULL;
//    }
//
//    StackInit(&obj->pushst);
//    StackInit(&obj->popst);
//
//    return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//    StackPush(&obj->pushst, x);
//}
//
//int myQueuePeek(MyQueue* obj) {
//    if (myQueueEmpty(obj)) {
//        printf("Queue is empty\n");
//        return -1; // return a dummy value
//    }
//
//    if (StackEmpty(&obj->popst)) {
//        // Reverse elements from push stack to pop stack
//        while (!StackEmpty(&obj->pushst)) {
//            StackPush(&obj->popst, StackTop(&obj->pushst));
//            StackPop(&obj->pushst);
//        }
//    }
//
//    return StackTop(&obj->popst);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//    return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
//}
//
//int myQueuePop(MyQueue* obj) {
//    if (myQueueEmpty(obj)) {
//        printf("Queue is empty\n");
//        return -1; // return a dummy value
//    }
//
//    if (StackEmpty(&obj->popst)) {
//        // Reverse elements from push stack to pop stack
//        while (!StackEmpty(&obj->pushst)) {
//            StackPush(&obj->popst, StackTop(&obj->pushst));
//            StackPop(&obj->pushst);
//        }
//    }
//
//    int front = StackTop(&obj->popst);
//    StackPop(&obj->popst);
//
//    return front;
//}
//
//void myQueueFree(MyQueue* obj) {
//    StackDestroy(&obj->pushst);
//    StackDestroy(&obj->popst);
//
//    free(obj);
//}
//
//void myQueuePrint(MyQueue* obj) {
//    if (myQueueEmpty(obj)) {
//        printf("Queue is empty\n");
//        return;
//    }
//
//    // Copy elements to a temporary stack
//    Stack tmp;
//    StackInit(&tmp);
//
//    // Copy elements from push stack to tmp stack
//    while (!StackEmpty(&obj->pushst)) {
//        StackPush(&tmp, StackTop(&obj->pushst));
//        StackPop(&obj->pushst);
//    }
//
//    // Copy elements from pop stack to tmp stack
//    while (!StackEmpty(&obj->popst)) {
//        StackPush(&tmp, StackTop(&obj->popst));
//        StackPop(&obj->popst);
//    }
//
//    // Print elements in tmp stack
//    printf("Queue: ");
//    while (!StackEmpty(&tmp)) {
//        printf("%d ", StackTop(&tmp));
//        StackPop(&tmp);
//    }
//    printf("\n");
//
//    StackDestroy(&tmp);
//}
