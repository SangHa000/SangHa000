#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

// ���������� ���α׷� �����
// ��, ���� ����ü ����� --> (Ŭ������ Ȯ��)
// ������ - �̸�, ����, �ּ�, ����, ����
// �������� - �𵨸�, ����, ����, ����, ������
// ���� ����ü ������ �迭���� �����ϰ� �����Ͽ� �Է� �� ����ϱ�

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
	char* name[10] = { "������","�󸶹�","�����","��īŸ","���ϰ�","���ٶ�","���ٻ�","������","īŸ��","�ϰ���" };
	char* addr[10] = { "�뱸 �߱� ����1��","�뱸 �߱� ����2��","�뱸 �߱� ����3��","�뱸 �߱� ����4��",
		"�뱸 ������ Ȳ��1��","�뱸 ������ Ȳ��2��","�뱸 ������ Ȳ��3��","�뱸 ������ Ȳ��4��",
		"�λ� �ؿ�뱸 �����߾ӷ�145","�λ� �ؿ�뱸 �����߾ӷ�139" };
	char* job[10] = { "����","�ǻ�","��ȣ��","��ȣ��","�˻�","�����","�ֺ�","����","������","�����" };
	char* phonenum[10] = { "010-1234-1234", "010-1234-1111","010-1234-2222",
		"010-1234-3333","010-1234-4444","010-1239-1239", "010-1234-5111","010-1234-5222",
		"010-1234-2233","010-1234-6644" };
	int birth[] = { 210,331,427,520,725,211,330,425,521,724 };



	struct guestinfor st[10] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		// 5���� �迭���߿��� 1���� �����ؼ� ����
		strcpy(st[i].name, name[rand() % 10]);
		strcpy(st[i].phonenum, phonenum[rand() % 10]);
		strcpy(st[i].addr, addr[rand() % 10]);
		strcpy(st[i].job, job[rand() % 10]);
		st[i].birth = birth[rand() % 10];

	}

	for (int i = 0; i < 10; i++) {
		printf(">>> %d��° �� ���� <<<\n", i + 1);
		printf("�̸�:%s\n", st[i].name);
		printf("��ȭ��ȣ:%s\n", st[i].phonenum);
		printf("�ּ�:%s\n", st[i].addr);
		printf("����:%s\n", st[i].job);
		printf("����:%d\n", st[i].birth);
		printf("=======================\n");
	}
	

}