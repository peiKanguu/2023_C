#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void HeapCreate(Heap* php)
{
	assert(php);

	php->a = (HPDataType*)malloc(sizeof(HPDataType) * 4);
	if (php->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	php->size = 0;
	php->capacity = 4;
}

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType x = *p1;
	*p1 = *p2;
	*p2 = x;
}

void AdjustUp(HPDataType* a, int child)//�Ӻ���λ��ʼ���ϵ������ɶ�
{
	int parent = (child - 1) / 2;

	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}

}

void HeapPush(Heap* php, HPDataType x)
{
	assert(php);

	if (php->size == php->capacity)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * php->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		php->a = tmp;
		php->capacity *= 2;
	}

	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);
}

void AdjustDown(HPDataType* a,int n, int parent)
{
	int child = parent * 2 + 1;

	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}

		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

bool HeapEmpty(Heap* php)
{
	assert(php);
	return php->size == 0;
}

void HeapPop(Heap* php)
{
	assert(php);
	assert(!HeapEmpty(php));

	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}

HPDataType HeapTop(Heap* php)
{
	assert(php);
	return php->a[0];
}

int HeapSize(Heap* php)
{
	assert(php);
	return php->size;
}

void HeapDestory(Heap* php)
{
	assert(php);

	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

// ������ -- ����� -- O(N*logN)
void HeapSort(int* a, int n)
{
	// ���� -- ���ϵ������� -- O(N*logN)
	/*for (int i = 1; i < n; ++i)
	{
		AdjustUp(a, i);
	}*/

	// ���� -- ���µ������� -- O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

	// �Լ���ʵ�� -- O(N*logN)
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[end], &a[0]);
		AdjustDown(a, end, 0);

		--end;
	}
}

void PrintTopK(int* a,int n, int k)
{
	// 1. ����--��a��ǰk��Ԫ�ؽ�С��
	int* topk = (int*)malloc(sizeof(int) * k);
	assert(topk);

	// ����ǰk�����ݽ�С��
	for (int i =0; i < k; ++i)
	{
		topk[i] = a[i];
	}

	for (int i = (k - 2) / 2; i >= 0; --i)
	{
		AdjustDown(topk, k, i);
	}

	// 2. ��ʣ��n-k��Ԫ��������Ѷ�Ԫ�ؽ��������������滻
	for (int i = k; i < n; i++)
	{
		if (a[i] > topk[0])
		{
			topk[0] = a[i];
			AdjustDown(topk, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", topk[i]);
	}
	printf("\n");

	free(topk);
}

//void CreateNDate()
//{
//	// ������
//	int n = 10000000;
//	srand(time(0));
//	const char* file = "data.txt";
//	FILE* fin = fopen(file, "w");
//	if (fin == NULL)
//	{
//		perror("fopen error");
//		return;
//	}
//
//	for (size_t i = 0; i < n; ++i)
//	{
//		int x = rand() % 10000;
//		fprintf(fin, "%d\n", x);
//	}
//
//	fclose(fin);
//}
