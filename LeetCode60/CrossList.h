#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int data;
	struct ListNode* next;
};

struct ListNode* createNode(int data);
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB);
void PrintList(struct ListNode* head);