#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int make(int n1, int n2, char y);
// ���� 2���� ��Ģ�����ڸ� main()���� �Է� ����.
// ��Ģ�����ڴ� '����' �� �Է¹���. (+,-,*,/)
// 3���� ������ �Ű������� ����(3��)
// ��� ������� �����Ͽ� main()���� ����ϱ�



int main()
{
	int a, b;
	char x;
	printf("ù��° ���� �Է�:\n");
	scanf("%d", &a);
	printf("�ι�° ���� �Է�:\n");
	scanf("%d", &b);
	printf("���ϴ� ���� �Է�:\n");
	scanf(" %c", &x);
	make(a, b, x);

}

int make(int n1, int n2, char y)
{
	int r1, r2, r3, r4;

	r1 = n1 + n2;
	r2 = n1 - n2;
	r3 = n1 * n2;
	r4 = n1 / n2;

	if (y == '+') {
		printf("�����: %d", r1);
		return r1;
	}
	// int result;
	// if (y=='+'){ return a + b; }
	// a + b ���� �����ϸ鼭 make �Լ��� �����.
	else if (y == '-') {
		printf("�����: %d", r2);
		return r2;
	}
	else if (y == '*') {
		printf("�����: %d", r3);
		return r3;
	}
	else if (y == '/') {
		printf("�����: %d", r4);
		return r4;
	}


}