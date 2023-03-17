#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void reverse(int nums[], int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate1(int nums[], int numsSize, int k) {
    k = k % numsSize;
    reverse(nums, 0, numsSize - 1);//7654321
    reverse(nums, 0, k - 1);//(756)4321->5674321
    reverse(nums, k, numsSize - 1);//567(4321)->5671234
}



//******************************************时间复杂度->O(K*N)：最坏的情况为K=N-1 == O(N^2)
void rotate2(int nums[], int numsSize, int k)
{
    k = k % numsSize;   
    for (int i = 0; i < k; i++)
    {
        int tmp = 0;
        int j = numsSize - 1;
        tmp = nums[j];
        for (j = numsSize-1; j >0; j--)
        {
            nums[j] = nums[j-1];
        }
        nums[0] = tmp;
    }
}



int main() {
    int nums[] = { 1, 2, 3, 4, 5, 6, 7 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 10;

    printf("Original Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    //rotate1(nums, numsSize, k);
    rotate2(nums, numsSize, k);

    printf("\nRotated Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
