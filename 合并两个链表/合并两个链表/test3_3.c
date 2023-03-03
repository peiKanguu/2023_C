#define _CRT_SECURE_NO_WARNINGS 1


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL)return list2;
    if (list2 == NULL)return list1;

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

