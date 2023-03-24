#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;

void AdjustUp(HPDataType* a, int child);//���ϵ���

void AdjustDown(HPDataType* a, int n, int parent);//���µ���

void HeapCreate(Heap* php );// �ѵĹ���

void HeapDestory(Heap* php);// �ѵ�����

void HeapPush(Heap* php, HPDataType x);// �ѵĲ���

void HeapPop(Heap* php);// �ѵ�ɾ��

HPDataType HeapTop(Heap* php);// ȡ�Ѷ�������

int HeapSize(Heap* php);// �ѵ����ݸ���

bool HeapEmpty(Heap* php);// �ѵ��п�

// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��
void PrintTopK(int* a, int n, int k);
void TestTopk();