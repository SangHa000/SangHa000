#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//구구단의 결과값을 저장할 2차원 배열 생성
	//출력형태는 문제6번 구구단처럼 할것
	//배열에서 읽어와서 출력

	int a[9][8] = { 0 };
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 9; j++) {
			a[i-1][j-2] = j * i; //i와j는 기준이 0이아니므로 주의해야함.
			printf("%d\t",a[i-1][j-2]);
		}
		printf("\n");
	}


}