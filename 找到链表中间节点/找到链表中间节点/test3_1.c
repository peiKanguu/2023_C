#define _CRT_SECURE_NO_WARNINGS 1

//���㵥�����ͷ��� head �������ҳ�������������м��㡣
//
//����������м��㣬�򷵻صڶ����м��㡣

//���룺head = [1, 2, 3, 4, 5]
//�����[3, 4, 5]
//���ͣ�����ֻ��һ���м��㣬ֵΪ 3 ��
//���룺head = [1, 2, 3, 4, 5, 6]
//�����[4, 5, 6]
//���ͣ��������������м��㣬ֵ�ֱ�Ϊ 3 �� 4 �����صڶ������

#include <stdio.h>
struct ListNode {
	int val;
	struct ListNode* next;
};

//����ָ��

struct ListNode* middleNode(struct ListNode* head) {
	struct ListNode* slow = head;
	struct ListNode* fast = head;
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

//�ִ굥����ģ��
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