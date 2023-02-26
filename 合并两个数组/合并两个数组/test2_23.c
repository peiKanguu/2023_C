#define _CRT_SECURE_NO_WARNINGS 1

//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，
//      其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。

#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int end1 = m - 1, end2 = n - 1;
	int dst = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] > nums2[end2])
		{
			nums1[dst--] = nums1[end1--];
		}
		else
		{
			nums1[dst--] = nums2[end2--];
		}
	}
	while (end2 >= 0)
	{
		nums1[dst--] = nums2[end2--];
	}
}
//下面的方法不行
// 
//////////void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//////////	int p1 = 0, p2 = 0;
//////////	int dst = 0;
//////////	while (p1 <m-1  && p2 <n-1)
//////////	{
//////////		if (nums1[p1] < nums2[p2])
//////////		{
//////////			nums1[dst++] = nums1[p1++];
//////////		}
//////////		else
//////////		{
//////////			nums1[dst++] = nums2[p2++];
//////////		}
//////////	}
//////////	while (p2 < n)
//////////	{
//////////		nums1[dst++] = nums2[p2++];
//////////	}
//////////}

int main()
{
	int nums1[6] = { 2,5,6 };
	int nums2[3] = { 1,2,3 };

	merge(nums1, 6, 3, nums2, 3, 3);
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", nums1[i]);
	}
	return 0;
}