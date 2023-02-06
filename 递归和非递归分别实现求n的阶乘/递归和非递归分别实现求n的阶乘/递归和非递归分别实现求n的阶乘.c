#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归实现
int fac(int n)
{
	if (n > 1)
		return n * fac(n-1); //切忌写成fac(n--) 或 fac(--n)
	else                     //前者不能得出正确答案，后者是n-1的阶乘
		return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d", ret);
	return 0;
}

////非递归实现
//int fac(int n)
//{
//	int f = 1;
//	while (n > 0)
//	{
//		f *= n;
//		n--;
//	}
//	return f;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}