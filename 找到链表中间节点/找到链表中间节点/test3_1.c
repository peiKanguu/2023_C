#define _CRT_SECURE_NO_WARNINGS 1

//给你单链表的头结点 head ，请你找出并返回链表的中间结点。
//
//如果有两个中间结点，则返回第二个中间结点。

//输入：head = [1, 2, 3, 4, 5]
//输出：[3, 4, 5]
//解释：链表只有一个中间结点，值为 3 。
//输入：head = [1, 2, 3, 4, 5, 6]
//输出：[4, 5, 6]
//解释：该链表有两个中间结点，值分别为 3 和 4 ，返回第二个结点

#include <stdio.h>
struct ListNode {
	int val;
	struct ListNode* next;
};

//快慢指针

struct ListNode* middleNode(struct ListNode* head) {
	struct ListNode* slow = head;
	struct ListNode* fast = head;
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
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
	struct ListNode* n6 = (struct ListNode*)malloc(sizeof(struct ListNode));

	n1->val = 1;
	n2->val = 2;
	n3->val = 3;
	n4->val = 4;
	n5->val = 5;
	n6->val = 6;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	struct ListNode* remainedHead = middleNode(n1);

	while (remainedHead != NULL)
	{
		printf("%d ", remainedHead->val);
		remainedHead = remainedHead->next;
	}

}