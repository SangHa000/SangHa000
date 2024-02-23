#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void day_num(int n);

int main()
{
	//main()에서 1~7사이의 숫자를 매개변수로 전달하여
	//매개변수의 값이 1이면 월요일 출력, 2이면 화요일출력...,7이면 일요일 출력
	printf("요일번호 입력 1~7:");
	int d;
	scanf("%d", &d);
	day_num(d); //함수 호출
	

}

void day_num(int n)
{
	if (n == 1) {
		printf("월요일입니다.");
	}
	else if (n == 2) {
		printf("화요일입니다.");
	}
	else if (n == 3) {
		printf("수요일입니다.");
	}
	else if (n == 4) {
		printf("목요일입니다.");
	}
	else if (n == 5) {
		printf("금요일입니다.");
	}
	else if (n == 6) {
		printf("토요일입니다.");
	}
	else if (n == 7) {
		printf("일요일입니다.");
	}
	else if (n != 1,2,3,4,5,6,7) {
		printf("잘못된 정보입니다.");
	}

}