#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "assert.h"

//****************************************异或

int missingNumber1(int* nums, int numsSize) 
{
	int val = 0;
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		val ^= nums[i];
	}
	for (i = 0; i <= numsSize; i++)
	{
		val ^= i;
	}
	return val;
}

//****************************************排序+二分查找

int missingNumber2(int* nums, int numsSize)
{
	//排序（冒泡排序）/(qsort快排）
	assert(nums);
	int i, j;
	int temp = 0;

	for (i = 0; i < numsSize - 1; i++)
	{
		for (j = 0; j < numsSize - 1 - i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	int begin = 0;
	int end = numsSize - 1;
	while (begin <= end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (nums[mid] == mid)//相等，往右找
			begin = mid + 1;
		else
			end = mid - 1;
	}

	return begin;
}

//****************************************0~n求和 - 所有元素的和

int missingNumber3(int* nums, int numsSize)
{
	int sum = numsSize * (numsSize + 1) / 2;
	for (int i = 0; i < numsSize; ++i)
	{
		sum -= nums[i];
	}
	return sum;
}

int main()
{
	int arr[] = { 3,0,1 };
	int sz = sizeof(arr) / sizeof(int);
	//int x = missingNumber1(arr, sz);
	//int x = missingNumber2(arr, sz);
	int x = missingNumber3(arr, sz);
	printf("The missing number is %d",x);
	return 0;
}