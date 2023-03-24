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

void AdjustUp(HPDataType* a, int child);//向上调整

void AdjustDown(HPDataType* a, int n, int parent);//向下调整

void HeapCreate(Heap* php );// 堆的构建

void HeapDestory(Heap* php);// 堆的销毁

void HeapPush(Heap* php, HPDataType x);// 堆的插入

void HeapPop(Heap* php);// 堆的删除

HPDataType HeapTop(Heap* php);// 取堆顶的数据

int HeapSize(Heap* php);// 堆的数据个数

bool HeapEmpty(Heap* php);// 堆的判空

// TopK问题：找出N个数里面最大/最小的前K个问题。
// 比如：未央区排名前10的泡馍，西安交通大学王者荣耀排名前10的韩信，全国排名前10的李白。等等问题都是Topk问题，
// 需要注意：
// 找最大的前K个，建立K个数的小堆
// 找最小的前K个，建立K个数的大堆
void PrintTopK(int* a, int n, int k);
void TestTopk();