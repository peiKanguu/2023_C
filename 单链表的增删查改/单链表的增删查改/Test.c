#define _CRT_SECURE_NO_WARNINGS 1
#include"slist.h"

void Test()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPrint(plist);

	SListPushFront(&plist, 0);
	SListPushFront(&plist, -1);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);

	SListDestroy(plist);
}

int main()
{
	Test();

	return 0;
}