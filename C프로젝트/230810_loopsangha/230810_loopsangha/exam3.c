#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//¹®Á¦3¹ø
int main(void)
{
	int gu, dan;
	for (gu = 1; gu <= 9; gu++)
	{
		for (dan = 2; dan <= 9; dan++)
			printf("%d*%d*=%d\t", dan, gu, dan * gu);
		printf("\n");
	}
}