#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

int main()
{
	BTDataType a[] = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, &i);
	printf("������ǰ��������Ϊ��");
	BinaryTreePrevOrder(root);
	printf("\n");
	int size = BinaryTreeSize(root);
	printf("�ܽڵ�%d\n", size);
	int LeafSize = BinaryTreeLeafSize(root);
	printf("Ҷ�ӽڵ�%d\n", LeafSize);
	if (BinaryTreeFind(root, 'G'))
	{
		printf("%c", BinaryTreeFind(root, 'G')->data);
	}
	else
		printf("û�ҵ�");
	printf("\n");

	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");
	BinaryTreeLevelOrder(root);
	printf("\n");

	printf("��3��ĸ���Ϊ��%d\n", BinaryTreeLevelKSize(root, 3));

	if (BinaryTreeComplete(root))
		printf("����ȫ������\n");
	else
		printf("������ȫ������\n");

	BinaryTreeDestory(&*root);
	root = NULL;

	return 0;
}

