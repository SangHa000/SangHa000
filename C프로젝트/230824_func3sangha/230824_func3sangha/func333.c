#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> //time()
// 5명의 국,영,수 점수를 랜덤하게 생성 (0~100)



char all_hak(int avg);
int main()
{
	int score[5][3] = { 0 };

	srand(time(NULL));
	//랜덤하게 발생한 숫자를 5명의 학생(5x3배열)에 저장
	//학생5명의 점수 총합,평균,학점출력
	int total = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			score[i][j] = (rand() % 101) + 1;
			printf("score[%d][%d]=%d\t", i, j, score[i][j]);
			int avr = 0;
			total += score[i][j];
			


		} //열이 끝나는 위치
		printf("총점 : %d\t", total);
		int avg = total / 3;
		printf("평균 : %d\t", avg);
		total = 0;
		if (avg >= 90 && avg <= 100) {
			printf("학점 : A");
		}
		else if (avg >= 80 && avg <= 89) {
			printf("학점 : B");
		}
		else if (avg >= 70 && avg <= 79) {
			printf("학점 : C");
		}
		else if (avg >= 60 && avg <= 69) {
			printf("학점 : D");
		}
		else {
			printf("학점 : F");
		}
		
		printf("\n");
	}
}

void all_points(int score[5][3])
{
	int total = 0;
	int i, j = 0;
	total += score[i][j];

}

void all_avr(int avr)
{
	int total;
	avr = total / 3;
}

char all_hak(int avg)
{
	char hak = 0;
	if (avg >= 90 && avg <= 100) {
		hak = 'A';
	}
	else if (avg >= 80 && avg <= 89) {
		hak = 'B';
	}
	else if (avg >= 70 && avg <= 79) {
		hak = 'C';
	}
	else if (avg >= 60 && avg <= 69) {
		hak = 'D';
	}
	else {
		hak = 'F';
	}
	return hak;
}