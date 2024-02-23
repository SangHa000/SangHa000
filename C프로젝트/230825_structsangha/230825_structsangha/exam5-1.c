#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

// ���̸�, ������, �Ŵ�����
//----------------------------
// �� ���� ���� ���α׷� 1.6
//----------------------------
// 1. ������ ���� �Է�
// 2. ������ ���� �Է�
// 3. ������ ����
// 4. ����
//----------------------------
// �޴� ����:
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

char* man[5] = { "�̰���","�谡��","�ڰ���","�찡��","�ְ���" };
char* carname[5] = { "���׽ý�","�׷���","K9","�䷹��","��Ÿ��" };
char* name[5] = { "�̻���","�����","�ֹο�","�̼���","�̼���" };



int main()
{
	srand(time(NULL));
	struct guest all[5] = { 0 };

	while (1) {
		switch (menu()) {
		case 1:
			printf("���̸��� �Է����ּ���:");
			scanf("%s", &all[0].name);
			printf("���������� �Է����ּ���:");
			scanf("%s", &all[0].owner.carname);
			printf("�Ŵ����� �Է����ּ���:");
			scanf("%s", &all[0].owner.ownmodel.man);
			break;
		case 2:
			insert_guest(all);
			break;
		case 3:
			show_guest(all);
			break;
		case 4:
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����\n");
			break;
		}

	}
}

int menu()
{
	int n;
	printf("----------------------------\n");
	printf("�� ���� ���� ���α׷� 1.6\n");
	printf("----------------------------\n");
	printf("1. �� ���� �Է�\n");
	printf("2. �� ���� ���� �Է�\n");
	printf("3. �� ���� ����\n");
	printf("4. ����\n");
	printf("----------------------------\n");
	printf("�޴� ���� : ");
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
	printf("�� ���� �Է� �Ϸ�!\n");
}

void show_guest(struct guest all[])
{
	for (int i = 0; i < 5; i++) {
		printf("�� �̸�: %s\n", all[i].name);
		printf("�� �����̸�: %s\n", all[i].owner.carname);
		printf("���� ��� �Ŵ���: %s\n", all[i].owner.ownmodel.man);
		printf("=====================================\n");
	}
}