#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("정수 입력:");
	scanf("%d", &num);

	//1번. 입력받은 num값을 비교
	if (num < 0) {
		printf("입력값은 0보다 작다.\n");
	}
	//2번. 입력받은 num값을 비교
	if (num > 0) {
		printf("입력값은 0보다 크다.\n");
	}
	//3번. 입력받은 num값을 비교
	if (num == 0) {
		printf("입력값은 0이다.\n");
	}
	else if (num > 0) {
		printf("입력값은 0보다 크다.\n");
	}
	else{
		printf("입력값은 0이다.\n");
	}
	// if는 무조건 1번만 사용
	// else if 는 n개 사용 가능
	// else를 사용하는 경우에는 조건이없음.(예 : (num==0)등)
	if (num < 0) {
		printf("입력값은 0보다작다\n");
	}
	else if (num == 0) {
		printf("입력값은 0이다\n");
	}

}