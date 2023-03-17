#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h" 

void TestList1()
{
	ListNode* plist = ListInit();

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);

	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPrint(plist);

	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);
}

int main()
{
	TestList1();

	return 0;
}