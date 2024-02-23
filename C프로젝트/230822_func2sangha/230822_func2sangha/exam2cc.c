#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

// -------------------------------
// 구구단을 출력하는 함수 연습 v1.0
// -------------------------------
// 1. 구구단 짝수단 출력(2~8)
// 2. 구구단 홀수단 출력(3~9)
// 3. 구구단 전체 출력(2~9)
// 4. 종료
// -------------------------------
// 번호 선택:
int main_n();
void gugu1();
void gugu2();
void gugu3();
void gugu1and2();
int main()
{
	//const char 함수합쳐사용할때 이거써야함. 

	while (1) {
		int m = main_n();
		switch (m) {
		case 1:
			gugu1and2('1');
			break;
		case 2:
			gugu1and2('2');
			break;
		case 3:
			gugu3();
			break;
		case 4:
			printf("프로그램 종료\n");
			exit(0);
		default:
			printf("잘못된 번호 입력!\n");
			break;
		}
	}
}

int main_n()
{
	printf("-------------------------------\n");
	printf("구구단을 출력하는 함수 연습 v1.0\n");
	printf("-------------------------------\n");
	printf("1. 구구단 짝수단 출력\n");
	printf("2. 구구단 홀수단 출력\n");
	printf("3. 구구단 전체단 출력\n");
	printf("4. 종료!\n");
	printf("-------------------------------\n");
	printf("번호 선택 :");
	int n;
	scanf(" %d", &n);
	return n;
}

void gugu1and2(char n)
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			if (j % 2 == 0&&n=='1') {
				printf("%d x %d =%d\t", j, i, j * i);
			}
			else if (j % 2 != 0&&n=='2') {
				printf("%d x %d =%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}


void gugu1()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 4; j++) {
			printf("%d x %d = %d\t", j * 2, i, (j * 2) * i);
		}
		printf("\n");
	}
}

void gugu2()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 5; j++) {
			printf("%d x %d = %d\t", (j * 2)-1, i, ((j * 2)-1) * i);
		}
		printf("\n");
	}
}


void gugu3()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d x %d = %d\t", j, i, j * i);
		}
		printf("\n");
	}
}