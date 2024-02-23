#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1~5까지 연속적으로 매개변수로 전달하여 출력하는 함수작성
// 함수명 : show_num()

void main()
{
	show_num(1);  //함수 호출
	show_num(2);
	show_num(3);
	show_num(4);
	show_num(5);

	for (int i = 1; i <= 5, i++) {
		show_num(i);
	}
}

// 매개변수 출력하는 함수정의
void show_num(int n)
{
	printf("%d\n", n);
}