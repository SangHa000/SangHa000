#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//main()���� 1~7������ ���ڸ� �Ű������� �����Ͽ�
	//�Ű������� ���� 1�̸� ������ ���, 2�̸� ȭ�������...,7�̸� �Ͽ��� ���
	day_num(1);
	

}

void day_num(int n)
{
	if (n == 1) {
		printf("�������Դϴ�.");
	}
	else if (n == 2) {
		printf("ȭ�����Դϴ�.");
	}
	else if (n == 3) {
		printf("�������Դϴ�.");
	}
	else if (n == 4) {
		printf("������Դϴ�.");
	}
	else if (n == 5) {
		printf("�ݿ����Դϴ�.");
	}
	else if (n == 6) {
		printf("������Դϴ�.");
	}
	else if (n == 7) {
		printf("�Ͽ����Դϴ�.");
	}
	else if (n != 0) {
		printf("�߸��� �����Դϴ�.");
	}

}