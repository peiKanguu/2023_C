#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

int main()
{
	Heap hp;

	HeapCreate(&hp);
	HeapPush(&hp, 34);
	HeapPush(&hp, 3);
	HeapPush(&hp, 4);
	HeapPush(&hp, 32);
	HeapPush(&hp, 35);
	HeapPush(&hp, 30);
	HeapPush(&hp, 14);
	HeapPush(&hp, 24);

	int k = 0;
	scanf("%d", &k);
	while (!HeapEmpty(&hp) && k--)
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}
	return 0;
}