#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//�ú�����Ŀ������nums�������ҵ�����Ψһ�����֣�
    //�������Ǵ洢��һ����СΪ2�������з��ء�
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int xorsum = 0;
    //�ҵ�����Ψһ���ֵ����ֵ����Ϊ��ͬ�����ֽ�����XOR���ʶ��໥������
    for (int i = 0; i < numsSize; i++) {
        xorsum ^= nums[i];
    }
    // ��ֹ���
    //LSB�����͵���Ч���λ��������������Ψһ������
    //����ͨ���ҵ�xorsum�Ķ����Ʊ�ʾ�����Ҳ������λ��ʵ�ֵģ�
        //ʹ�ñ��ʽxorsum & (-xorsum)��
        //���λ��ʾ����Ψһ����֮��Ĳ��졣
    int lsb = (xorsum == INT_MIN ? xorsum : xorsum & (-xorsum));
    int type1 = 0, type2 = 0;

    //�ٴα���nums���飬����ÿ�����֣�ʹ��λ���������������Чλ��LSB����
        //���λ�����ã��ͽ�����type1���
        //���򣬽�����type2����⽫���ֳַ����飬ÿ�����һ��Ψһ�����֡�
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

    printf("Ψһ�������ǣ�%d �� %d\n", result[0], result[1]);

    free(result); // ��Ҫ�����ͷŶ�̬������ڴ�
    return 0;
}