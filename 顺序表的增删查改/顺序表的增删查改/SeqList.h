#pragma once
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#define INIT_CAPACITY 4

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SeqList;

void SeqListInit(SeqList* ps);//初始化

void SeqListDestory(SeqList* ps);//销毁

void SeqListPrint(SeqList* ps);//打印

void SeqListPushBack(SeqList* ps, SLDataType x);//尾插

void SeqListPopBack(SeqList* ps);//尾删

void SeqListPushFront(SeqList* ps, SLDataType x);//头插

void SeqListPopFront(SeqList* ps);//头删

int SeqListFind(SeqList* ps, SLDataType x);// 顺序表查找

void SeqListInsert(SeqList* ps, int pos, SLDataType x);// 顺序表在pos位置插入x

void SeqListErase(SeqList* ps, int pos);// 顺序表删除pos位置的值
