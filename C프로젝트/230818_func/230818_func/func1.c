#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void greeting(); //메인함수 아래에 정의가 있으면 적어줌

int main() //메인함수
{
	greeting();  //greeting 함수 정의를 호출함
	printf("main함수의 다른동작\n");
	greeting(); //함수의 호출은 다른 함수에서 가능

}

// 함수의 정의는 실행되지못함 --> 사용하기위해서 다른 함수에서 해당 함수 호출이 필요함
void greeting() //내가 만든 함수의 정의
{
	printf("----함수 시작----\n");
	printf("안녕하세요\n");
	printf("반갑습니다\n");
	printf("----함수 종료----\n");
}


void greeting2()
{
	greeting();
}