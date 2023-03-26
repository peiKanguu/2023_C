#define _CRT_SECURE_NO_WARNINGS 1
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

void StackInit(Stack* ps)
{
	assert(ps);

	ps->a = (StackDataType*)malloc(sizeof(StackDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	ps->capacity = 4;
	ps->top = 0;
}

void StackDestroy(Stack* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackPush(Stack* ps, StackDataType x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		StackDataType* tmp = (StackDataType*)realloc(ps->a, sizeof(StackDataType) * ps->capacity * 2);

		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}

	ps->a[ps->top] = x;
	ps->top++;
}

bool StackEmpty(Stack* ps)
{
	assert(ps);

	return ps->top == 0;
}

void StackPop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	ps->top--;
}

int StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

void StackPrint(Stack* ps)
{
	assert(ps);
	int i = ps->top-1;
	while (i>=0)
	{
		printf("%d\n", ps->a[i]);
		i--;
	}
}

int main()
{
	Stack s;
	Stack* ps = &s;
	StackInit(ps);
	StackPush(ps, 1);
	StackPush(ps, 2);
	StackPush(ps, 3);
	StackPush(ps, 4);
	StackPush(ps, 5);
	StackPrint(ps);
	printf("\n\n");

	StackPop(ps);
	StackPrint(ps);
	
	StackDestroy(ps);
}