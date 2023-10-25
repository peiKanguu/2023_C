#define _CRT_SECURE_NO_WARNINGS 1
#include "singleList.h"

struct ListNode* createNode(int data) {
	struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	if (newNode == NULL)
	{
		printf("malloc failed\n");
		exit(1);
	}
	newNode->val = data;
	newNode->next = NULL;
	return newNode;
}

void insertNode(struct ListNode** head, int data) {
	struct ListNode* newNode = createNode(data);
	if (*head == NULL) {
		*head = newNode;
	}
	else {
		struct ListNode* current = *head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
}

void printList(struct ListNode* head) {
	struct ListNode* current = head;
	while (current != NULL) {
		printf("%d->", current->val);
		current = current->next;
	}
	printf("NULL\n\n");
}

void freeList(struct ListNode* head) {
	struct ListNode* current = head;
	while (current != NULL) {
		struct ListNode* temp = current;
		current = current->next;
		free(temp);
	}
}