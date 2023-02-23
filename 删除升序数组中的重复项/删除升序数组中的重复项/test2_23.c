#define _CRT_SECURE_NO_WARNINGS 1

//输入：nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
//输出：5, nums = [0, 1, 2, 3, 4]
//解释：函数应该返回新的长度 5 ， 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4 。
//不需要考虑数组中超出新长度后面的元素。
#include <stdio.h>
int removeDuplicates(int* nums, int numSize)
{
	int src = 1, dst = 0;
	while (src < numSize)
	{
		if (nums[src] == nums[dst])
		{
			src++;
		}
		else
		{
			nums[++dst] = nums[src++];
		}
	}
	return dst + 1;
}

int main()
{
	int nums[] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
	int newSize = removeDuplicates(nums, 10);
	printf("%d\n", newSize);
	return 0;
}