#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <windows.h>// win32 api ��� (������ ȯ�濡���� ��� ����)
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
			printf("���� �����͸� �������Դϴ�......\n");
			Sleep(2000); // sec - ms - us - ns
			system("pause");
			break;
		}
		case 2:
		{
			ADDR ad = { 0 };
			printf("ID:");
			scanf("%d", &ad.id);

			printf("�̸�:");
			scanf("%s", ad.name);

			printf("��ȭ:");
			scanf("%s", ad.tel);

			printf("�ּ�:");
			getchar();
			gets(ad.addr);

			printf("Email:");
			scanf("%s", ad.email);
			file_write(ad, file);   // ad ���� ���� ����  // file �ּҿ� ���� ����
			printf("�����Ͱ� �Է����Դϴ�......\n");
			Sleep(1000);
			system("pause");
			break;
		}
		case 3:
			file_del_all(file); //��ü ����
			printf("��ü �����͸� �������Դϴ�......\n");
			Sleep(1000);
			system("pause"); //�̰� �Ȱɸ� �ý��۰����� ������ �ȿ���
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
					printf("ã������ �̸� �Է�:");
					char name1[20] = { 0 };
					scanf("%s", name1);
					file_search(file, name1);
					break;
				}
				case 2:
				{
					printf("ã������ ID �Է�:");
					int id1 = 0;
					scanf("%d", &id1);
					file_search_id(file, id1);
					break;
				}
				case 3:
				{
					printf("ã������ E-MAIL �Է�:");
					char email1[50] = { 0 };
					scanf("%s", email1);
					file_search_email(file, email1);
					break;
				}
				case 4:
					printf("���� �޴��� ���ư��ϴ�.\n");
					break;
				}
				break;
			}
		}
		case 6: //�ּҷ� �����ϱ�
		{
			printf("������ �̸� �Է�:");
			char name2[20];
			scanf("%s", name2);
			printf("%s �����͸� �������Դϴ�......\n",name2);
			file_delete(file, name2);
			Sleep(1000);
			system("pause");
			break;
		}
		case 7: //�ּҷ� �����ϱ�
		{
			char srname[20] = { 0 };
			char chname[20] = { 0 };

			printf("ã������ �̸��� �����ּ���:");
			scanf("%s", srname);
			printf("�����Ϸ��� �̸��� �����ּ���:");
			scanf("%s", chname);
			file_update(srname, chname, file);
			printf("%s �����͸� �������Դϴ�...\n",srname);
			Sleep(1000);
			system("pause");
			break;
		}
		case 8:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!\n");
		}
		system("cls");
	}

}