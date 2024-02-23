#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void total(int k, int e, int m);

int main()
{
	int kor, eng, math;
	// exit(0); ---> 강제종료하기
	printf("국어 점수:");
	scanf("%d", &kor);
	if (kor < 0 || kor>100) {
		printf("잘못된 점수 입력\n");
		exit(0);
	}
	printf("영어 점수:");
	scanf("%d", &eng);
	if (eng < 0 || eng >100) {
		printf("잘못된 점수 입력\n");
		exit(0);
	}
	printf("수학 점수:");
	scanf("%d", &math);
	if (math < 0 || math > 100) {
		printf("잘못된 점수 입력\n");
		exit(0);
	}
	
	total(kor, eng, math);

}

void total(int k, int e, int m)
{
	int allpoint;
	int avr;
	allpoint = k + e + m;
	printf("총점: %d\n", allpoint);

	avr = (k + e + m) / 3;
	printf("평균: %d\n", avr);

}