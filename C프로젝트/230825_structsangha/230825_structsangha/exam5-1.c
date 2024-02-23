#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

// 고객이름, 차량모델, 매니저명
//----------------------------
// 고객 차량 관리 프로그램 1.6
//----------------------------
// 1. 고객정보 직접 입력
// 2. 고객정보 랜덤 입력
// 3. 고객정보 보기
// 4. 종료
//----------------------------
// 메뉴 선택:
void insert_guest(struct guest all[]);
void show_guest(struct guest all[]);
int menu();

struct manager
{
	char man[10];
};

struct model 
{
	char carname[10];
	struct manager ownmodel;
};

struct guest
{
	char name[10];
	struct model owner;
};

char* man[5] = { "이가네","김가네","박가네","우가네","최가네" };
char* carname[5] = { "제네시스","그랜저","K9","토레스","싼타페" };
char* name[5] = { "이상하","이희권","최민영","이세현","이세미" };



int main()
{
	srand(time(NULL));
	struct guest all[5] = { 0 };

	while (1) {
		switch (menu()) {
		case 1:
			printf("고객이름을 입력해주세요:");
			scanf("%s", &all[0].name);
			printf("차량정보를 입력해주세요:");
			scanf("%s", &all[0].owner.carname);
			printf("매니저를 입력해주세요:");
			scanf("%s", &all[0].owner.ownmodel.man);
			break;
		case 2:
			insert_guest(all);
			break;
		case 3:
			show_guest(all);
			break;
		case 4:
			printf("프로그램을 종료합니다.\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택\n");
			break;
		}

	}
}

int menu()
{
	int n;
	printf("----------------------------\n");
	printf("고객 차량 관리 프로그램 1.6\n");
	printf("----------------------------\n");
	printf("1. 고객 정보 입력\n");
	printf("2. 고객 정보 랜덤 입력\n");
	printf("3. 고객 정보 보기\n");
	printf("4. 종료\n");
	printf("----------------------------\n");
	printf("메뉴 선택 : ");
	scanf(" %d", &n);
	return n;
}

void insert_guest(struct guest all[]) 
{
	for (int i = 0; i < 5; i++) {
		strcpy(all[i].name, name[rand() % 5]);
		strcpy(all[i].owner.carname, carname[rand() % 5]);
		strcpy(all[i].owner.ownmodel.man, man[rand() % 5]);
	}
	printf("고객 정보 입력 완료!\n");
}

void show_guest(struct guest all[])
{
	for (int i = 0; i < 5; i++) {
		printf("고객 이름: %s\n", all[i].name);
		printf("고객 차량이름: %s\n", all[i].owner.carname);
		printf("차량 담당 매니저: %s\n", all[i].owner.ownmodel.man);
		printf("=====================================\n");
	}
}