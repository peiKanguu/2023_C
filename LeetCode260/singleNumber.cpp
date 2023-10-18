#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//该函数的目标是在nums数组中找到两个唯一的数字，
    //并将它们存储在一个大小为2的数组中返回。
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int xorsum = 0;
    //找到两个唯一数字的异或值，因为相同的数字将由于XOR性质而相互抵消。
    for (int i = 0; i < numsSize; i++) {
        xorsum ^= nums[i];
    }
    // 防止溢出
    //LSB是异或和的有效最低位，用来分离两个唯一的数字
    //这是通过找到xorsum的二进制表示中最右侧的设置位来实现的，
        //使用表达式xorsum & (-xorsum)。
        //这个位表示两个唯一数字之间的差异。
    int lsb = (xorsum == INT_MIN ? xorsum : xorsum & (-xorsum));
    int type1 = 0, type2 = 0;

    //再次遍历nums数组，对于每个数字，使用位与运算符检查最低有效位（LSB）。
        //如果位被设置，就将其与type1异或；
        //否则，将其与type2异或。这将数字分成两组，每组包含一个唯一的数字。
    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        if (num & lsb) {
            type1 ^= num;
        }
        else {
            type2 ^= num;
        }
    }

    int* ans = (int*)malloc(sizeof(int) * 2);
    ans[0] = type1;
    ans[1] = type2;
    *returnSize = 2;
    return ans;
}


int main() {
    int nums[] = { 1, 2, 1, 3, 2, 5 };
    int size = sizeof(nums) / sizeof(int);

    int* result = singleNumber(nums, size, &size);

    printf("唯一的数字是：%d 和 %d\n", result[0], result[1]);

    free(result); // 不要忘记释放动态分配的内存
    return 0;
}