#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//--------------------------
// 파일 제어 프로그램 1.0
//--------------------------
// 1.랜덤한 데이터 파일 입력
// 2.파일에서 읽어오기
// 3.종료
//--------------------------
// 메뉴 선택:

typedef struct _person
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} person;



int main()
{
	char* name[5] = { "홍홍홍","이이이","박박박","김김김","최최최" };
	int age[5] = { 10,20,30,40,50 };
	char* tel[5] = { "010-1111-2222","010-3333-4444","010-5555-6666","010-7777-8888","010-9999-9999" };
	char* addr[5] = { "대구광역시","부산광역시","광주광역시","울산광역시","대전광역시" };

	person st[100] = { 0 };

	while (1) {
		switch (menu()) {
		case 1:
		{
			FILE* fp = fopen("all.bin", "wb");
			for (int i = 0; i < 100; i++) {
				strcpy(st[i].name, name[rand() % 5]);
				st[i].age = age[rand() % 5];
				strcpy(st[i].tel, tel[rand() % 5]);
				strcpy(st[i].addr, addr[rand() % 5]);
				fwrite(&st[i], sizeof(person), 1, fp);
			}
			fclose(fp);
			printf("랜덤한 정보가 입력되었습니다.\n");
			break;
		}
		case 2:
		{
			FILE* fp2 = fopen("all.bin", "rb");
			person temp = { 0 };
			while (fread(&temp, sizeof(temp), 1, fp2) == 1) {
				printf("name:%s, age:%d, tel:%s, address:%s \n", temp.name, temp.age, temp.tel, temp.addr);
			}
			fclose(fp2);
			break;
		}
		case 3:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!\n");
		}
	}
}



int menu()
{
	printf("===========================\n");
	printf("파일 제어 프로그램 1.0\n");
	printf("===========================\n");
	printf("1. 랜덤한 데이터 파일 입력\n");
	printf("2. 파일 읽어오기\n");
	printf("3. 종료!\n");
	printf("===========================\n");
	printf("메뉴 선택:");
	int n;
	scanf("%d", &n);
	return n;
}

