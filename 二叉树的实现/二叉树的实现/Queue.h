#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "BinaryTree.h"

typedef struct QNode {
	struct BTNode* data;
	struct QNode* next;
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

void QueuePush(Queue* q, struct BTNode* x);//入队

void QueuePop(Queue* q);//出队

bool QueueIsEmpty(Queue* q);//判断是否为空

struct BTNode* QueueFront(Queue* q);
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<assert.h>
//
//typedef struct BinaryTreeNode* QDatatype;
//
//typedef struct QueueNode
//{
//	struct QueueNode* next;
//	QDatatype data;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//	int size;
//}Queue;
//
//// 10:40
//void QueueInit(Queue* pq);
//void QueueDestroy(Queue* pq);
//void QueuePush(Queue* pq, QDatatype x);
//void QueuePop(Queue* pq);
//int QueueSize(Queue* pq);
//bool QueueEmpty(Queue* pq);
//QDatatype QueueFront(Queue* pq);
//QDatatype QueueBack(Queue* pq);