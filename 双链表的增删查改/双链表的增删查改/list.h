#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;

ListNode* ListInit();// ˫�������ʼ��

void ListDestory(ListNode* pHead);// ˫����������

void ListPrint(ListNode* pHead);// ˫�������ӡ

void ListPushBack(ListNode* pHead, LTDataType x);// ˫������β��

void ListPopBack(ListNode* pHead);// ˫������βɾ

void ListPushFront(ListNode* pHead, LTDataType x);// ˫������ͷ��

void ListPopFront(ListNode* pHead);// ˫������ͷɾ

ListNode* ListFind(ListNode* pHead, LTDataType x);// ˫���������

void ListInsert(ListNode* pos, LTDataType x);// ˫��������pos��ǰ����в���

void ListErase(ListNode* pos);// ˫������ɾ��posλ�õĽڵ�