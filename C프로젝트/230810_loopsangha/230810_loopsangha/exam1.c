#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
//문제1번
{
	int gu = 0, n = 1;
	printf("원하는 구구단 입력:");
	scanf("%d", &gu);

	while (n < 10)
	{
		printf("%d*%d=%d\n", gu, n, gu * n);
		n++;
	}
}