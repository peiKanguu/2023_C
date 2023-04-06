#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Swap(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void Adjustdown(int* a, int n, int parent)
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

void HeapSort(int* a, int n)
{
	//create a Heap(向下调整)
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		Adjustdown(a, n, i);
	}

	//make a sort
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[end], &a[0]);
		Adjustdown(a, end, 0);

		--end;
	}
}

void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n - 1; j++)
	{
		for (int i = 1; i < n - j; i++)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
			}
		}
	}
}

int main()
{
	int arr[] = { 4,5,3,3,1,2,8,9,7,6 };
	int size = sizeof(arr) / sizeof(int);

	//HeapSort(arr, size);
	//BubbleSort(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf(" %d", arr[i]);
	}
	return 0;
}