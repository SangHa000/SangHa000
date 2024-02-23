#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void my_sort(int n1, int n2, int n3);

// 1. 3개의 정수를 main()에서 입력받아서 매개변수로 전달
// 2. 함수에서 3개의 숫자를 크기 순서대로 출력
// 3. my_sort()
// 4. n1 > n2 > n3 if 로 표현 잘해보기
// 5. 출력결과 n1 > n2 > n3
// 6. n3 이 제일크고 n1이 두번째로 클때 상황 n3 > n1 > n2

int main()
{
	int a, b, c;
	printf("첫번째 정수 입력:\n");
	scanf("첫번째 정수 : %d", &a);
	printf("두번째 정수 입력:\n");
	scanf("두번째 정수 : %d", &b);
	printf("세번째 정수 입력:\n");
	scanf("세번째 정수 : %d", &c);
	my_sort(a, b, c);
}

void my_sort(int n1,int n2,int n3)
{
	if (n1 > n2 && n2 > n3) {
		printf("%d > %d > %d\n", n1, n2, n3);
	}
	else if (n1 > n2 && n3 > n2) {
		printf("%d > %d > %d\n", n1, n3, n2);
	}
	else if (n2 > n1 && n1 > n3) {
		printf("%d > %d > %d\n", n2, n1, n3);
	}
	else if (n2 > n3 && n3 > n1) {
		printf("%d > %d > %d\n", n2, n3, n1);
	}
	else if (n3 > n1 && n1 > n2) {
		printf("%d > %d > %d\n", n3, n1, n2);
	}
	else if (n3 > n2 && n2 > n1) {
		printf("%d > %d > %d\n", n3, n2, n1);
	}
}