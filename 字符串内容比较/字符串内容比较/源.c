#define _CRT_SECURE_NO_WARNINGS 1

//12. Write a C program to concatenate two strings using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明    不用stren
void concat(char* a, char* b, char* result);

int main()
{
    char a[100], b[100], result[200];

    // 输入两个字符串
    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    // 连接两个字符串
    concat(a, b, result);

    // 输出结果
    printf("Concatenated string: %s\n", result);

    return 0;
}

void concat(char* a, char* b, char* result)
{
    // 设置指针
    char* p = a, * q = b, * r = result;

    // 循环复制字符
    while (*p != '\0')
    {
        *r = *p;
        p++;
        r++;
    }

    while (*q != '\0')
    {
        *r = *q;
        q++;
        r++;
    }

    // 结尾符
    *r = '\0';
}
