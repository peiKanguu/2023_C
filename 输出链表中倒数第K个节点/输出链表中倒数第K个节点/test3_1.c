#define _CRT_SECURE_NO_WARNINGS 1

//输入一个链表，输出该链表中倒数第k个结点。

#include <stdio.h>
struct ListNode {
	int val;
	struct ListNode* next;
};

//快慢指针
//

struct ListNode* FindKthToTail(struct ListNode* plistHead, int k) {
	if (plistHead == NULL)
	{
		return NULL;
	}
	struct ListNode* slow = plistHead;
	struct ListNode* fast = plistHead;

	while (k--) {
		if (fast == NULL)
		{
			return NULL;
		}
		fast = fast->next;
	}
	while (fast)
	{
		slow = slow->next;
	}
	return slow;
}

//手搓单链表模板
int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	//struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));

	n1->val = 1;
	n2->val = 2;
	n3->val = 3;
	n4->val = 4;
	n5->val = 5;
	//n6->val = 6;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	int k = 0;
	scanf("%d", &k);

	struct ListNode* remainedHead = FindKthToTail(n1,k);

	while (remainedHead != NULL)
	{
		printf("%d ", remainedHead->val);
		
	}

}