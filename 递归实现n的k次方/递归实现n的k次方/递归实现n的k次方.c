#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_pow(int x, int y)
{
	if (y > 0)
		return x * my_pow(x, --y);
	else
		return 1;  
}

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);

	printf("%d��%d�η�����%d",n,k,my_pow(n, k));
	
	return 0;
}