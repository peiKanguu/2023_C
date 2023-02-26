#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int m = 0;
	scanf("%d", &m);
	
	int i = 0;
	//偶数位
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	//奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}





//#include <stdio.h>
//
//// 打印一个整数的二进制序列
//void print_binary(int num) {
//    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
//        printf("%d", (num >> i) & 1);
//    }
//}
//
//int main() {
//    int num, bit, even = 0, odd = 0;
//
//    // 读取用户输入的整数
//    printf("请输入一个整数：");
//    scanf("%d", &num);
//
//    // 遍历整数的二进制序列的每一位
//    for (int i = 0; i < sizeof(num) * 8; i++) {
//        bit = (num >> i) & 1;
//
//        // 如果当前位的索引是偶数，则将其添加到 even 中
//        if (i % 2 == 0) {
//            even = (even << 1) | bit;
//        }
//        // 如果当前位的索引是奇数，则将其添加到 odd 中
//        else {
//            odd = (odd << 1) | bit;
//        }
//    }
//
//    // 打印偶数位和奇数位的二进制序列
//    printf("偶数位的二进制序列为：");
//    print_binary(even);
//    printf("\n");
//
//    printf("奇数位的二进制序列为：");
//    print_binary(odd);
//    printf("\n");
//
//    return 0;
//}

