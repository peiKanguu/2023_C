#pragma once
#include<stdio.h>
#include<assert.h>
#include"myStack.h"

void QueueInit(Queue* pq);//���еĳ�ʼ��

bool QueueEmpty(Queue* pq);//�ж϶����Ƿ�Ϊ��

void QueuePush(Queue* pq, QDatatype x);//�������

void QueuePop(Queue* pq);//ɾ��

QDatatype QueueFront(Queue* pq);//����Ԫ�س����У������ƣ�������ͷ�ȳ���

QDatatype QueueBack(Queue* pq);//����Ԫ�س�����

void QueueDestroy(Queue* pq);//���ٶ���