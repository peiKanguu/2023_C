#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//ʵ��ð�����������㷨�ĺ�����arr[] Ϊ����������
void Bubble_sort(int arr[],int sz)
{
    int i, j;
    int temp = 0;

    for (i = 0; i < sz-1; i++) // sz ��Ԫ�أ����� sz-1 �Σ���Ϊ������ڶ�С�����ǣ���С����Ҳ��ȷ����
    {
        for (j = 0; j < sz - 1 - i; j++) // �ӵ� 1 ��Ԫ�ؿ�ʼ������������ sz-1-i
        {                                //�����sz-1-i=sz-(i+i),i+1��ʾ�����ֵ�Ĵ�����ÿ��������                                           //ֵ����һ�������ֵ��Ҫ�����Ĵ���������һ��
            if (arr[j] > arr[j + 1]) //�Ƚ� arr[j] �� arr[j+1] �Ĵ�С
            {                         //���ݴ�С��ϵ���� 2 ��Ԫ�ص�λ��
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i = 0;
    int arr[] = { 3, 2, 4, 1, 6, 5 };
    int sz = sizeof(arr) / sizeof(int);  //������Ĵ�С

        Bubble_sort(arr,sz);             //����ð������

    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}




//int main()
//{
//	int arr[] = { 2, 4, 1, 3, 6, 7, 5, 8, 10, 9 };
//	int sz = sizeof(arr) / sizeof(int);
//	int tmp;
// 
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{ 
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("%d", sz);
//	return 0;
//}