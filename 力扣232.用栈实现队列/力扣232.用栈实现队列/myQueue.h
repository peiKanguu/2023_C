#pragma once
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
#include<stdio.h>
#include"Stack.h"

typedef struct {
	Stack pushst;
	Stack popst;
} MyQueue;


MyQueue* myQueueCreate();//队列的创建（由入入栈和出出栈两个栈组成）

void myQueuePush(MyQueue* obj, int x);//将元素X推到队列的末尾

int myQueuePop(MyQueue* obj);//从队列的开头移除并返回元素

int myQueuePeek(MyQueue* obj);//返回队列开头的元素

bool myQueueEmpty(MyQueue* obj);//判断队列是否为空

void myQueueFree(MyQueue* obj);//释放队列

void myQueuePrint(MyQueue* obj);