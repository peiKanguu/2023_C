#pragma once
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* createNode(int data);
void insertNode(struct ListNode** head, int data);
void printList(struct ListNode* head);
void freeList(struct ListNode* head);
