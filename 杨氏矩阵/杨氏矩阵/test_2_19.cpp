#define _CRT_SECURE_NO_WARNINGS 1

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�
//������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//
//Ҫ��ʱ�临�Ӷ�С��O(N);

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
//				printf("��������%d,������Ϊ(%d,%d)\n", n, i,j);
//			}
//		}
//		p++;
//	}
//}
int main()
{
	/*int arr[5][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9} };*/
	int n = 0;
	printf("��������Ҫ���ҵ�����");
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