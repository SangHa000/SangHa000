#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("정수입력:");
	scanf("%d", &num);

	if (num < 0) {
		printf("입력값은 0보다 작다\n");
	}
	else {
		printf("입력값은 0보다 작지 않다\n");
	}
}