#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int num1, int num2) //�������� �� ��ȯ�� ��
{
	return num1 + num2;
}

void showaddresult(int num) //�������� �� ��ȯ�� x
{
	printf("������� ���: %d \n", num);
}

int readnum(void) //�������� x ��ȯ�� ��
{
	int num;
	scanf("%d", &num);
	return num;
}

void howtousethisprog(void) //�������� x ��ȯ�� x
{
	printf("�ΰ��� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("�׷� �ΰ��� ������ �Է��ϼ���. \n");
}

int main()
{
	int result, num1, num2;
	howtousethisprog();
	num1 = readnum();
	num2 = readnum();
	result = add(num1, num2);
	showaddresult(result);
}