#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListInit(SeqList* ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * INIT_CAPACITY);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	ps->size = 0;
	ps->capacity = INIT_CAPACITY;
}

void SeqListDestory(SeqList* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPrint(SeqList* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SeqList* ps)
{
	//À©ÈÝ
	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}
}

void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->a[ps->size++] = x;
}

void SeqListPopBack(SeqList* ps)
{
	if (ps->size == 0)
	{
		return;
	}
	ps->a[ps->size - 1] = 0;
	ps->size--;
}

void SeqListPushFront(SeqList* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	int end = ps->size-1;
	for (end; end>=0; end--)
	{
		ps->a[end + 1] = ps->a[end];
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	if (ps->size == 0)
	{
		return;
	}
	int begin = 0;
	for (begin; begin < ps->size; begin++)
	{
		ps->a[begin] = ps->a[begin + 1];
	}
	ps->size--;
}


int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}

	return -1;
}

void SeqListInsert(SeqList* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	SLCheckCapacity(ps);

	int end = ps->size - 1;

	while (pos <= end)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos] = x;
	ps->size++;
}

void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	int begin = pos + 1;

	while (begin < ps->size)
	{
		ps->a[begin-1] = ps->a[begin];
		++begin;
	}

	ps->size--;
}