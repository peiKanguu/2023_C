#define _CRT_SECURE_NO_WARNINGS 1


//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
#include <stdio.h>

int fib(int n)
{
    return n <= 2 ? n : fib(n-1) + fib(n - 2);
}
int main() {
    int n = 0;
    scanf("%d", &n);
    fib(n);
    printf("%d", fib(n));
    return 0;
}