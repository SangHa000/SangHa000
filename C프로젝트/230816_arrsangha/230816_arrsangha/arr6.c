#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 2x3  (2by3)
	int arr1[2][3] = {
		{1,2,3}, //1행
		{4,5,6}  //2행
	};

	int num = 1;
	int arr2[12][12] = { 0 }; //3행4열 (3x4) 배열
	//바깥 행
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++)//안쪽 열 
		{// arr2에 1~6까지 넣기
			arr2[i][j] = num++;
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
}