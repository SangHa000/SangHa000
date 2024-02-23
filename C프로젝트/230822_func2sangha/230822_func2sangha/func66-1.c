#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void make_arr1(int a[2][4]);
//void make_arr2(int a[3][3]);
//void make_arr3(int a[2][2]);
void make_all(int a[][3], int row, int col);

int main()
{
	// 실전에서는 하드코딩은 금지
	// 하드코딩된 값들은 상수 변수(const) 또는 #define을 사용
	const int ARR1_ROW = 2;
	const int ARR1_COL = 3;
	

	int arr1[2][3] = {
		{1,2,3,},
		{4,5,6,}
	};
	make_all(arr1,2,3);
	//make_arr1(arr1);


	int arr2[3][3] = {
		{10},
		{20,30},
		{40,50,60}
	};
	make_all(arr2,3,3);
	//make_arr2(arr2);

	int arr3[2][3] = { 100,200,300,400 };
	make_all(arr3,2,3);
	//make_arr3(arr3);
}


/*void make_arr1(int a[2][4])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void make_arr2(int a[3][3])
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void make_arr3(int a[2][2])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}*/

void make_all(int a[][3],int row,int col) //int arr[2][4]... 3개다 불러오는방법.
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}