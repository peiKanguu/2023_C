#define _CRT_SECURE_NO_WARNINGS 1

//描述
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天

#include<stdio.h>
int main() {
    int year, month, day;
    while (scanf("%d %d", &year, &month) != EOF) {
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        case 2: {   //2月平年28天，闰年29天
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                printf("29\n");
            else
                printf("28\n");
        }
        }
    }
    return 0;
}