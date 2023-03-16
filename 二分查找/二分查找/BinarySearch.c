#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "assert.h"

int BinarySearch(int* a, int n, int x)
{
	assert(a);

	int begin = 0;
	int end = n - 1;

	while (begin <= end)
	{
		int mid = begin + ((end - begin) >> 1);//((end - begin) >> 1) == (end - begin)/2
		                                      //(3) = 0011     | (4) = 0100
		                                      //>>1 = 0001+=(1)| >>1 = 0010=(2)
		if (a[mid] < x)
			begin = mid + 1;
		else if (a[mid] > x)
			end = mid - 1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int x = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//数组必须有序
	printf("输入待想要查找的数字: ");
	scanf("%d", &x);
	int ret = BinarySearch(arr, 10, x);
	printf("下标为：%d\n", ret);
	return 0;
	
}