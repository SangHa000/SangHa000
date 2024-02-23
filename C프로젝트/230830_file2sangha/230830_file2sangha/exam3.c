#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// *기존 데이터 계속 유지
//===========================
// 고객 차량 관리프로그램 2.0
//===========================
// 1.고객 정보 직접 입력
// 2.고객 정보 랜덤 입력
// 3.고객 정보 보기
// 4.종료

// 고객 정보: 이름,전화,주소
// 차량 정보: 모델명,가격,연식

typedef struct CARINFOR 
{
	char carname[20];
	char price[20];
	char year[20];
}CAR;

typedef struct CUSINFOR
{
	char name[20];
	char tel[20];
	char addr[50];
	CAR car;
}CUST;


int main()
{
	char* carname[5] = { "제네시스","벤츠","폭스바겐","현대","기아" };
	char* price[5] = { "4000만원","5000만원","6000만원","7000만원","8000만원" };
	char* year[5] = { "2018년식","2019년식","2020년식","2021년식","2022년식" };

	char* name[5] = { "김차주","이차주","최차주","박차주","오차주" };
	char* tel[5] = { "010-1212-1212","010-3535-3535","010-6868-6868","010-9754-2154","010-5471-8135" };
	char* addr[5] = { "대구광역시 신천동","부산광역시 센텀","서울특별시 한남동","대전광역시 둔산동","서울특별시 역삼동" };

	CUST st[100] = { 0 };
	srand(time(NULL));
	char filename[] = "car.bin";
	
	while (1) {
		int me = menu();
		switch (me) {
		case 1: {
			CUST cst = { 0 };
			printf("고객 이름: ");
			scanf("%s", cst.name);
			printf("고객 전화번호: ");
			scanf("%s", cst.tel);
			getchar(); // \n효과
			printf("고객 주소: ");
			gets(cst.addr); //공백 입력받기위해서 사용
			printf("차량모델: ");
			scanf("%s", cst.car.carname);
			printf("가격: ");
			scanf("%s", cst.car.price);
			printf("연식: ");
			scanf("%s", cst.car.year);

			FILE* fp = fopen(filename, "ab");
			fwrite(&cst, sizeof(cst), 1, fp);
			fclose(fp);
			break;
		}
		case 2:
		{
			FILE* fp2 = fopen("car.bin", "ab");
			for (int i = 0; i < 5; i++) {
				strcpy(st[i].name, name[rand() % 5]);
				strcpy(st[i].tel, tel[rand() % 5]);
				strcpy(st[i].addr, addr[rand() % 5]);
				strcpy(st[i].car.carname, carname[rand() % 5]);
				strcpy(st[i].car.price, price[rand() % 5]);
				strcpy(st[i].car.year, year[rand() % 5]);
				fwrite(&st[i], sizeof(CUST), 1, fp2);
			}
			fclose(fp2);
			printf("랜덤한 고객정보가 입력되었습니다.\n");
			break;
		}
		case 3: 
		{
			FILE* fp3 = fopen("car.bin", "rb");
			CUST temp = { 0 };
			while (fread(&temp, sizeof(temp), 1, fp3) == 1) {
				printf("고객이름:%s 전화번호:%s 주소:%s\n", temp.name, temp.tel, temp.addr);
				printf("차량이름:%s 가격:%s 연식:%s\n", temp.car.carname, temp.car.price, temp.car.year);
			}break;
		case 4: 
		{
			FILE* fp = fopen("car.bin", "wb");
			fclose(fp);
			printf("고객님의 데이터를 삭제했습니다.\n");
			break;
		}
		case 5:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택\n");
		}

		}
	}

}

int menu()
{
	printf("==============================\n");
	printf(" 고객 차량 관리 프로그램 2.0\n");
	printf("==============================\n");
	printf("1. 고객 정보 직접 입력\n");
	printf("2. 고객 정보 랜덤 입력\n");
	printf("3. 고객 정보 보기\n");
	printf("4. 고객 정보 전체 삭제\n");
	printf("5. 종료!\n");
	printf("==============================\n");
	printf("메뉴 선택: \n");
	int n;
	scanf("%d", &n);
	return n;
}