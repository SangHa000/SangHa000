#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void day_num(int n);

int main()
{
	//main()���� 1~7������ ���ڸ� �Ű������� �����Ͽ�
	//�Ű������� ���� 1�̸� ������ ���, 2�̸� ȭ�������...,7�̸� �Ͽ��� ���
	printf("���Ϲ�ȣ �Է� 1~7:");
	int d;
	scanf("%d", &d);
	day_num(d); //�Լ� ȣ��
	

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
	else if (n != 1,2,3,4,5,6,7) {
		printf("�߸��� �����Դϴ�.");
	}

}