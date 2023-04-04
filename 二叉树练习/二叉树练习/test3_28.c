#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef struct BTNode
{
    char data;
    struct BTNode* left;
    struct BTNode* right;
} BTNode;

void inittree(BTNode* root)
{
    root->data = '\0';
    root->right = NULL;
    root->left = NULL;
}

BTNode* create(BTNode* root)
{
    char value;
    scanf(" %c", &value);
    if (value == '#')
    {
        root = NULL;
    }
    else
    {
        root = (BTNode*)malloc(sizeof(BTNode));
        root->data = value;
        root->left = create(root->left);
        root->right = create(root->right);
    }
    return root;
}

BTNode* BinaryTreeFind(BTNode* root, char x)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == x)
    {
        return root;
    }
    BTNode* result = BinaryTreeFind(root->left, x);
    if (result != NULL)
    {
        return result;
    }
    return BinaryTreeFind(root->right, x);
}

int main()
{
    BTNode* root = (BTNode*)malloc(sizeof(BTNode));
    inittree(root);
    printf("按照先序输入二叉树：\n");
    root = create(root);

    char x;
    scanf(" %c", &x);

    BTNode* result = BinaryTreeFind(root, x);
    if (result != NULL)
    {
        printf("Found node with value %c\n", result->data);
    }
    else
    {
        printf("Node not found\n");
    }

    return 0;
}






























////定义二叉树结构
//typedef struct BTNode
//{
//	char data;
//	struct BTNode* left;
//	struct BTNode* right;
//}BTNode;
////初始化
//void inittree(BTNode* root)
//{
//	root->data = "";
//	root->right = NULL;
//	root->left = NULL;
//}
////二叉数的创建
//BTNode* create(BTNode* root)
//{
//	char value;
//	scanf("%c", &value);
//	if (value == '#')
//	{
//		root = NULL;
//	}
//	else
//	{
//		root = (BTNode*)malloc(sizeof(BTNode));
//		root->data = value;
//		root->left = create(root->left);
//		root->right = create(root->right);
//	}
//	return root;
//}
//
//
//// 二叉树查找值为x的结点//是否可行？？？？？？？？？？？？？？？？？？？？
////BTNode* BinaryTreeFind(BTNode* root, int x)
////{
////	if (root == NULL)
////	{
////		return NULL;
////	}
////	if (root->data == x)
////	{
////		return root;
////	}
////	else
////	{
////		return BinaryTreeFind(root->left, x);
////		return BinaryTreeFind(root->right, x);
////	}
////}
//
//BTNode* BinaryTreeFind(BTNode* root, char x)
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
//
//int main()
//{
//	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
//	inittree(root);
//	printf("按照先序输入二叉树：\n");
//	root = create(root);
//
//	char x;
//	scanf("%c", &x);
//
//	printf("%c", BinaryTreeFind( root,x));
//
//	return 0;
//}