#define _CRT_SECURE_NO_WARNINGS 1
#include "myStack.h"
#include "Queue.h"


int main()
{
	MyStack* p = myStackCreate();
	myStackPush(p, 1);
	myStackPush(p, 2);
	myStackPush(p, 3);
	myStackPush(p, 4);
	printf("%d\n", myStackTop(p));

	if (!myStackEmpty(p))
	{
		printf("Õ»²»Îª¿Õ\n");
	}

	myStackPop(p);
	myStackPop(p);
	printf("%d\n", myStackTop(p));

	myStackFree(p);
	return 0;
}

