#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

//------------------------------
// �� ���� ���� ���α׷�
//------------------------------
// 1. �� �� �������� ���� �Է�
// 2. �� �� �������� ����
// 3. ����
//------------------------------
// �޴� ���� :

void ins_guest(struct guestinfor st[]);
void show_guest(struct guestinfor st[]);
int main_menu();

char* name2[5] = { "���׽ý�","�׷���","�ƹݶ�","��Ÿ��","K5" };
char* price[5] = { "4õ����","5õ����","6õ����","7õ����","8õ����" };
int year[5] = { 2019,2020,2021,2022,2023 };
char* color[5] = { "����","���","��","���̺���","ȭ��Ʈ" };
char* place[5] = { "��������","��������","�뱸����","�������","�λ�����" };

char* name[5] = { "������","�󸶹�","�����","��īŸ","���ϰ�" };
char* addr[5] = { "�뱸 �߱� ����1��","�뱸 �߱� ����2��","�뱸 ������ Ȳ��1��","�뱸 ������ Ȳ��2��","�λ� �ؿ�뱸 �����߾ӷ�145" };
char* job[5] = { "������","��ü��","����","ȸ������","Ư����" };
char* phonenum[5] = { "010-1234-1234", "010-1234-1111","010-1234-2222",
	"010-1234-3333","010-1234-4444" };
char* birth[5] = { "1,2����","3,4����","5,6����","7,8,9����","10,11,12����" };

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
	printf("�� ���� ���� ���α׷� 1.5\n");
	printf("----------------------------\n");
	printf("1. �� �� �������� �Է�\n");
	printf("2. �� �� �������� ����\n");
	printf("3. ����\n");
	printf("----------------------------\n");
	printf("�޴� ���� : ");
	scanf(" %d", &n);
	return n;
}





int main(){
	srand(time(NULL)); // �����Լ��� ����� ���� �ʼ� ����
	struct guestinfor st[100] = { 0 }; // ����ü �̸�(������ Ÿ��)
	
	
	while (1) {
		switch (main_menu()) {
		case 1:
			ins_guest(st);
			break;
		case 2:
			show_guest(st);
			break;
		case 3:
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����\n");
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
	printf("�� �� �������� �Է� �Ϸ�.\n");
}

void show_guest(struct guestinfor st[])
{
	for (int i = 0; i < 5; i++) {
		printf("�̸�:%s\n", st[i].name);
		printf("��ȭ��ȣ:%s\n", st[i].phonenum);
		printf("�ּ�:%s\n", st[i].addr);
		printf("����:%s\n", st[i].job);
		printf("����:%s\n", st[i].birth);

		printf("����:%s\n", st[i].owncar.name2);
		printf("����:%d\n", st[i].owncar.year);
		printf("����:%s\n", st[i].owncar.price);
		printf("����:%s\n", st[i].owncar.color);
		printf("������:%s\n", st[i].owncar.place);
		printf("=======================\n");
	}
}