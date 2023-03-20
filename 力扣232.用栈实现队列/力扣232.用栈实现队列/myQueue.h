#pragma once
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
#include<stdio.h>
#include"Stack.h"

typedef struct {
	Stack pushst;
	Stack popst;
} MyQueue;


MyQueue* myQueueCreate();//���еĴ�����������ջ�ͳ���ջ����ջ��ɣ�

void myQueuePush(MyQueue* obj, int x);//��Ԫ��X�Ƶ����е�ĩβ

int myQueuePop(MyQueue* obj);//�Ӷ��еĿ�ͷ�Ƴ�������Ԫ��

int myQueuePeek(MyQueue* obj);//���ض��п�ͷ��Ԫ��

bool myQueueEmpty(MyQueue* obj);//�ж϶����Ƿ�Ϊ��

void myQueueFree(MyQueue* obj);//�ͷŶ���

void myQueuePrint(MyQueue* obj);