#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> //time()
// 5���� ��,��,�� ������ �����ϰ� ���� (0~100)



char all_hak(int avg);
int main()
{
	int score[5][3] = { 0 };

	srand(time(NULL));
	//�����ϰ� �߻��� ���ڸ� 5���� �л�(5x3�迭)�� ����
	//�л�5���� ���� ����,���,�������
	int total = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			score[i][j] = (rand() % 101) + 1;
			printf("score[%d][%d]=%d\t", i, j, score[i][j]);
			int avr = 0;
			total += score[i][j];
			


		} //���� ������ ��ġ
		printf("���� : %d\t", total);
		int avg = total / 3;
		printf("��� : %d\t", avg);
		total = 0;
		if (avg >= 90 && avg <= 100) {
			printf("���� : A");
		}
		else if (avg >= 80 && avg <= 89) {
			printf("���� : B");
		}
		else if (avg >= 70 && avg <= 79) {
			printf("���� : C");
		}
		else if (avg >= 60 && avg <= 69) {
			printf("���� : D");
		}
		else {
			printf("���� : F");
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