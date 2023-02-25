#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//struct SListNode
//{
//	SLTDataType data;
//	struct SListNode* next;
//};
//typedef struct SListNode SLTNode;


//void SLTPushBack(SLTDataType x)
//{
//	SLTNode node;
//}

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySLTNode(SLTDataType x);
SLTNode* CreateSList(int n);
void SLTPrint(SLTNode* phead);

void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** pphead);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* plist, SLTDataType x);

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SLTNode* pos, SLTDataType x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SLTNode* pos);

// ��pos֮ǰ����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
// ɾ��posλ��
void SListErase(SLTNode** pphead, SLTNode* pos, SLTDataType x);
