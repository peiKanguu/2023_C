#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Swap(int* m, int* n)
{
	int tmp;
	tmp = *m;
	*m = *n;
	*n = tmp;
}

void SlectSort(int* a, int n)
{
	int left = 0, right = n - 1;

	while (left < right)
	{
		for (int i = left+1; i < right; i++)
		{
			if (a[left] > a[i])
			{
				Swap(&a[left], &a[i]);
			}
			if (a[right] < a[i])
			{
				Swap(&a[right], &a[i]);
			}
		}
		left++;
		right--;
	}
}

int main()
{
	int arr[] = { 0,1,2,3,5,6,3,7,8,9 };
	int size = sizeof(arr) / sizeof(int);

	SlectSort(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}