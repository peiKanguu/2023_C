#include "CrossList.h"

// Function to create a new node with the given data
struct ListNode* createNode(int data) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void PrintList(struct ListNode* head)
{
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
	struct ListNode* headA = NULL;
	struct ListNode* headB = NULL;

    struct ListNode* nodeA1 = createNode(4);
    struct ListNode* nodeA2 = createNode(1);
    struct ListNode* nodeA3 = createNode(8);
    struct ListNode* nodeA4 = createNode(4);
    struct ListNode* nodeA5 = createNode(5);
    headA = nodeA1;
    nodeA1->next = nodeA2;
    nodeA2->next = nodeA3;
    nodeA3->next = nodeA4;
    nodeA4->next = nodeA5;

    struct ListNode* nodeB1 = createNode(5);
    struct ListNode* nodeB2 = createNode(6);
    struct ListNode* nodeB3 = createNode(1);
    struct ListNode* nodeB4 = nodeA3;
    struct ListNode* nodeB5 = nodeA4;
    struct ListNode* nodeB6 = nodeA5;
    headB = nodeB1;
    nodeB1->next = nodeB2;
    nodeB2->next = nodeB3;
    nodeB3->next = nodeB4;

    PrintList(headA);
    PrintList(headB);

    struct ListNode* result = getIntersectionNode(headA, headB);

    printf("%d", result->data);

	return 0;
}