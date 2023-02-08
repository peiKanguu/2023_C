#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_pow(int x, int y)
{
	if (y > 0)
		return x * my_pow(x, --y);
	else if (y < 0)
		return 1.0 / my_pow(x, -y);
	else
		return 1.0;  
}

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	double ret = 0.0;
	ret = my_pow(n, k);
	printf("%d的%d次方等于%d",n,k,ret);
	
	return 0;
}