#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
//����1��
{
	int gu = 0, n = 1;
	printf("���ϴ� ������ �Է�:");
	scanf("%d", &gu);

	while (n < 10)
	{
		printf("%d*%d=%d\n", gu, n, gu * n);
		n++;
	}
}