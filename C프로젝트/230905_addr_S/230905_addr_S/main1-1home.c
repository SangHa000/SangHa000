#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <windows.h>// win32 api 사용 (윈도우 환경에서만 사용 가능)
#include <conio.h>

#include "menu.h"
#include "ui.h"
#include "file.h"
#include "rdata.h"
// #define NOCURSOR			0
// #define SOLID_CURSOR		1
// #define NORMAL_CURSOR	2

#define RAND_SIZE	5



int main()
{
	char file[] = "address.bin";
	srand(time(NULL));
	set_cursor_type(NOCURSOR);
	font_color(LIGHT_RED);
	title();
	_getch();

	system("cls");
	font_color(LIGHT_BLUE);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case 1:
		{
			ADDR ad[RAND_SIZE] = { 0 };
			int len = sizeof(ad) / sizeof(ADDR);
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);
			printf("랜덤 데이터를 생성중입니다......\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break;
		}
		case 2:
		{
			ADDR ad = { 0 };
			printf("ID:");
			scanf("%d", &ad.id);

			printf("이름:");
			scanf("%s", ad.name);

			printf("전화:");
			scanf("%s", ad.tel);

			printf("주소:");
			getchar();
			gets(ad.addr);

			printf("Email:");
			scanf("%s", ad.email);
			file_write(ad, file);   // ad 값에 의한 전달  // file 주소에 의한 전달
			printf("데이터가 입력중입니다......\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case 3:
			file_del_all(file); //전체 삭제
			printf("전체 데이터를 삭제중입니다......\n");
			Sleep(1000);
			system("pause"); //이거 안걸면 시스템강제로 닫혀서 안열림
			break;
		case 4:
			file_read(file);
			system("pause");
			break;
		case 5: 
		{
			while (1) {
				int sm = search_menu();
				switch (sm) {
				case 1: 
				{
					printf("찾으려는 이름 입력:");
					char name1[20] = { 0 };
					scanf("%s", name1);
					file_search(file, name1);
					break;
				}
				case 2:
				{
					printf("찾으려는 ID 입력:");
					int id1 = 0;
					scanf("%d", &id1);
					file_search_id(file, id1);
					break;
				}
				case 3:
				{
					printf("찾으려는 E-MAIL 입력:");
					char email1[50] = { 0 };
					scanf("%s", email1);
					file_search_email(file, email1);
					break;
				}
				case 4:
					printf("원래 메뉴로 돌아갑니다.\n");
					break;
				}
				break;
			}
		}
		case 6: //주소록 삭제하기
		{
			printf("삭제할 이름 입력:");
			char name2[20];
			scanf("%s", name2);
			printf("%s 데이터를 삭제중입니다......\n",name2);
			file_delete(file, name2);
			Sleep(1000);
			system("pause");
			break;
		}
		case 7: //주소록 수정하기
		{
			char srname[20] = { 0 };
			char chname[20] = { 0 };

			printf("찾으려는 이름을 적어주세요:");
			scanf("%s", srname);
			printf("수정하려는 이름을 적어주세요:");
			scanf("%s", chname);
			file_update(srname, chname, file);
			printf("%s 데이터를 수정중입니다...\n",srname);
			Sleep(1000);
			system("pause");
			break;
		}
		case 8:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");
		}
		system("cls");
	}

}