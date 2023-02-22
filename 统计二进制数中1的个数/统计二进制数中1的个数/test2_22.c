#define _CRT_SECURE_NO_WARNINGS 1

//按位与&：有0则0，同1才1

#include <stdio.h>

int count_ones(unsigned int n) {
    int count = 0;
    while (n != 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    printf("该数二进制中1的个数为：%d\n", count_ones(num < 0 ? ~num + 1 : num));
    return 0;
}
