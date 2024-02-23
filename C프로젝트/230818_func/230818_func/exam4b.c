#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int make(int n1, int n2, char y);
// 숫자 2개와 사칙연산자를 main()에서 입력 받음.
// 사칙연산자는 '문자' 로 입력받음. (+,-,*,/)
// 3개의 정보를 매개변수로 전달(3개)
// 계산 결과값을 리턴하여 main()에서 출력하기



int main()
{
	int a, b;
	char x;
	printf("첫번째 정수 입력:\n");
	scanf("%d", &a);
	printf("두번째 정수 입력:\n");
	scanf("%d", &b);
	printf("원하는 연산 입력:\n");
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
		printf("결과값: %d", r1);
		return r1;
	}
	// int result;
	// if (y=='+'){ return a + b; }
	// a + b 값을 리턴하면서 make 함수가 종료됨.
	else if (y == '-') {
		printf("결과값: %d", r2);
		return r2;
	}
	else if (y == '*') {
		printf("결과값: %d", r3);
		return r3;
	}
	else if (y == '/') {
		printf("결과값: %d", r4);
		return r4;
	}


}