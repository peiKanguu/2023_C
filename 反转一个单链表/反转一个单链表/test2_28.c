#define _CRT_SECURE_NO_WARNINGS 1

//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������

//���룺head = [1, 2]
//�����[2, 1]
//
//���룺head = []
//�����[]

//**********����**********//
#include <stdio.h>
struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* prev = NULL;
	struct ListNode* curr = head;
	while (curr) {
		struct ListNode* next = curr->next;  
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

//�ִ굥����ģ��
int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));

	n1->val = 1; 
	n2->val = 2; 
	n3->val = 3; 
	n4->val = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	struct ListNode* reversedHead = reverseList(n1);

	while (reversedHead != NULL) 
	{
		printf("%d ", reversedHead->val);
		reversedHead = reversedHead->next;
	}

}
