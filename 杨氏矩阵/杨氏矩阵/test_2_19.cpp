#define _CRT_SECURE_NO_WARNINGS 1

//有一个数字矩阵，矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//
//
//要求：时间复杂度小于O(N);

#include <stdio.h>
#include <stdbool.h>

bool search_in_matrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrixSize == 0 || matrixColSize[0] == 0) {
        return false;
    }
    int row = 0, col = matrixColSize[0] - 1;
    while (row < matrixSize && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        }
        else if (matrix[row][col] > target) {
            col--;
        }
        else {
            row++;
        }
    }
    return false;
}



//#include <stdio.h>
//
//void IfExit(int (*p)[5], int n)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (n == (*p)[j])
//			{
//				printf("存在数字%d,且坐标为(%d,%d)\n", n, i,j);
//			}
//		}
//		p++;
//	}
//}
int main()
{
	/*int arr[5][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9} };*/
	int n = 0;
	printf("请输入想要查找的数：");
	scanf("%d", &n);

	/*IfExit(arr,n);*/
    int matrix[3][4] = { {1, 3, 5, 7}, {2, 4, 6, 8}, {3, 5, 7, 9} };
    int* matrixPtr[3] = { matrix[0], matrix[1], matrix[2] };
    int matrixColSize[3] = { 4, 4, 4 };
    bool found = search_in_matrix(matrixPtr, 3, matrixColSize, 6);
    if (found) {
        printf("Found!\n");
    }
    else {
        printf("Not found.\n");
    }

	return 0;
}