#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "BinaryTree.h"

typedef struct QNode {
	char data;
	struct Node* next;
}QNode;

typedef struct Queue {
	struct QNode* front;
	struct QNode* rear;
	int size;
}Queue;

//typedef char QueueDataType;
//// 定义队列结点
//typedef struct Node
//{
//    QueueDataType data;
//    struct Node* next;
//} Node;
//
//// 定义队列结构体
//typedef struct Queue
//{
//    Node* front; // 队头指针
//    Node* rear; // 队尾指针
//} Queue;

void QueueInit(Queue* pq);//创建队列

void QueuePush(Queue* q, char x);//入队

void QueuePop(Queue* q);//出队

bool isEmpty(Queue* q);//判断是否为空