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
//// ������н��
//typedef struct Node
//{
//    QueueDataType data;
//    struct Node* next;
//} Node;
//
//// ������нṹ��
//typedef struct Queue
//{
//    Node* front; // ��ͷָ��
//    Node* rear; // ��βָ��
//} Queue;

void QueueInit(Queue* pq);//��������

void QueuePush(Queue* q, struct BTNode* x);//���

void QueuePop(Queue* q);//����

bool QueueIsEmpty(Queue* q);//�ж��Ƿ�Ϊ��

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