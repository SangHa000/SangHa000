// exam2.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

struct prefessor {
	char name[20];	// ������
	char major[20];	// ��������
	int age;		// ��������
};

struct student {
	char name[20];	// �л���
	char tel[20];	// ��ȭ��ȣ
	int age;		// ����
	char addr[50];	// �ּ�
	struct prefessor pro;	// ��米��
};

int main()
{
	// 1.�л� ���� ����ü �����
	// 2.�л� ������ �̸�, �޴�����ȣ, ����, �ּҰ� ����.
	// 3.100���� �л� ������ �����ϰ� �����Ͽ� ���
	// 4.�������� �迭�� ���� �����ϰ� ��� ó��	
	char* name[5] = { "ȫ�浿", "����ġ", "������", "������", "������" };
	char* addr[5] = { "�뱸 ���� �ž�4��", "�λ� ���� �ž�4��", "���� ���� �ž�4��",
		"���� ���� �ž�4��", "���� ���� �ž�4��" };
	int age[5] = { 20, 30, 40, 50, 60 };
	char* tel[] = { "010-1234-1234", "010-1234-1111","010-1234-2222",
		"010-1234-3333","010-1234-4444" };
	struct student st[100] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		// 5���� �迭���߿��� 1���� �����ؼ� ����
		strcpy(st[i].name, name[rand() % 5]);
		strcpy(st[i].tel, tel[rand() % 5]);
		strcpy(st[i].addr, addr[rand() % 5]);
		st[i].age = age[rand() % 5];
	}

	for (int i = 0; i < 100; i++) {
		printf(">>> %d��° �л� ���� <<<\n", i + 1);
		printf("�̸�:%s\n", st[i].name);
		printf("��ȣ:%s\n", st[i].tel);
		printf("�ּ�:%s\n", st[i].addr);
		printf("����:%d\n", st[i].age);
		printf("-------------------------\n");
	}

	st[0].pro.age = 50; // ù��° �л��� ��米�� ����
	strcpy(st[0].pro.name, "ȫ����"); // ù��° �л��� ��米�� �̸�
	printf("%s �л��� ��� ����:%s\n", st[0].name, st[0].pro.name);

}