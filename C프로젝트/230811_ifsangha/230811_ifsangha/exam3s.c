#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*char m;
	system("cls");
	//�Ĵ�޴� �ڵ��ֹ� ���α׷�  switch����
	printf("���ϴ� �Ļ縦 �����ϼ���.\n");
	printf("a.��ġ� : 5000��\n");
	printf("b.����� : 5000��\n");
	printf("c.Į���� : 4500��\n");
	printf("d.��ġ���� : 4000��\n");
	printf("e.����� : 5000��\n");
	printf("�޴��� �����ϼ���\n");
	scanf("%c", &m);

	switch (m) {
	case 'a':
		printf("��ġ��� �ֹ��߽��ϴ�.\n");
		break;
	case 'b':
		printf("������� �ֹ��߽��ϴ�.\n");
		break;
	case 'c':
		printf("Į������ �ֹ��߽��ϴ�.\n");
		break;
	case 'd':
		printf("��ġ������ �ֹ��߽��ϴ�.\n");
		break;
	case 'e':
		printf("������� �ֹ��߽��ϴ�.\n");
		break;
		
	}*/


	//��� ���Ǳ� ���α׷� �����
	char x;
	printf("���ϴ� ��踦 �����Ͻʽÿ�.\n");
	printf("1. ���� ��� ���� 6000��\n");
	printf("2. ���� ����� ��� 5000��\n");
	printf("3. ���� ��� 4500��\n");
	printf("4. ���� ������ 4500��\n");
	printf("5. ���� ȭ��Ʈ 4500��\n");
	printf("��� ����: \n");
	scanf("%c", &x);

	switch (x) {
	case '1':
		printf("���� ��� ����(6000��)�� �����ϼ̽��ϴ�.\n");
		break;
	case '2':
		printf("���� ����� ���(5000��)�� �����ϼ̽��ϴ�.\n");
		break;
	case '3':
		printf("���� ���(4500��)�� �����ϼ̽��ϴ�.\n");
		break;
	case '4':
		printf("���� ������(4500��)�� �����ϼ̽��ϴ�.\n");
		break;
	case '5':
		printf("���� ȭ��Ʈ(4500��)�� �����ϼ̽��ϴ�.\n");
		break;
	}
	int y;
	printf("������ �ݾ��� �Է��� �ּ���: ");
	scanf("%d", &y);

	if ((y == 10000) && (x == 1)) {
		printf("���� ��� ������ �����ϼ̽��ϴ�. �Ž����� 4000���� ��������.\n ");
	}




}