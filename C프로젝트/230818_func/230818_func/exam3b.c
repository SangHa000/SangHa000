#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void my_sort(int n1, int n2, int n3);

// 1. 3���� ������ main()���� �Է¹޾Ƽ� �Ű������� ����
// 2. �Լ����� 3���� ���ڸ� ũ�� ������� ���
// 3. my_sort()
// 4. n1 > n2 > n3 if �� ǥ�� ���غ���
// 5. ��°�� n1 > n2 > n3
// 6. n3 �� ����ũ�� n1�� �ι�°�� Ŭ�� ��Ȳ n3 > n1 > n2

int main()
{
	int a, b, c;
	printf("ù��° ���� �Է�:\n");
	scanf("ù��° ���� : %d", &a);
	printf("�ι�° ���� �Է�:\n");
	scanf("�ι�° ���� : %d", &b);
	printf("����° ���� �Է�:\n");
	scanf("����° ���� : %d", &c);
	my_sort(a, b, c);
}

void my_sort(int n1,int n2,int n3)
{
	if (n1 > n2 && n2 > n3) {
		printf("%d > %d > %d\n", n1, n2, n3);
	}
	else if (n1 > n2 && n3 > n2) {
		printf("%d > %d > %d\n", n1, n3, n2);
	}
	else if (n2 > n1 && n1 > n3) {
		printf("%d > %d > %d\n", n2, n1, n3);
	}
	else if (n2 > n3 && n3 > n1) {
		printf("%d > %d > %d\n", n2, n3, n1);
	}
	else if (n3 > n1 && n1 > n2) {
		printf("%d > %d > %d\n", n3, n1, n2);
	}
	else if (n3 > n2 && n2 > n1) {
		printf("%d > %d > %d\n", n3, n2, n1);
	}
}