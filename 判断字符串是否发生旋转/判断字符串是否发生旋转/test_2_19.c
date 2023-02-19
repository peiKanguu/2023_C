#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

#include <stdio.h>
#include <string.h>

int is_rotation(const char* s1, const char* s2) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) 
    {
        return 0;
    }
    char s3[11];
    strcpy(s3, s1);
    strcat(s3, s1);
    return strstr(s3, s2) != NULL;
}

int main() 
{
    const char* s1 = "AABCD";
    const char* s2 = "BCDAA";
    if (is_rotation(s1, s2)) 
    {
        printf("%s is a rotation of %s\n", s2, s1);
    }
    else 
    {
        printf("%s is not a rotation of %s\n", s2, s1);
    }
    return 0;
}

