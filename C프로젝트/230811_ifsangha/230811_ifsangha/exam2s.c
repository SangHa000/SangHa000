#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//문제 1: 간단한 계산기
	// 1. 2개의 숫자를 입력 받고, 문자 +,-,*,/ 를 입력 받음.
	// 2. 출력 형태는 아래를 참고
	// ------------------------------------
	// 첫번째 숫자 입력: 10
	// 두번째 숫자 입력: 20
	// 연산자 입력(+,-,*,/): +

	int n1, n2;
	char op;
	printf("첫번째 숫자 입력:");
	scanf("%d", &n1);
	printf("두번째 숫자 입력:");
	scanf("%d", &n2);
	printf("연산 기호 입력(+,-,*,/):");
	// 위에서 숫자를 입력하고 엔터키를 치면 엔터키값이 변수값에 자동저장되는 오류 발생
	// 해결방법 : %c 앞에 공백을 1칸넣으면 됨.
	scanf(" %c", &op);
	
	if (op == '+') {
		printf("%d + %d= %d \n", n1, n2, n1 + n2);
	}
	else if (op == '-') {
		printf("%d - %d = %d \n", n1, n2, n1 - n2);
	}
	else if (op == '*') {
		printf("%d * %d = %d \n", n1, n2, n1 * n2);
	}
	else if (op == '/') {
		printf("%d/%d = %d \n", n1, n2, n1 / n2);
	}

	switch (op) {
	case '+':
		printf("%d + %d= %d \n", n1, n2, n1 + n2);
		break;
	case '-':
		printf("%d - %d = %d \n", n1, n2, n1 - n2);
		break;
	case '*':
		printf("%d * %d = %d \n", n1, n2, n1 * n2);
		break;
	case '/':
		printf("%d/%d = %d \n", n1, n2, n1 / n2);
		break;

	}


	//문제 2: 윤년 구분하는 프로그램 만들기 (if만 가능)
	// 1. 입력한 년도를 4로 나누면 나머지가 0 이고, 100으로 나누면 0이 아님.
	// 2. 입력한 년도를 400으로 나누면 나머지가 0 -> 윤년

	int y;
	printf("입력한 년도:");
	scanf("%d", &y);

	if ((y % 4) == 0 && (y % 100) != 0 || (y % 400) == 0)
		printf("%d는 윤년이다.", y);
	else {
		printf("입력한 년도는 윤년이 아니다.");
	}
}