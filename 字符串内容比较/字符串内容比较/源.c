#define _CRT_SECURE_NO_WARNINGS 1

//12. Write a C program to concatenate two strings using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��������    ����stren
void concat(char* a, char* b, char* result);

int main()
{
    char a[100], b[100], result[200];

    // ���������ַ���
    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    // ���������ַ���
    concat(a, b, result);

    // ������
    printf("Concatenated string: %s\n", result);

    return 0;
}

void concat(char* a, char* b, char* result)
{
    // ����ָ��
    char* p = a, * q = b, * r = result;

    // ѭ�������ַ�
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

    // ��β��
    *r = '\0';
}
