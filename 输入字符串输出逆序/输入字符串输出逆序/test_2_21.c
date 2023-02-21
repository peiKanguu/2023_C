#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);  // 读入包含空格的字符串

    int n = strlen(str);
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] != '\n') {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}
