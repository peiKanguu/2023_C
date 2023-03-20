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

MyStack* myStackCreate();//栈的创建

void myStackPush(MyStack* obj, int x);//将元素X压入栈顶

int myStackPop(MyStack* obj);//移除并返回栈顶元素

int myStackTop(MyStack* obj);//返回栈顶元素

bool myStackEmpty(MyStack* obj);//判断栈是否为空，空返回true

void myStackFree(MyStack* obj);//释放栈
