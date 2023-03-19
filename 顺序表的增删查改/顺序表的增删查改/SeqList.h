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

void SeqListInit(SeqList* ps);//��ʼ��

void SeqListDestory(SeqList* ps);//����

void SeqListPrint(SeqList* ps);//��ӡ

void SeqListPushBack(SeqList* ps, SLDataType x);//β��

void SeqListPopBack(SeqList* ps);//βɾ

void SeqListPushFront(SeqList* ps, SLDataType x);//ͷ��

void SeqListPopFront(SeqList* ps);//ͷɾ

int SeqListFind(SeqList* ps, SLDataType x);// ˳������

void SeqListInsert(SeqList* ps, int pos, SLDataType x);// ˳�����posλ�ò���x

void SeqListErase(SeqList* ps, int pos);// ˳���ɾ��posλ�õ�ֵ
