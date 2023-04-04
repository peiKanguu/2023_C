#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

int main()
{
	////////////////////////////int i = 0;
	////////////////////////////scanf("%d", &i);
	////////////////////////////int* pi = &i;
	////////////////////////////char a[100];
    /////////////////////////   //注意，我们在读取字符时在scanf中加了一个空格，
	//////////////////////////////表示忽略掉输入缓冲区中的任何空白字符，包括空格、制表符和换行符。
	//////////////////////////////这样可以避免换行符被读取到。
	////////////////////////////for (int x = 0; x < i; x++)
	////////////////////////////{
	////////////////////////////	scanf(" %c", &a[x]);
	////////////////////////////}


	BTDataType a[] = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, &i);
	//printf("二叉树前序遍历结果为：");
	//BinaryTreePrevOrder(root);
	//printf("\n");
	//int size = BinaryTreeSize(root);
	//printf("总节点%d\n", size);
	//int LeafSize = BinaryTreeLeafSize(root);
	//printf("叶子节点%d\n", LeafSize);
	//if (BinaryTreeFind(root, 'G'))
	//{
	//	printf("%c",BinaryTreeFind(root, 'G')->data);
	//}
	//printf("\n");
	BinaryTreeLevelOrder(root);
	printf("\n");
	//BinaryTreeDestory(&*root);

	return 0;
}

