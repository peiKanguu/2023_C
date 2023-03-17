#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct ListNode 
{
	int val;
	struct ListNode* next;
};

//一个指针从相遇点走，另一个指针从起始点走，会在入口点相遇
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
