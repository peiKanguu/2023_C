#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef char BTDataType;

typedef struct BinaryTreeNode
{
    BTDataType data;
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
}BTNode;

BTDataType a[] = "ABD##E#H##CF##G##";
int i = 0;

BTNode* BinaryTreeCreate(BTDataType* a, int* pi);
void BinaryTreeDestory(BTNode** root);

BTNode* root = BinaryTreeCreate(a, &i);
BinaryTreeDestory(&*root);

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

void BinaryTreeDestory(BTNode** root) {
    if (root == NULL || *root == NULL) {
        return;
    }
    BinaryTreeDestory(&(*root)->left);
    BinaryTreeDestory(&(*root)->right);
    free(*root);
    *root = NULL;
    return;
}