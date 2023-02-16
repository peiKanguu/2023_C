#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int missingNumber(int* nums, int numsSize) 
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

int main()
{
	int arr[] = { 3,0,1 };
	int sz = sizeof(arr) / sizeof(int);
	int x = missingNumber(arr, sz);
	printf("The missing number is %d",x);
	return 0;
}