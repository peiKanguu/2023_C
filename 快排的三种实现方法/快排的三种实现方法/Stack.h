#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

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
bool StackEmpty(Stack* ps);
void StackPop(Stack* ps);
int StackTop(Stack* ps);
void StackPrint(Stack* ps);