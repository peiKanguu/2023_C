#include "CrossList.h"

struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    struct ListNode* A = headA;
    struct ListNode* B = headB;

    while (A != B) {
        // Move the pointers to the next node, and if they reach the end, reset them to the head of the other list.
        A = (A == NULL) ? headB : A->next;
        B = (B == NULL) ? headA : B->next;
    }

    // If there's an intersection, the pointers will meet at the intersection node. If not, both pointers will become NULL.
    return A;
}
