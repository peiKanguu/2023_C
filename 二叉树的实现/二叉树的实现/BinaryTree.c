#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

BTNode* BinaryTreeCreate(BTDataType* a, int* pi)
{
	BTDataType data = a[(*pi)++];
	if (data == '#')
		return NULL;
	BTNode* Node = (BTNode*)malloc(sizeof(BTNode));
	if (Node == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	Node->data = data;
	Node->left = BinaryTreeCreate(a, pi);
	Node->right = BinaryTreeCreate(a, pi);
	return Node;
}

//void BinaryTreeDestory(BTNode** root) {
//	if (root == NULL || *root == NULL) {
//		return;
//	}
//	BinaryTreeDestory(&(*root)->left);
//	BinaryTreeDestory(&(*root)->right);
//	free(*root);
//	*root = NULL;
//}
void BinaryTreeDestory(BTNode* root) {
	if (root == NULL) {
		return;
	}
	BinaryTreeDestory(root->left);
	BinaryTreeDestory(root->right);
	free(root);
	return;
}

int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}

	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL || k < 0)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
}


//**************************************************************************************************
// 这种做法错了，递归后不能直接返回到最外层？？？
//BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//		return NULL;
//	if (root->data == x)
//		return root;
//	BinaryTreeFind(root->left, x);
//	BinaryTreeFind(root->right, x);
//}
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	BTNode* lret = BinaryTreeFind(root->left, x);
	if (lret)
	{
		return lret;
	}
	BTNode* rret = BinaryTreeFind(root->right, x);
	if (rret)
	{
		return rret;
	}

	return NULL;
}

void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
		return;
	printf("%c", root->data);
	BinaryTreePrevOrder(root->left);
	BinaryTreePrevOrder(root->right);
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
		return;
	BinaryTreeInOrder(root->left);
	printf("%c", root->data);
	BinaryTreePrevOrder(root->right);
}

void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
		return;
	BinaryTreePostOrder(root->left);
	BinaryTreePostOrder(root->right);
	printf("%c", root->data);
}

//void BinaryTreeLevelOrder(BTNode* root)//层序遍历通过队列实现。
//{
//	Queue* queue = QueueCreate();
//	QueuePush(queue, root->data);
//	while (root!=NULL)
//	{
//		printf("%c", QueuePop(queue));
//		if (root->left)
//			BinaryTreeLevelOrder(root->left->data);
//		if (root->right)
//			BinaryTreeLevelOrder(root->right->data);
//	}
//}
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue queue;
	QueueInit(&queue);
	if(root)
		QueuePush(&queue, root);

	if (QueueIsEmpty(&queue))
	{
		printf("Empty");
	}
	while (!QueueIsEmpty(&queue))
	{
		BTNode* front = QueueFront(&queue);
		QueuePop(&queue);
		printf("%c", front->data);

		if (front->left)
			QueuePush(&queue, front->left);

		if (front->right)
			QueuePush(&queue, front->right);
	}
	QueueDestroy(&queue);

	return 0;
}

bool BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);

	bool isLeafNode = false;
	while (!QueueIsEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front == NULL)
		{
			isLeafNode = true;
		}
		else
		{
			// 如果前面的节点已经是叶子节点了，而当前节点不为空，说明该二叉树不是完全二叉树
			if (isLeafNode)
			{
				QueueDestroy(&q);
				return false;
			}

			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}
	}

	QueueDestroy(&q);
	return true;
}









