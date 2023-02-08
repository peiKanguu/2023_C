#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 5

void init(int* p)
{
	int j = 0;
	while (j < N)
	{
		*p = 0;
		p++;
		j++;
	}
}

void print(int* p)
{
	int i = 0;
	while (i < 5)
	{
		printf("%d ", *p);
		i++;
		p++;
	}
}

void reverse(int arr[N])
{
	int left = 0;
	int right = N-1;
	while (left < right)
	{
		int tmp;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[N] = { 1,2,3,4,5 };
	/*init(arr);*/
	/*print(arr);*/
	reverse(arr);
	print(arr);
	return 0;
}