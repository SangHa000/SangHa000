#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _person
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} person;

int main()
{
	person son[2] = {
	{"ȫ���",100,"010-2222-3333","���� �Ѿ� �밨��"},
	{"�ֱ��",200,"010-4444-5555","���� �뿵 �ؾȴ�"}
	};

	//���� ����
	FILE* fp = fopen("person_arr.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return -1;
	}

	fwrite(&son[0], sizeof(son[0]), 1, fp);
	fwrite(&son[1], sizeof(son[1]), 1, fp);
	printf("���Ͽ� ���������� �����\n");
	fclose(fp);

	//���� �б�
	FILE* fp3 = fopen("person_arr.bin", "rb");
	if (fp == NULL) {
		printf("���� �б� ����\n");
		return -1;
	}
	person temp3 = { 0 };

	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("name:%s, age:%d, tel:%s, address:%s \n", temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp3);
}