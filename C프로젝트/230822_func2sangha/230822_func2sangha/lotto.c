#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("로또번호 출력");
	printf("----------------------------");

}

int lottery(int arr[])
{
	srand(time(NULL));
	int random = 0;
	for (int i = 0; i < 6; i++) {
		random = (rand() % 45) + 1;
		arr[i] = random;
		int random2 = 0;
		for (int j = 0; j < 6; j++) {
			random2 = (rand() % 45) + 1;
			if (random != random2) {
				printf("로또번호 출력: %d", random);
			}
			else {
				printf("로또 번호 중복 오류!");
			}
		}
		printf("\n");
	}

}
