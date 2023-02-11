#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void hanoi(int num, char sou, char tar, char aux) 
{
    static int i = 1;//ͳ���ƶ�����
     
    if (num == 1) //���Բ���������� 1 ������ֱ�Ӵ���ʼ���ƶ���Ŀ����
    {
        printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
        i++;
    }
    else 
    {
        //�ݹ���� hanoi() �������� num-1 ��Բ�̴���ʼ���ƶ�����������
        hanoi(num - 1, sou, aux, tar);
        //����ʼ����ʣ������һ����Բ���ƶ���Ŀ������
        printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
        i++;
        //�ݹ���� hanoi() ���������������ϵ� num-1 Բ���ƶ���Ŀ������
        hanoi(num - 1, aux, tar, sou);
    }
}

int main()
{
	int n = 0;
	scanf("%d", &n);//������ʼ��Բ�̸���
	hanoi(n, 'A', 'B', 'C');//A��B��C�ֱ��ʾ��ʼ����Ŀ������������
	return 0;
}




//#include <stdio.h>
//void hanoi(int num, char sou, char tar, char aux) {
//    //ͳ���ƶ�����
//    static int i = 1;
//    //���Բ���������� 1 ������ֱ�Ӵ���ʼ���ƶ���Ŀ����
//    if (num == 1) {
//        printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
//        i++;
//    }
//    else {
//        //�ݹ���� hanoi() �������� num-1 ��Բ�̴���ʼ���ƶ�����������
//        hanoi(num - 1, sou, aux, tar);
//        //����ʼ����ʣ������һ����Բ���ƶ���Ŀ������
//        printf("��%d��:�� %c �ƶ��� %c\n", i, sou, tar);
//        i++;
//        //�ݹ���� hanoi() ���������������ϵ� num-1 Բ���ƶ���Ŀ������
//        hanoi(num - 1, aux, tar, sou);
//    }
//}
//
//int main()
//{
//    //���ƶ� 3 ��Բ��Ϊ������ʼ����Ŀ�������������ֱ��� A��B��C ��ʾ
//    hanoi(4, 'A', 'B', 'C');
//    return 0;
//}