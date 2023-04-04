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

void QueuePush(Queue* q, char x);//���

void QueuePop(Queue* q);//����

bool isEmpty(Queue* q);//�ж��Ƿ�Ϊ��