#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*char m;
	system("cls");
	//식당메뉴 자동주문 프로그램  switch연습
	printf("원하는 식사를 선택하세요.\n");
	printf("a.김치찌개 : 5000원\n");
	printf("b.된장찌개 : 5000원\n");
	printf("c.칼국수 : 4500원\n");
	printf("d.잔치국수 : 4000원\n");
	printf("e.비빔밥 : 5000원\n");
	printf("메뉴를 선택하세요\n");
	scanf("%c", &m);

	switch (m) {
	case 'a':
		printf("김치찌개를 주문했습니다.\n");
		break;
	case 'b':
		printf("된장찌개를 주문했습니다.\n");
		break;
	case 'c':
		printf("칼국수를 주문했습니다.\n");
		break;
	case 'd':
		printf("잔치국수를 주문했습니다.\n");
		break;
	case 'e':
		printf("비빔밥을 주문했습니다.\n");
		break;
		
	}*/


	//담배 자판기 프로그램 만들기
	char x;
	printf("원하는 담배를 선택하십시오.\n");
	printf("1. 에쎄 골든 리프 6000원\n");
	printf("2. 에쎄 스페셜 골드 5000원\n");
	printf("3. 더원 블루 4500원\n");
	printf("4. 더원 오렌지 4500원\n");
	printf("5. 더원 화이트 4500원\n");
	printf("담배 선택: \n");
	scanf("%c", &x);

	switch (x) {
	case '1':
		printf("에쎄 골든 리프(6000원)를 선택하셨습니다.\n");
		break;
	case '2':
		printf("에쎄 스페셜 골드(5000원)를 선택하셨습니다.\n");
		break;
	case '3':
		printf("더원 블루(4500원)를 선택하셨습니다.\n");
		break;
	case '4':
		printf("더원 오렌지(4500원)를 선택하셨습니다.\n");
		break;
	case '5':
		printf("더원 화이트(4500원)를 선택하셨습니다.\n");
		break;
	}
	int y;
	printf("넣으신 금액을 입력해 주세요: ");
	scanf("%d", &y);

	if ((y == 10000) && (x == 1)) {
		printf("에쎄 골든 리프를 구매하셨습니다. 거스름돈 4000원을 받으세요.\n ");
	}




}