#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//관계연산자, 논리연산자가 if문의 조건으로 많이 사용
	//연습1.
	//1개의 숫자를 입력 받아서 짝수, 홀수인지 체크하는 프로그램
	//나머지 연산자 활용 (num%2==0) ->2로나눈나머지가 0이면 짝수 1이면 홀수

	int n;
	printf("정수 입력:");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("짝수\n");
	}
	else if (n % 2 == 1) {
		printf("홀수\n");
	}



	//연습2.
	//2개의 숫자를 입력받아서 크다,작다,같다를 체크하는 프로그램

	int num1, num2;
	printf("두개의 정수 입력:");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
		printf("첫번째수가 두번째수보다 크다.\n");
	if (num1 < num2)
		printf("첫번째수가 두번째수보다 작다.\n");
	if (num1 == num2)
		printf("두 수 모두 같다.\n");
		

	//연습3.
	//국,영,수 점수를 입력받아서 총점,평균,학점을 구하는 프로그램
	//학점:100-90 A , 89-80 B, 79-70 C, 69-60 D, 59- F
	//(num >=90 && num<=100)

	int kor, eng, math,total;
	double avr;
	printf("국어,영어,수학 점수 입력:");
	scanf("%d %d %d", &kor, &eng, &math);

	total = kor + eng + math;
	printf("국어,영어,수학 점수의 총합:%d\n", total);

	avr = total / 3;
	printf("평균: %f\n", avr);

	if (avr >= 90 && avr <= 100) {
		printf("학점 A\n");
	}
	else if (avr >= 80) {
		printf("학점 B\n");
	}
	else if (avr >= 70) {
		printf("학점 C\n");
	}
	else if (avr >= 60) {
		printf("학점 D\n");
	}
	else if (avr <= 59) {
		printf("학점 F\n");
	}







}