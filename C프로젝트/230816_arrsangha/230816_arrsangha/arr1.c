#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5] = { 10,20,30,40,50 };//�迭 �ʱ�ȭ
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("�迭��ҿ� ����� ���� ��: %d\n", sum);


}