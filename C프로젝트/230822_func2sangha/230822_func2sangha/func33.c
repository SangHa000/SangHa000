#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void call_by_addr(int a[]);

int main()
{
	// Call by Address (주소값에 의한 전달)

	int arr[2] = { 10,20 };
	printf("1.main()=>arr[0]:%d, arr[1]:%d\n",arr[0],arr[1]); //10라인의 10, 20이 순서대로 삽입
	call_by_addr(arr);
	printf("2.main()=>arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]); // 12라인의 함수식에 삽입
}

void call_by_addr(int a[])
{
	// a와 b의값을 서로 바꿔치기

	int temp = a[0]; //a의 값을 temp(임시변수)에 백업
	a[0] = a[1];
	a[1] = temp;
	printf("call_by_addr()=> arr[0]:%d, arr[1:]:%d\n",a[0],a[1]);
}