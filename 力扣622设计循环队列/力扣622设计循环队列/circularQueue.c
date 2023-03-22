#define _CRT_SECURE_NO_WARNINGS 1
#include"circularQueue.h"
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

MyCircularQueue* myCircularQueueCreate(int k) {
	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	obj->front = obj->rear = 0;
	obj->a = (int*)malloc(sizeof(int) * (k + 1));
	obj->k = k;

	return obj;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	if (myCircularQueueIsFull(obj))
		return false;

	obj->a[obj->rear++] = value;
	obj->rear %= (obj->k + 1);
	return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return false;

	obj->front++;
	obj->front %= (obj->k + 1);
	return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	else
		return obj->a[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	else
		return obj->a[(obj->rear - 1 + obj->k + 1) % (obj->k + 1)];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
	return obj->front == obj->rear;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
	return (obj->rear + 1) % (obj->k + 1) == obj->front;
}

void myCircularQueueFree(MyCircularQueue* obj) {
	free(obj->a);
	free(obj);
}