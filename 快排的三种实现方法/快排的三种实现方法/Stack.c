#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

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
	int i = ps->top - 1;
	while (i >= 0)
	{
		printf("%d\n", ps->a[i]);
		i--;
	}
}
