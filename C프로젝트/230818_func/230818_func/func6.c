#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int num1, int num2) //인자전달 ㅇ 반환값 ㅇ
{
	return num1 + num2;
}

void showaddresult(int num) //인자전달 ㅇ 반환값 x
{
	printf("덧셈결과 출력: %d \n", num);
}

int readnum(void) //인자전달 x 반환값 ㅇ
{
	int num;
	scanf("%d", &num);
	return num;
}

void howtousethisprog(void) //인자전달 x 반환값 x
{
	printf("두개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("그럼 두개의 정수를 입력하세요. \n");
}

int main()
{
	int result, num1, num2;
	howtousethisprog();
	num1 = readnum();
	num2 = readnum();
	result = add(num1, num2);
	showaddresult(result);
}