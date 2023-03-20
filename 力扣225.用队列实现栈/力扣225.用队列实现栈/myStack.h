#pragma once
#include<stdio.h>
#include<stdbool.h>
typedef int QDatatype;

typedef struct QueueNode {
    struct QueueNodef* next;
    QDatatype data;
}QNode;

typedef struct Quenue {
    QNode* head;
    QNode* tail;
    int size;
}Queue;

typedef struct {
    Queue q1;
    Queue q2;
} MyStack;

MyStack* myStackCreate();//ջ�Ĵ���

void myStackPush(MyStack* obj, int x);//��Ԫ��Xѹ��ջ��

int myStackPop(MyStack* obj);//�Ƴ�������ջ��Ԫ��

int myStackTop(MyStack* obj);//����ջ��Ԫ��

bool myStackEmpty(MyStack* obj);//�ж�ջ�Ƿ�Ϊ�գ��շ���true

void myStackFree(MyStack* obj);//�ͷ�ջ
