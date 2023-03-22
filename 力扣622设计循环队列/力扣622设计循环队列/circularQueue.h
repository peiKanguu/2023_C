#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

typedef struct {
	int* a;
	int front;
	int rear;
	int k;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k);

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);

bool myCircularQueueDeQueue(MyCircularQueue* obj);

int myCircularQueueFront(MyCircularQueue* obj);

int myCircularQueueRear(MyCircularQueue* obj);

bool myCircularQueueIsEmpty(MyCircularQueue* obj);

bool myCircularQueueIsFull(MyCircularQueue* obj);

void myCircularQueueFree(MyCircularQueue* obj);
