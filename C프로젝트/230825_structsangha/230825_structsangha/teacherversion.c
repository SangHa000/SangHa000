// exam4.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

struct car {
	char model[20];		// �𵨸�
	char price[20];		// ����
	int year;			// ����
	char color[10];		// ����
	char office[50];	// ������
};

struct customer {
	char name[20];		// ����
	char tel[20];		// ��ȭ
	char addr[50];		// �ּ�
	char job[20];		// ����
	char birth[20];		// ����
	struct car ca;		// ��������
};

int main_menu();

int main()
{
	char* model[5] = { "�׷���", "���׽ý�", "��Ÿ��", "�ҳ�Ÿ", "K9" };
	char* price[5] = { "4õ����", "5õ����", "6õ����", "7õ����", "8õ����" };
	int year[5] = { 2020, 2021, 2022, 2022, 2024 };
	char* color[5] = { "����", "���", "����", "����", "����" };
	char* office[5] = { "�뱸 ������", "���� ������", "�λ� ������", "���� ������", "��õ ������" };

	char* name[5] = { "ȫ�浿", "����ġ", "������", "�̼���", "������" };
	char* tel[5] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444",
		"010-1234-5555" };
	char* addr[5] = { "�뱸 ���� �žϵ�", "���� ���� �žϵ�", "�λ� ���� �žϵ�", "���� ���� �žϵ�",
		"���� ���� �žϵ�" };
	char* job[5] = { "����", "ȸ���", "����", "������", "���" };
	char* birth[5] = { "70��1��1��", "60��1��1��", "80��1��1��", "90��1��1��", "50��1��1��" };
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
			printf("���������� �����Ͱ� �ԷµǾ����ϴ�\n");
			break;
		case 2:
			for (int i = 0; i < 100; i++) {
				printf("��ȣ:%d\n", i + 1);
				printf("����:%s\n", cu[i].name);
				printf("��ȭ:%s\n", cu[i].tel);
				printf("�ּ�:%s\n", cu[i].addr);
				printf("����:%s\n", cu[i].job);
				printf("����:%s\n", cu[i].birth);
				printf("�𵨸�:%s\n", cu[i].ca.model);
				printf("����:%s\n", cu[i].ca.price);
				printf("����:%s\n", cu[i].ca.color);
				printf("����:%d\n", cu[i].ca.year);
				printf("������:%s\n", cu[i].ca.office);
				printf("==============================\n");
			}
			break;
		case 3:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!!\n");
		}
	}
}

int main_menu()
{
	printf("----------------------------\n");
	printf("������ ���� ���α׷� v1.5\n");
	printf("----------------------------\n");
	printf("1. ���� �������� �Է�\n");
	printf("2. ���� �������� ����\n");
	printf("3. ����\n");
	printf("----------------------------\n");
	printf("�޴� ���� :");
	int menu;
	scanf("%d", &menu);
	return menu;
}