#define _CRT_SECURE_NO_WARNINGS 1


//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
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