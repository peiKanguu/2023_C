#define _CRT_SECURE_NO_WARNINGS 1

//��λ��&����0��0��ͬ1��1

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
    printf("������һ��������");
    scanf("%d", &num);
    printf("������������1�ĸ���Ϊ��%d\n", count_ones(num < 0 ? ~num + 1 : num));
    return 0;
}
