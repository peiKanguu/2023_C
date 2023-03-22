#define _CRT_SECURE_NO_WARNINGS 1
#include"circularQueue.h"
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

Test()
{
	MyCircularQueue* obj = myCircularQueueCreate(3);
	myCircularQueueEnQueue(obj, 1);
	myCircularQueueEnQueue(obj, 2);
	myCircularQueueEnQueue(obj, 3);
	myCircularQueueEnQueue(obj, 4);
}

int main()
{
	Test();
	return 0;
}