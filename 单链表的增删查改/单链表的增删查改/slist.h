#pragma once
#include<assert.h>
#include<stdio.h>

typedef int SLTDateType;

typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;


SListNode* BuySListNode(SLTDateType x);// ��̬����һ���ڵ�

void SListPrint(SListNode* plist);// �������ӡ

void SListPushBack(SListNode** pplist, SLTDateType x);// ������β��

void SListPushFront(SListNode** pplist, SLTDateType x);// �������ͷ��

void SListPopBack(SListNode** pplist);// �������βɾ

void SListPopFront(SListNode** pplist);// ������ͷɾ

SListNode* SListFind(SListNode* plist, SLTDateType x);// ���������

// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType x);// ��������posλ��֮�����x
void SLTInsert(SListNode** pplist, SListNode* pos, SLTDateType x);//posλ��֮ǰ����x

// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);// ������ɾ��posλ��֮���ֵ
void SListErase(SListNode** pplist, SListNode* pos);//posλ��ɾ��

void SListDestroy(SListNode* plist);// �����������
