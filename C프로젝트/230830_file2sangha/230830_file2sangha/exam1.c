#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//--------------------------
// ���� ���� ���α׷� 1.0
//--------------------------
// 1.������ ������ ���� �Է�
// 2.���Ͽ��� �о����
// 3.����
//--------------------------
// �޴� ����:

typedef struct _person
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} person;



int main()
{
	char* name[5] = { "ȫȫȫ","������","�ڹڹ�","����","������" };
	int age[5] = { 10,20,30,40,50 };
	char* tel[5] = { "010-1111-2222","010-3333-4444","010-5555-6666","010-7777-8888","010-9999-9999" };
	char* addr[5] = { "�뱸������","�λ걤����","���ֱ�����","��걤����","����������" };

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
			printf("������ ������ �ԷµǾ����ϴ�.\n");
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
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!\n");
		}
	}
}



int menu()
{
	printf("===========================\n");
	printf("���� ���� ���α׷� 1.0\n");
	printf("===========================\n");
	printf("1. ������ ������ ���� �Է�\n");
	printf("2. ���� �о����\n");
	printf("3. ����!\n");
	printf("===========================\n");
	printf("�޴� ����:");
	int n;
	scanf("%d", &n);
	return n;
}

