#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int m = 0;
	scanf("%d", &m);
	
	int i = 0;
	//ż��λ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	//����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}





//#include <stdio.h>
//
//// ��ӡһ�������Ķ���������
//void print_binary(int num) {
//    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
//        printf("%d", (num >> i) & 1);
//    }
//}
//
//int main() {
//    int num, bit, even = 0, odd = 0;
//
//    // ��ȡ�û����������
//    printf("������һ��������");
//    scanf("%d", &num);
//
//    // ���������Ķ��������е�ÿһλ
//    for (int i = 0; i < sizeof(num) * 8; i++) {
//        bit = (num >> i) & 1;
//
//        // �����ǰλ��������ż����������ӵ� even ��
//        if (i % 2 == 0) {
//            even = (even << 1) | bit;
//        }
//        // �����ǰλ��������������������ӵ� odd ��
//        else {
//            odd = (odd << 1) | bit;
//        }
//    }
//
//    // ��ӡż��λ������λ�Ķ���������
//    printf("ż��λ�Ķ���������Ϊ��");
//    print_binary(even);
//    printf("\n");
//
//    printf("����λ�Ķ���������Ϊ��");
//    print_binary(odd);
//    printf("\n");
//
//    return 0;
//}

