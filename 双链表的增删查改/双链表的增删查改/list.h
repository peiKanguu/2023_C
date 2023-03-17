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

ListNode* ListInit();// 双向链表初始化

void ListDestory(ListNode* pHead);// 双向链表销毁

void ListPrint(ListNode* pHead);// 双向链表打印

void ListPushBack(ListNode* pHead, LTDataType x);// 双向链表尾插

void ListPopBack(ListNode* pHead);// 双向链表尾删

void ListPushFront(ListNode* pHead, LTDataType x);// 双向链表头插

void ListPopFront(ListNode* pHead);// 双向链表头删

ListNode* ListFind(ListNode* pHead, LTDataType x);// 双向链表查找

void ListInsert(ListNode* pos, LTDataType x);// 双向链表在pos的前面进行插入

void ListErase(ListNode* pos);// 双向链表删除pos位置的节点