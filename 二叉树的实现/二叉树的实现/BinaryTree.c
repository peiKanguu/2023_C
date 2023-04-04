#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"


BTNode* BinaryTreeCreate(BTDataType* a, int* pi)
{
	BTDataType data = a[(*pi)++];
	if (data == '#')
		return NULL;
	BTNode* Node = (BTNode*)malloc(sizeof(BTNode));
	Node->data = data;
	Node->left = BinaryTreeCreate(a, pi);
	Node->right = BinaryTreeCreate(a, pi);
	return Node;
}

void BinaryTreeDestory(BTNode** root)
{
	if (*root == NULL)
	{
		return;
	}
	BinaryTreeDestory(&((*root)->left));
	BinaryTreeDestory(&((*root)->right));
	free(*root);
	*root == NULL;
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

}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	BinaryTreeFind(root->left, x);
	BinaryTreeFind(root->right, x);
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
	if (root == NULL) {
		return;
	}

	Queue queue;
	QueueInit(&queue);
	if(root)
		QueuePush(&queue, root->data);

	if (QueueIsEmpty(&queue))
	{
		printf("Empty");
	}
	while (!QueueIsEmpty(&queue))
	{
		BTNode* front = QueueFront(&queue);
		QueuePop(&queue);
		printf("%c", front->data);

		if (front->left) {
			QueuePush(&queue, front->left);
		}
		if (front->right) {
			QueuePush(&queue, front->right);
		}
	}
	QueueDestroy(&queue);
}

int BinaryTreeComplete(BTNode* root)
{

}