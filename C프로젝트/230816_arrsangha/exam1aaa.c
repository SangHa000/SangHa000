#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1차원 배열을 만들고 초기값 설정 20,34,22,11,27
	//배열안에 들어있는 모든 값들의 합을 구하기.
	//반복문 사용하기.

	/*int arr[5] = { 20,34,22,11,27 };
	int n = 0, i;

	for (i = 0; i < 5; i++) {
		n += arr[i];
	}
	printf("배열의 합: %d \n", n);*/

	//1~100까지의 숫자를 1차원 배열에 저장
	//3의배수만 출력할것.
	//배열의 위치가 90번째일때 반복문 탈출.
	//int brr[100] = { 0 };

	//for (int i = 1; i < 100; i++) {
	//	brr[i] = i+1;  //0으로 저장될시 계속 0결과값 나옴.
	//	//printf("%d\n", brr[i]);
	//	if (brr[i] % 3 == 0) {
	//		printf(" %d ", brr[i]);
	//	}
	//	if (i == 89)break;
	//}

	//1차원배열에 2,4,6,8,10 을 저장.
	//2의 배수이고 3의배수인값만 출력.
	//배열의 3번째 위치에서 탈출.
	/*int crr[5] = { 0 };
	for (int i = 1; 2*i <= 10; i++) {
		crr[i] = i + 1;
		if (crr[i] % 2 == 0 && crr[i] % 3 == 0)
			printf(" %d ", crr[i]);
		if (i == 6)break;
	}*/

	//1.새로운 1차원 배열 a생성
	//2.drr에 있는 값들을 a배열에 50,40,30,20,10  순서로 저장하여 출력하기.

	int drr[] = { 10,20,30,40,50 };
	int a[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		a[i] = drr[4-i];
	}
	
	
	
	
	
	
	
	
	
	
	/*int a[5] = sizeof(drr) / sizeof(int);
	for (int i = a[5] - 1; i >= 0; i--) {
		printf("%d", drr[i]);
	}
	printf("\n");*/
}