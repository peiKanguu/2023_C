#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    struct ListNode* p = list1;
    struct ListNode* q = list2;
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next = NULL;
    struct ListNode* t = head;
    while (p && q) {
        if (p->val <= q->val) {
            t->next = p;
            p = p->next;
        }
        else {
            t->next = q;
            q = q->next;
        }
        t = t->next;
    }
    p = (p ? p : q);
    t->next = p;

    return head->next;

}

// 手搓单链表模板
int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));

    struct ListNode* n = (struct ListNode*)malloc(sizeof(struct ListNode));
    n->val = 1;
    n->next = NULL;

    n1->val = 1;
    n2->val = 2;
    n3->val = 3;
    n4->val = 4;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    struct ListNode* reversedHead = mergeTwoLists(n1, n);

    while (reversedHead != NULL)
    {
        printf("%d ", reversedHead->val);
        reversedHead = reversedHead->next;
    }

}