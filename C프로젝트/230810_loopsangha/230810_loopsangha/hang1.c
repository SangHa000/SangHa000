#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int start, end;
	printf("첫번째 숫자 입력:");
	scanf("%d", &start);
	int backup = start;
		printf("마지막 숫자 입력:");
		scanf("%d", &end);
	int hap = 0;
	for (; start <= end; start++) {
		hap = hap + start;
	}
	printf("%d ~ %d의 합:%d\n", backup, end, hap);*/

	//행과 열의 개념은 반드시 2중 반복문에서 적용.
	for (int i = 0; i < 3; i++) {
		printf("1행의 %d\t", i + 1);
	}
	// \t : 탭키
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d행 %d열\n", i, j);
		}
		printf("\n");
	}

	//구구단
	for (int i = 1; i <= 10; i++) {
		for (int j = 2; j <= 10; j++) {
			printf("%d*%d=%d\t",j,i,j*i);
		}
		printf("\n");
	}
}