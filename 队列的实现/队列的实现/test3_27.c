#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int QueueDataType;
// ������н��
typedef struct Node
{
    QueueDataType data;
    struct Node* next;
} Node;

// ������нṹ��
typedef struct Queue
{
    Node* front; // ��ͷָ��
    Node* rear; // ��βָ��
} Queue;

Queue* QueueCreate()
{
    Queue* q = (Queue*)malloc(sizeof(Queue));
    if (q == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    q->front = q->rear = NULL;
    return q;
}

void QueueDestroy(Queue* q)
{
    assert(q);
    Node* temp;
    while (q->front != NULL)
    {
        temp = q->front;
        q->front = q->front->next;
        free(temp);
        temp = NULL;
    }
    free(q);
    q = NULL;
}

void QueuePush(Queue* q, QueueDataType data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL)
    {
        printf("Memory allocation failed");
        return;
    }
    node->data = data;
    node->next = NULL;
    if (q->front == NULL)
    {
        q->front = node;
        q->rear = node;
    }
    else
    {
        q->rear->next = node;
        q->rear = node;
    }
}

QueueDataType QueuePop(Queue* q)
{
    assert(q);

    if (q->front == NULL)
    {
        printf("Queue is empty.\n");
        return -1;
    }
    int data = q->front->data;
    Node* temp = q->front;
    q->front = q->front->next;
    free(temp);
    temp = NULL;
    if (q->front == NULL)
    {
        q->rear = NULL;
    }
    return data;
}

bool QueueIsEmpty(Queue* q)
{
    assert(q);

    return q->front == NULL;
}

void QueuePrint(Queue* q)
{
    assert(q);

    if (QueueIsEmpty(q))
    {
        printf("Queue is empty.\n");
        return;
    }
    Node* node = q->front;
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    Queue* q = QueueCreate();
    QueuePush(q, 1);
    QueuePush(q, 2);
    QueuePush(q, 3);
    QueuePrint(q);

    if (!(QueueIsEmpty(q)))
    {
        printf("���в�Ϊ��\n");
    }

    QueuePop(q);
    QueuePrint(q);

    QueueDestroy(q);
    return 0;
}