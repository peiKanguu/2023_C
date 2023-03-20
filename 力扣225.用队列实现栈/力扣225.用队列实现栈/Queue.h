#pragma once
#include<stdio.h>
#include<assert.h>
#include"myStack.h"

void QueueInit(Queue* pq);//队列的初始化

bool QueueEmpty(Queue* pq);//判断队列是否为空

void QueuePush(Queue* pq, QDatatype x);//进入队列

void QueuePop(Queue* pq);//删除

QDatatype QueueFront(Queue* pq);//先入元素出队列（仅复制）（队列头先出）

QDatatype QueueBack(Queue* pq);//后入元素出队列

void QueueDestroy(Queue* pq);//销毁队列