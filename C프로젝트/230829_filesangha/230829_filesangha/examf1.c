#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//---------------------------
// ���� ���� ���α׷� 1.0
//---------------------------
// 1. ģ�� ���� ����
// 2. ģ�� ���� �б�
// 3. ����
//---------------------------
// �޴� ����:


typedef struct fren
{
	char name[10];
	char sex;
	int age;
}Friend;


//void write(fp);
//void read(fp);

int main()
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;

	while (1) {
		int me = menu();
		switch (me) {
		case 1:
			fp = fopen("friend.bin", "wb");
			printf("�̸� ���� ���� �� �Է� : ");
			scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
			fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
			fclose(fp);
			break;
		case 2:
			fp = fopen("friend.bin", "rb");
			fread(&myfren2, sizeof(myfren2), 1, fp);
			printf("%s %c %d", myfren2.name, myfren2.sex, myfren2.age);
			fclose(fp);
			break;
		case 3:
			printf("���α׷� ����!");
			exit(0);
		}
	}
}

int menu()
{
	printf("=================================\n");
	printf("���� ���� ���α׷� 1.0\n");
	printf("=================================\n");
	printf("1. ģ�� ���� ����\n");
	printf("2. ģ�� ���� �б�\n");
	printf("3. ����!\n");
	printf("=================================\n");
	printf("�޴� ����: ");
	int n;
	scanf("%d", &n);
	return n;
}

//void write(fp)
//{
//	/***file write***/
//  FILE* fp;
//  Friend myfren1;
//	fp = fopen("friend.bin", "wb");
//	printf("�̸� ���� ���� �� �Է� : ");
//	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
//	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
//	fclose(fp);
//}
//
//void read(fp)
//{
//	/***file read***/
//  FILE* fp;
//  Friend myfren2; 
//	fp = fopen("friend.bin", "rb");
//	fread(&myfren2, sizeof(myfren2), 1, fp);
//	printf("%s %c %d", myfren2.name, myfren2.sex, myfren2.age);
//	fclose(fp);
//}