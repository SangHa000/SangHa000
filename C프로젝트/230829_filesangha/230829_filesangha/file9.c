#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fren
{
	char name[10];
	char sex;
	int age;
}Friend;


int main()
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;

	/***file write***/
	fp = fopen("friend.bin", "wb");
	printf("�̸� ���� ���� �� �Է� : ");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);

	/***file read***/
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
}