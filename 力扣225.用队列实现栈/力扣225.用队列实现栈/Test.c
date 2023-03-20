#define _CRT_SECURE_NO_WARNINGS 1
#include "myStack.h"
#include "Queue.h"

void test()
{
	MyStack* p = myStackCreate();
	myStackPush(p, 1);
	myStackPush(p, 2);
	myStackPush(p, 3);
	myStackPush(p, 4);

	myStackPop(p);

	myStackTop(p);

	myStackFree(p);
}

int main()
{
	test();
	return 0;
}

