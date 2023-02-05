#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//该代码实现了一个递归函数 DigitPrint，该函数的目的是打印出一个整数的每一位。
//
//首先，函数检查输入的数字 n 是否小于 10。如果是，则该数字只有一位，直接打印出该数字并使用 return 语句结束函数的执行，避免对该数字进行除以 10 的操作。
//
//否则，程序会进行递归，先执行 DigitPrint(n / 10)，这样可以打印出数字除以 10 的结果，即数字的除去最后一位后的值。在递归结束后，函数会使用 printf("%d\n", n % 10) 语句打印出数字的个位。
//
//这个过程会重复直到所有递归结束，最终整个数字的每一位都会被打印出来，且从最后一位开始打印
void DigitPrint(int n) {
	if (n < 10) {
		printf("%d\n", n);
		return;
	}
	DigitPrint(n / 10);
	printf("%d\n", n % 10);
}

int main()
{
	int n;
	scanf("%d", &n);

    DigitPrint(n);

	return 0;
}