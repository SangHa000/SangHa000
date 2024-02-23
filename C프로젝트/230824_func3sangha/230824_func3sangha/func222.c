#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> //time()
//#define DEBUG 1 디버깅 코드

// 1. 로또 생성(중복방지) - 배열까지의 학습 내용
// 2. 함수로 처리 - 함수 학습

// 로또 번호를 저장할 배열 생성
void lottery(int lotto[]);
int main()
{
	int lotto[6] = { 0 };
	srand(time(NULL));
	lottery(lotto);
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
	
}

void lottery(int lotto[])
{
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;
		//printf("%d\t", lotto[i]); // 중복번호가 나옴
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--; // i감소시키는 이유는 중복시 앞배열로 다시 돌아가기 위해서
				break; // 검사시 같은 번호가있으면 탈출
			}
		}
	}
	
}