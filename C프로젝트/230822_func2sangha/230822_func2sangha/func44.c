#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void make_arr1(int a[2][3]);
//void make_arr2(int b[2][3]);
//void make_arr3(int c[2][3]);
void make_arr_all(int a[2][3]);
int main()
{
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	make_arr_all(arr1);
	

	int arr2[2][3] = {
		{10},
		{20,30}
	};
	make_arr_all(arr2);

	int arr3[2][3] = { 100,200,300,400 };
	make_arr_all(arr3);
	// 각각 arr1,arr2,arr3 배열을 출력하는 함수 3개 작성

	

}

//void make_arr1(int a[2][3])
//{
//	int i, j;
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void make_arr2(int b[2][3])
//{
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d\t", b[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void make_arr3(int c[2][3])
//{
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d\t", c[i][j]);
//		}
//		printf("\n");
//	}
//}

void make_arr_all(int a[2][3])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}