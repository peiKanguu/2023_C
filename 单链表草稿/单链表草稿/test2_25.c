#include "SList.h"

//void TestSList1()
//{
//	SLTNode* n1 = malloc();
//	SLTNode* n2 = malloc();
//	n1->next = n2;
//
//	SLTNode n1;
//	SLTNode n2;
//	n1.next = &n2;
//}

//void TestSList1()
//{
//	/*SLTNode* n1 = BuySLTNode(1);
//	SLTNode* n2 = BuySLTNode(2);
//	SLTNode* n3 = BuySLTNode(3);
//	SLTNode* n4 = BuySLTNode(4);
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;*/
//}

//void TestSList1()
//{
//	SLTNode* plist = CreateSList(5);
//	SLTPrint(plist);
//}

void TestSList2()
{
	SLTNode* plist = CreateSList(5);
	SLTPushBack(&plist, 100);
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	SLTPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 100);
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	//SLTPopBack(&plist);
	//SLTPrint(plist);
}

void TestSList4()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 100);
	SLTPushFront(&plist, 200);
	SLTPushFront(&plist, 300);
	SLTPushFront(&plist, 400);

	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
}

void Swap1(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Swap2(int** pp1, int** pp2)
{
	int* tmp = *pp1;
	*pp1 = *pp2;
	*pp2 = tmp;
}

int main()
{
	TestSList4();
	//int a = 0, b = 1;
	//Swap1(&a, &b);

	//int* ptr1 = &a, *ptr2 = &b;
	//Swap2(&ptr1, &ptr2);

	return 0;
}