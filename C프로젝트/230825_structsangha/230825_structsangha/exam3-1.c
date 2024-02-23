#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

// 차량고객관리 프로그램 만들기
// 고객, 차량 구조체 만들기 --> (클래스로 확장)
// 고객정보 - 이름, 전번, 주소, 직업, 생일
// 차량정보 - 모델명, 가격, 연식, 색상, 영업소
// 각각 구조체 정보를 배열에서 랜검하게 추출하여 입력 및 출력하기

struct carinfor {
	char name2[20];
	int price;
	int year;
	char color[10];
	char place[50];
};

struct guestinfor {
	char name[20];
	char phonenum[20];
	char addr[50];
	char job[20];
	int birth;
	struct carinfor owncar;
};

int main()
{
	char* name[10] = { "가나다","라마바","사아자","차카타","파하가","나다라","마바사","아자차","카타파","하가나" };
	char* addr[10] = { "대구 중구 동인1동","대구 중구 동인2동","대구 중구 동인3동","대구 중구 동인4동",
		"대구 수성구 황금1동","대구 수성구 황금2동","대구 수성구 황금3동","대구 수성구 황금4동",
		"부산 해운대구 센텀중앙로145","부산 해운대구 센텀중앙로139" };
	char* job[10] = { "경찰","의사","변호사","간호사","검사","사업가","주부","무직","예술가","운동선수" };
	char* phonenum[10] = { "010-1234-1234", "010-1234-1111","010-1234-2222",
		"010-1234-3333","010-1234-4444","010-1239-1239", "010-1234-5111","010-1234-5222",
		"010-1234-2233","010-1234-6644" };
	int birth[] = { 210,331,427,520,725,211,330,425,521,724 };



	struct guestinfor st[10] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		// 5개의 배열값중에서 1개를 추출해서 복사
		strcpy(st[i].name, name[rand() % 10]);
		strcpy(st[i].phonenum, phonenum[rand() % 10]);
		strcpy(st[i].addr, addr[rand() % 10]);
		strcpy(st[i].job, job[rand() % 10]);
		st[i].birth = birth[rand() % 10];

	}

	for (int i = 0; i < 10; i++) {
		printf(">>> %d번째 고객 정보 <<<\n", i + 1);
		printf("이름:%s\n", st[i].name);
		printf("전화번호:%s\n", st[i].phonenum);
		printf("주소:%s\n", st[i].addr);
		printf("직업:%s\n", st[i].job);
		printf("생일:%d\n", st[i].birth);
		printf("=======================\n");
	}
	

}