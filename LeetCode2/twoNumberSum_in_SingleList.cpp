#define _CRT_SECURE_NO_WARNINGS 1
#include "singleList.h"

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* head =NULL, *tail = NULL;
	int carry = 0;
	while (l1 || l2)
	{
		//解读：当l1或l2为空时记做0
		int n1 = l1 ? l1->val : 0;
		int n2 = l2 ? l2->val : 0;

		int sum = n1 + n2 + carry;

		//先管当前节点的值
		if (!head) {
			head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
			tail->val = sum % 10;
			tail->next = NULL;
		}
		else {
			tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
			tail->next->val = sum % 10;
			tail = tail->next;
			tail->next = NULL;
		}

		carry = sum / 10;
		//在管向前进的数（下一节点的值）
		if (l1) {
			l1 = l1->next;
		}
		if (l2) {
			l2 = l2->next;
		}
	}
	if (carry > 0) {
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		tail->next->val = carry;
		tail->next->next = NULL;
	}
	return head;
}


int main()
{
	struct ListNode* L1 = NULL;
	struct ListNode* L2 = NULL;

	insertNode(&L1, 2);
	insertNode(&L1, 4);
	insertNode(&L1, 3);
	printList(L1);

	insertNode(&L2, 5);
	insertNode(&L2, 6);
	insertNode(&L2, 4);
	printList(L2);

	printList(addTwoNumbers(L1, L2));

	freeList(L1);
	freeList(L2);

	return 0;
}