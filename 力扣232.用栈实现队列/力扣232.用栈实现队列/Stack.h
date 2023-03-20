#pragma once
#include"myQueue.h"

typedef int StackDataType;

typedef struct Stack
{
	int* a;
	int top;
	int capacity;
}Stack;

void StackInit(Stack* ps);

void StackDestroy(Stack* ps);

void StackPush(Stack* ps, StackDataType x);

void StackPop(Stack* ps);

int StackTop(Stack* ps);

bool StackEmpty(Stack* ps);

void StackDestroy(Stack* ps);

void StackPrint(Stack* ps);