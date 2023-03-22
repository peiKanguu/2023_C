#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;    
};

//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* src = head;
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    while (src->next != NULL)
//    {
//        if (src->next->val == val) {
//            src->next = src->next->next;
//        }
//        else {
//            src = src->next;
//        }
//    }
//
//    if (head != NULL && head->val == val)
//    {
//        head = head->next;
//    }
//
//    return head;
//
//}

//以单链表的形式解题
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode* newnode = NULL, * tail = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        if (cur->val != val)
        {
            if (tail == NULL)
            {
                newnode = tail = cur;
            }
            else
            {
                tail->next = cur;
                tail = tail->next;
            }

            cur = cur->next;
        }
        else
        {
            struct ListNode* next = cur->next;
            free(cur);
            cur = next;
        }
    }

    if (tail)
        tail->next = NULL;

    return newnode;
}


int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n7 = (struct ListNode*)malloc(sizeof(struct ListNode));

    n1->val = 1;
    n2->val = 2;
    n3->val = 6;
    n4->val = 3;
    n5->val = 4;
    n6->val = 5;
    n7->val = 6;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = NULL;

    struct ListNode* p = removeElements(n1, 6);
    while (p != NULL)
    {
        printf("%d->", p->val);
        p = p->next;
    }

    return 0;
}