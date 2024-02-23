#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. 구구단을 출력하는 숫자를 main()에서 입력받음
// 2. ex) 3을 입력받아 매개변수로 전달하면 3단 출력
// 3. 입력받은 숫자를 매개변수로 전달하여 구구단 출력

void gugu(int gu);
int main()
{
	int a;
	printf("원하는 정수입력:\n");
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