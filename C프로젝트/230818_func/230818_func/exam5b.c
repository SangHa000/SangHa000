#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. �������� ����ϴ� ���ڸ� main()���� �Է¹���
// 2. ex) 3�� �Է¹޾� �Ű������� �����ϸ� 3�� ���
// 3. �Է¹��� ���ڸ� �Ű������� �����Ͽ� ������ ���

void gugu(int gu);
int main()
{
	int a;
	printf("���ϴ� �����Է�:\n");
	scanf("%d", &a);
	gugu(a);
	
}

void gugu(int gu)
{
	int i;
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d \n", gu, i,gu*i);
	}
}