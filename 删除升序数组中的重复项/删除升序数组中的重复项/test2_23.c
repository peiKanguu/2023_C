#define _CRT_SECURE_NO_WARNINGS 1

//���룺nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
//�����5, nums = [0, 1, 2, 3, 4]
//���ͣ�����Ӧ�÷����µĳ��� 5 �� ����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4 ��
//����Ҫ���������г����³��Ⱥ����Ԫ�ء�
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