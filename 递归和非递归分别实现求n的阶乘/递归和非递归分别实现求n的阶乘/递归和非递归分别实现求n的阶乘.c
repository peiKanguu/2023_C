#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ݹ�ʵ��
int fac(int n)
{
	if (n > 1)
		return n * fac(n-1); //�м�д��fac(n--) �� fac(--n)
	else                     //ǰ�߲��ܵó���ȷ�𰸣�������n-1�Ľ׳�
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

////�ǵݹ�ʵ��
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