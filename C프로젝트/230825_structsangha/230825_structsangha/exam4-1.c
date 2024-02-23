#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

//------------------------------
// 고객 차량 관리 프로그램
//------------------------------
// 1. 고객 및 구매차량 랜덤 입력
// 2. 고객 및 구매차량 보기
// 3. 종료
//------------------------------
// 메뉴 선택 :

void ins_guest(struct guestinfor st[]);
void show_guest(struct guestinfor st[]);
int main_menu();

char* name2[5] = { "제네시스","그랜저","아반떼","산타페","K5" };
char* price[5] = { "4천만원","5천만원","6천만원","7천만원","8천만원" };
int year[5] = { 2019,2020,2021,2022,2023 };
char* color[5] = { "레드","블루","블랙","아이보리","화이트" };
char* place[5] = { "서울지부","대전지부","대구지부","울산지부","부산지부" };

char* name[5] = { "가나다","라마바","사아자","차카타","파하가" };
char* addr[5] = { "대구 중구 동인1동","대구 중구 동인2동","대구 수성구 황금1동","대구 수성구 황금2동","부산 해운대구 센텀중앙로145" };
char* job[5] = { "공무원","예체능","무직","회사재직","특수직" };
char* phonenum[5] = { "010-1234-1234", "010-1234-1111","010-1234-2222",
	"010-1234-3333","010-1234-4444" };
char* birth[5] = { "1,2월생","3,4월생","5,6월생","7,8,9월생","10,11,12월생" };

struct carinfor {
	char name2[20];
	char price[20];
	int year;
	char color[10];
	char place[50];
};

struct guestinfor {
	char name[20];
	char phonenum[20];
	char addr[50];
	char job[20];
	char birth[20];
	struct carinfor owncar;
};




int main_menu()
{
	int n;
	printf("----------------------------\n");
	printf("고객 차량 관리 프로그램 1.5\n");
	printf("----------------------------\n");
	printf("1. 고객 및 구매차량 입력\n");
	printf("2. 고객 및 구매차량 보기\n");
	printf("3. 종료\n");
	printf("----------------------------\n");
	printf("메뉴 선택 : ");
	scanf(" %d", &n);
	return n;
}





int main(){
	srand(time(NULL)); // 랜덤함수를 사용을 위한 필수 조건
	struct guestinfor st[100] = { 0 }; // 구조체 이름(데이터 타입)
	
	
	while (1) {
		switch (main_menu()) {
		case 1:
			ins_guest(st);
			break;
		case 2:
			show_guest(st);
			break;
		case 3:
			printf("프로그램을 종료합니다.\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택\n");
			break;
		}
	}
	
}

void ins_guest(struct guestinfor st[])
{
	for (int i = 0; i < 5; i++) {
		strcpy(st[i].name, name[rand() % 5]);
		strcpy(st[i].phonenum, phonenum[rand() % 5]);
		strcpy(st[i].addr, addr[rand() % 5]);
		strcpy(st[i].job, job[rand() % 5]);
		strcpy(st[i].birth, birth[rand() % 5]);

		strcpy(st[i].owncar.name2, name2[rand() % 5]);
		strcpy(st[i].owncar.price, price[rand() % 5]);
		st[i].owncar.year = year[rand() % 5];
		strcpy(st[i].owncar.color, color[rand() % 5]);
		strcpy(st[i].owncar.place, place[rand() % 5]);
	}
	printf("고객 및 구매차량 입력 완료.\n");
}

void show_guest(struct guestinfor st[])
{
	for (int i = 0; i < 5; i++) {
		printf("이름:%s\n", st[i].name);
		printf("전화번호:%s\n", st[i].phonenum);
		printf("주소:%s\n", st[i].addr);
		printf("직업:%s\n", st[i].job);
		printf("생일:%s\n", st[i].birth);

		printf("차종:%s\n", st[i].owncar.name2);
		printf("연식:%d\n", st[i].owncar.year);
		printf("가격:%s\n", st[i].owncar.price);
		printf("색상:%s\n", st[i].owncar.color);
		printf("영업소:%s\n", st[i].owncar.place);
		printf("=======================\n");
	}
}