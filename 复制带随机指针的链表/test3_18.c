#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Node {
    int val;
    struct Node* next;
    struct Node* random;
};

void ListPrint(struct Node* phead)
{
    struct Node* cur = phead;
    while (cur) {
        if (cur->random == NULL) {
            printf("[%d,null]->", cur->val);
        }
        else {
            printf("[%d,%d]->", cur->val, cur->random->val);
        }
        cur = cur->next;
    }
    printf("\n");
}

struct Node* copyRandomList(struct Node* head) {
    if (head == NULL) return NULL;

    // 首先，拷贝节点并链接在原节点后面A-B-C => A-A'-B-B'-C-C'
    struct Node* cur = head;
    while (cur) {
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;
        copy->next = cur->next;
        copy->random = NULL;
        cur->next = copy;
        cur = copy->next;
    }

    // 然后，拷贝节点的random（拷贝节点的random是原节点的random->next)
    cur = head;
    while (cur) {
        struct Node* copy = cur->next;
        if (cur->random != NULL) {
            copy->random = cur->random->next;
        }
        cur = copy->next;
    }

    // 最后，将拷贝的节点脱离，组成新的链表
    cur = head;
    struct Node* copyHead = cur->next;
    while (cur) {
        struct Node* copy = cur->next;
        cur->next = copy->next;
        if (cur->next != NULL) {
            copy->next = cur->next->next;
        }
        cur = cur->next;
    }

    return copyHead;
}

int main() {
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n5 = (struct Node*)malloc(sizeof(struct Node));

    n1->val = 7;
    n2->val = 13;
    n3->val = 11;
    n4->val = 10;
    n5->val = 1;

    n1->random = NULL;
    n2->random = n1;
    n3->random = n5;
    n4->random = n3;
    n5->random = n1;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    ListPrint(copyRandomList(n1));

    return 0;
}