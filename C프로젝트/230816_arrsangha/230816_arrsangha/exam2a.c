#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 문제1번. {{1,2}, {2,4,6}, {3,6}, {4,8,10,12}, {10}}
	// 문제2번. 다음과 같이 출력하기
	// arr[0][0]=1 arr[0][1]=2
	// arr[1][0]=2 arr[1][1]=4 arr[1][2]=6
	// arr[2][0]=3 arr[2][1]=6
	// arr[3][0]=4 arr[3][1]=8 arr[3][2]=10 arr[3][3]=12
	// arr[4][0]=10
	int i, j;

	int arr[5][4] = {
		{1,2},
		{2,4,6},
		{3,6},
		{4,8,10,12},
		{10}
	};
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			if(arr[i][j]!=0)//0과같지 않아야한다고 조건검. 
			{
				printf("arr[%d][%d]=%d \t", i, j, arr[i][j]); //arr[i][j]현재 여기에 변수가 저장되있으므로 0이나오는 결과값을 출력안되게 하면됨.
			}//printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}
}