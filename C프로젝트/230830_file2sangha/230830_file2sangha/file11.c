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
	person son = { "ȫ���",100,"010-2222-3333","���� �Ѿ� �밨��" };
	person son2 = { "�ֱ��",200,"010-4444-5555","���� �뿵 �ؾȴ�" };
	//���� ����
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return -1;
	}

	fwrite(&son, sizeof(son), 1, fp); //1 �ѵ���� �ǹ���.
	fwrite(&son2, sizeof(son2), 1, fp);
	printf("���Ͽ� ���������� �����\n");
	fclose(fp);

	//���� �б�
	//FILE* fp2 = fopen("person.bin", "rb");
	//if (fp == NULL) {
	//	printf("���� �б� ����\n");
	//	return -1;
	//}
	//person temp = { 0 }; // ���Ͽ��� ����ü ������ �о� �����ϴ� �� ����ü
	//fread(&temp, sizeof(temp), 1, fp2);
	//printf("name:%s, age:%d, tel:%s, address:%s \n", temp.name, temp.age, temp.tel, temp.addr);
	//fread(&temp, sizeof(temp), 1, fp2);
	//printf("name:%s, age:%d, tel:%s, address:%s \n", temp.name, temp.age, temp.tel, temp.addr);
	//fclose(fp2);



	//���� �б�2
	FILE* fp3 = fopen("person.bin", "rb");
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