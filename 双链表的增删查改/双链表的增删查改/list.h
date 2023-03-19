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

void ListDestory(ListNode* phead);// ˫����������

void ListPrint(ListNode* phead);// ˫�������ӡ

void ListPushBack(ListNode* phead, LTDataType x);// ˫������β��

void ListPopBack(ListNode* phead);// ˫������βɾ

void ListPushFront(ListNode* phead, LTDataType x);// ˫������ͷ��

void ListPopFront(ListNode* phead);// ˫������ͷɾ

ListNode* ListFind(ListNode* phead, LTDataType x);// ˫���������

void ListInsert(ListNode* pos, LTDataType x);// ˫��������pos��ǰ����в���

void ListErase(ListNode* pos);// ˫������ɾ��posλ�õĽڵ�