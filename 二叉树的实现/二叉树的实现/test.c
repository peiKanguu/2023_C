#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

int main()
{
	BTDataType a[] = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, &i);
	printf("二叉树前序遍历结果为：");
	BinaryTreePrevOrder(root);
	printf("\n");
	int size = BinaryTreeSize(root);
	printf("总节点%d\n", size);
	int LeafSize = BinaryTreeLeafSize(root);
	printf("叶子节点%d\n", LeafSize);
	if (BinaryTreeFind(root, 'G'))
	{
		printf("%c", BinaryTreeFind(root, 'G')->data);
	}
	else
		printf("没找到");
	printf("\n");

	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");
	BinaryTreeLevelOrder(root);
	printf("\n");

	printf("第3层的个数为：%d\n", BinaryTreeLevelKSize(root, 3));

	if (BinaryTreeComplete(root))
		printf("是完全二叉树\n");
	else
		printf("不是完全二叉树\n");

	BinaryTreeDestory(&*root);
	root = NULL;

	return 0;
}

