#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h" 

void TestList1()
{
	ListNode* plist = ListInit();

	//生成head-1-2-3-4
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	//尾删4：head-1-2-3
	ListPopBack(plist);
	ListPrint(plist);

	//头加1，2：head-2-1-1-2-3
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPrint(plist);

	//头删2，1：head-1-2-3
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);
}

void TestList2()
{
	ListNode* plist = ListInit();

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListInsert(ListFind(plist, 2), 66);
	ListPrint(plist);

	ListDestory(plist);
	plist = NULL;
}

int main()
{
	TestList1();
	//TestList2();

	return 0;
}