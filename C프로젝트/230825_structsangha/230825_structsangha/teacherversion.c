// exam4.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

struct car {
	char model[20];		// 모델명
	char price[20];		// 가격
	int year;			// 연식
	char color[10];		// 색상
	char office[50];	// 영업소
};

struct customer {
	char name[20];		// 고객명
	char tel[20];		// 전화
	char addr[50];		// 주소
	char job[20];		// 직업
	char birth[20];		// 생일
	struct car ca;		// 구매차량
};

int main_menu();

int main()
{
	char* model[5] = { "그랜저", "제네시스", "산타페", "소나타", "K9" };
	char* price[5] = { "4천만원", "5천만원", "6천만원", "7천만원", "8천만원" };
	int year[5] = { 2020, 2021, 2022, 2022, 2024 };
	char* color[5] = { "검정", "흰색", "은색", "진주", "빨강" };
	char* office[5] = { "대구 영업소", "서울 영업소", "부산 영업소", "광주 영업소", "인천 영업소" };

	char* name[5] = { "홍길동", "전우치", "유관순", "이순신", "김유신" };
	char* tel[5] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444",
		"010-1234-5555" };
	char* addr[5] = { "대구 동구 신암동", "서울 동구 신암동", "부산 동구 신암동", "광주 동구 신암동",
		"대전 동구 신암동" };
	char* job[5] = { "강사", "회사원", "교사", "공무원", "사업" };
	char* birth[5] = { "70년1월1일", "60년1월1일", "80년1월1일", "90년1월1일", "50년1월1일" };
	srand(time(NULL));
	struct customer cu[100] = { 0 };

	while (1) {
		switch (main_menu()) {
		case 1:
			for (int i = 0; i < 100; i++) {
				strcpy(cu[i].name, name[rand() % 5]);
				strcpy(cu[i].tel, tel[rand() % 5]);
				strcpy(cu[i].addr, addr[rand() % 5]);
				strcpy(cu[i].job, job[rand() % 5]);
				strcpy(cu[i].birth, birth[rand() % 5]);
				strcpy(cu[i].ca.model, model[rand() % 5]);
				strcpy(cu[i].ca.price, price[rand() % 5]);
				strcpy(cu[i].ca.color, color[rand() % 5]);
				strcpy(cu[i].ca.office, office[rand() % 5]);
				cu[i].ca.year = year[rand() % 5];
			}
			printf("정상적으로 데이터가 입력되었습니다\n");
			break;
		case 2:
			for (int i = 0; i < 100; i++) {
				printf("번호:%d\n", i + 1);
				printf("고객명:%s\n", cu[i].name);
				printf("전화:%s\n", cu[i].tel);
				printf("주소:%s\n", cu[i].addr);
				printf("직업:%s\n", cu[i].job);
				printf("생일:%s\n", cu[i].birth);
				printf("모델명:%s\n", cu[i].ca.model);
				printf("가격:%s\n", cu[i].ca.price);
				printf("색상:%s\n", cu[i].ca.color);
				printf("연식:%d\n", cu[i].ca.year);
				printf("영업소:%s\n", cu[i].ca.office);
				printf("==============================\n");
			}
			break;
		case 3:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!!\n");
		}
	}
}

int main_menu()
{
	printf("----------------------------\n");
	printf("고객차량 관리 프로그램 v1.5\n");
	printf("----------------------------\n");
	printf("1. 고객및 구매차량 입력\n");
	printf("2. 고객및 구매차량 보기\n");
	printf("3. 종료\n");
	printf("----------------------------\n");
	printf("메뉴 선택 :");
	int menu;
	scanf("%d", &menu);
	return menu;
}