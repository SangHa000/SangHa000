#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열변수를 매개변수로 전달하는 방법
// 지역변수, 전역변수 개념 이해 및 활용
// Call by Value(값에 의한 전달)
// Call by Address(주소값에 의한 전달)

// 배열: 정보를 저장할수있는 연속적인 공간

void show_arr(int brr[]);


int main()
{
	int arr[10] = { 0 };  // 정수값을 10개 저장할수있는 arr배열변수
	int a;  //정수값 한개만을 저장하는 일반 변수 a

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
		//printf("%d\t", arr[i]);
	}
	show_arr(arr);

}

void show_arr(int brr[])
{
	// main에서 만든 배열을 이함수에서 출력
	for (int i = 0; i < 10; i++) {
		printf("a[%d]=%d\n", i, brr[i]);
	}


}