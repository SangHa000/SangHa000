#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//---------------------------
// 파일 제어 프로그램 1.0
//---------------------------
// 1. 친구 정보 쓰기
// 2. 친구 정보 읽기
// 3. 종료
//---------------------------
// 메뉴 선택:


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
			printf("이름 성별 나이 순 입력 : ");
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
			printf("프로그램 종료!");
			exit(0);
		}
	}
}

int menu()
{
	printf("=================================\n");
	printf("파일 제어 프로그램 1.0\n");
	printf("=================================\n");
	printf("1. 친구 정보 쓰기\n");
	printf("2. 친구 정보 읽기\n");
	printf("3. 종료!\n");
	printf("=================================\n");
	printf("메뉴 선택: ");
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
//	printf("이름 성별 나이 순 입력 : ");
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