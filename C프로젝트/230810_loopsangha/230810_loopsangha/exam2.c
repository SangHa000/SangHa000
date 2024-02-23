#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//문제2번
int main(void)
{
	int total = 0;
	int num1, num2;
	printf("num1 부터 num2까지의 덧셈, num1은?");
	scanf("%d", &num1);
	do {
		printf("num1 부터 num2까지의 덧셈, num2은?");
		scanf("%d", &num2);
	} while (num2 <= num1); //넘투가 넘원보다 작을시 다시입력하게 만듬.

	for (int i= num1; num2>=i; i++) //i를 조건으로 삼으면 num1 +1씩 되진않음.
		total += i;

	printf("%d 부터 %d까지 덧셈결과:%d\n", num1, num2, total);

}