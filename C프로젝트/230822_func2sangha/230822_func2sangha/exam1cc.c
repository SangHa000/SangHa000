#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> //srand()
#include <time.h> //time()
void hol_jjack(int brr[], int arr_len);
// 1. main()���� 10���� ���ڸ� �����ϴ� 1���� �迭 ����
// 2. �����ϰ� 10���� ���ڸ� �迭�� ����
// 3. �迭�� �ּҰ��� �Ű������� �����ϰ� Ȧ,¦�� �����Ͽ� ��� �Լ�
//void hol_jjack(int brr[]);


int main()
{
	srand(time(NULL));
	int random = 0; 
	int arr[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		random = (rand() % 45) + 1; //���� ������
		//printf("%d\n", random);
		arr[i] = random; //arr[i]�� �����ֱ�.
		//printf("%d\n", arr[i]); // �����
		//while (1); // ������Ҷ� ����.
	}
	int arr_len = sizeof(arr) / sizeof(int); //40 /4 =10 ==> �������
	hol_jjack(arr, arr_len); //==> arr_len�� �����鰪 10�� �Է´�.
	
}

void hol_jjack(int brr[], int arr_len)
{
	for (int i = 0; i < arr_len; i++) {
		int a = brr[i];
		if (a % 2 == 0) {
			printf("%d�� ¦���Դϴ�.\n",a);
		}
		else if (a % 2 == 1) {
			printf("%d�� Ȧ���Դϴ�.\n",a);
		}
	}
}//��Ʈ�� f7 �����˻�
// f5 ����