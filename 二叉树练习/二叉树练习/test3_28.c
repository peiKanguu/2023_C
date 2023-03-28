#define _CRT_SECURE_NO_WARNINGS 1
#include<>

// 二叉树查找值为x的结点//是否可行？？？？？？？？？？？？？？？？？？？？
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	else
	{
		return BinaryTreeFind(root->left, x);
		return BinaryTreeFind(root->right, x);
	}
}

//BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	if (root->data == x)
//	{
//		return root;
//	}
//	BTNode* left_result = BinaryTreeFind(root->left, x);
//	if (left_result)
//	{
//		return left_result;
//	}
//	return BinaryTreeFind(root->right, x);
//}

int main()
{

	return 0;
}