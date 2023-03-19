#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//双指针src和dst相互配合

int removeElement(int* nums, int numsSize, int val)
{
    int src = 0, dst = 0;
    while (src < numsSize)
    {
        if (nums[src] != val)
        {
            nums[dst++] = nums[src++];
        }
        else
        {
            src++;
        }
    }
    return dst;
}

int main()
{
	int arr[6] = { 0, 1, 3, 2, 2, 7 };
	int size = removeElement(arr, 6, 2);
	for(int i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}