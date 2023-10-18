#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void Swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int GetMidnumi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[right] < a[left])
		{
			return left;
		}
		else
			return right;
	}
	if (a[right] < a[mid])
	{
		if (a[mid] < a[left])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return right;
		}
		else
			return left;
	}
}


//霍尔法
int Partsort1(int* a, int left, int right)
{
	int mid = GetMidnumi(a, left, right);
	if (mid != left)
		Swap(&a[mid], &a[left]);

	int key = left;

	while (left < right)
	{
		while (left < right && a[right] >= a[key])
			right--;
		while (left < right && a[left] <= a[key])
			left++;
		Swap(&a[right], &a[left]);
	}

	Swap(&a[key], &a[left]);
	key = left;

	return key;
}


//挖坑法
int Partsort2(int* a, int left, int right)
{
	int mid = GetMidnumi(a, left, right);
	if (mid != left)
		Swap(&a[mid], &a[left]);

	int key = a[left];
	int hole = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[hole]) {
			--right;
		}	

		a[hole] = a[right];
		hole = right;

		while (left < right && a[left] <= a[hole]) {
			++left;
		}

		a[hole] = a[left];
		hole = left;
	}

	a[hole] = key;

	return hole;
}


//前后指针法
int Partsort3(int* a, int left, int right)
{
	int mid = GetMidnumi(a, left, right);
	if (mid != left)
		Swap(&a[mid], &a[left]);

	int prev = left, cur = left + 1;
	int key = left;

	while (cur <= right)
	{
		if ( a[cur] < a[key])
		{
			++prev;
			if (a[prev] != a[cur])
			{
				Swap(&a[cur], &a[prev]);
			}
		}
		++cur;
	}

	Swap(&a[prev], &a[key]);

	return prev;
}

void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;
	//int key = Partsort1(a, left, right);
	//int key = Partsort2(a, left, right);
	int key = Partsort3(a, left, right);
	QuickSort(a, left, key - 1);
	QuickSort(a, key + 1, right);
}

 //快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right)
{
	Stack st;
	StackInit(&st);
	StackPush(&st, right);
	StackPush(&st, left);

	while (!StackEmpty(&st))
	{
		int begin = StackTop(&st);
		StackPop(&st);
		int end = StackTop(&st);
		StackPop(&st);

		int key = Partsort3(a, begin, end);
		if (key + 1 < end)
		{
			StackPush(&st, end);
			StackPush(&st, key+1);
		}
		if (begin < key - 1)
		{
			StackPush(&st, key-1);
			StackPush(&st, begin);
		}
	}
	StackDestroy(&st);
}

int main()
{
	int arr[] = { 3,2,1,8,4,9,6,5,7,7 };
	int size = sizeof(arr) / sizeof(int);

	//QuickSort(arr, 0, size - 1);
	QuickSortNonR(arr, 0, size - 1);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}