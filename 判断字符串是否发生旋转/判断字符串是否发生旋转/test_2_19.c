#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

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

