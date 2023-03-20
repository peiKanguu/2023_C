#define _CRT_SECURE_NO_WARNINGS 1
#include"myQueue.h"

void test()
{
	MyQueue* obj = myQueueCreate();
	myQueuePush(obj, 1);
	myQueuePush(obj, 2);
	myQueuePush(obj, 3);
	myQueuePush(obj, 4);
	
	int n= myQueuePop(obj);

	myQueueFree(obj);

}

int main()
{
	test();
	return 0;
}