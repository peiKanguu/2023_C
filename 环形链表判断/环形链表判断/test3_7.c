#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct ListNode 
{
	int val;
	struct ListNode* next;
};

//һ��ָ����������ߣ���һ��ָ�����ʼ���ߣ�������ڵ�����
struct ListNode* detectCycle(struct ListNode* head) 
{
	struct ListNode* fast, * slow;
	fast = slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			struct ListNode* meet = slow;
			struct ListNode* start = head;

			while (meet != start)
			{
				meet = meet->next;
				start = start->next;
			}

			return meet;
		}
	}

	return NULL;
}
