#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

int main()
{
	////////////////////////////int i = 0;
	////////////////////////////scanf("%d", &i);
	////////////////////////////int* pi = &i;
	////////////////////////////char a[100];
    /////////////////////////   //ע�⣬�����ڶ�ȡ�ַ�ʱ��scanf�м���һ���ո�
	//////////////////////////////��ʾ���Ե����뻺�����е��κοհ��ַ��������ո��Ʊ���ͻ��з���
	//////////////////////////////�������Ա��⻻�з�����ȡ����
	////////////////////////////for (int x = 0; x < i; x++)
	////////////////////////////{
	////////////////////////////	scanf(" %c", &a[x]);
	////////////////////////////}


	BTDataType a[] = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, &i);
	//printf("������ǰ��������Ϊ��");
	//BinaryTreePrevOrder(root);
	//printf("\n");
	//int size = BinaryTreeSize(root);
	//printf("�ܽڵ�%d\n", size);
	//int LeafSize = BinaryTreeLeafSize(root);
	//printf("Ҷ�ӽڵ�%d\n", LeafSize);
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

