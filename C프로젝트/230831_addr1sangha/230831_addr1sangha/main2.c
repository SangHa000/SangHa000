#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// 파일명 : address.bin --> 매개변수로 전달
//=============================
//주소록 관리 프로그램 1.0
//=============================
// 1. 주소록 자동 생성 
// 2. 주소록 직접 입력
// 3. 주소록 전체 삭제
// 4. 주소록 보기
// 5. 종료!	
//=============================
// 메뉴 선택:
int menu();
void make_num(char addrname[]);
void self_num(char addrname[]);
void delete_num(char addrname[]);
void read_num(char addrname[]);

typedef struct _ADDR
{
	int id;
	char name[20];
	char addr[50];
	char email[50];

}ADDR;

const int id[] = { 111,222,333,444,555 };
char* name[] = { "이씨네","최가네","박씨네","김가네","오씨네" };
char* addr[] = { "대구광역시 동구","대구광역시 수성구","대구광역시 중구","대구광역시 남구","대구광역시 북구" };
char* email[] = { "qweasd@naver.com", "tregfd@gmail.com","zxcvbn@daum.net","teacher@hanmail.net","sangha331@nate.com" };

ADDR st[100] = { 0 };

int main()
{
	srand(time(NULL));

	char addrname[] = "address.bin";

	while (1) {
		int me = menu();
		switch (me) {
		case 1:
			make_num(addrname);
			break;
		case 2:
			self_num(addrname);
			break;
		case 3:
			delete_num(addrname);
			break;
		case 4:
			read_num(addrname);
			break;
		case 5:
			printf("프로그램을 종료합니다.\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!");
		}
	}
}

int menu()
{
	printf("==============================\n");
	printf(" 주소록 관리 프로그램 1.0\n");
	printf("==============================\n");
	printf("1. 주소록 자동 생성\n");
	printf("2. 주소록 직접 입력\n");
	printf("3. 주소록 전체 삭제\n");
	printf("4. 주소록 보기\n");
	printf("5. 종료!\n");
	printf("==============================\n");
	printf("메뉴 선택: \n");
	int n;
	scanf("%d", &n);
	return n;
}

void make_num(char addrname[])
{
	FILE* fp = fopen(addrname, "ab");
	for (int i = 0; i < 5; i++) {
		st[i].id = id[rand() % 5];
		strcpy(st[i].name, name[rand() % 5]);
		strcpy(st[i].addr, addr[rand() % 5]);
		strcpy(st[i].email, email[rand() % 5]);
		fwrite(&st[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
	printf("주소록이 자동으로 생성되었습니다.\n");
}

void self_num(char addrname[])
{
	ADDR cu = { 0 };
	printf("아이디: ");
	scanf("%d", &cu.id);
	printf("이름: ");
	scanf("%s", cu.name);
	printf("주소: ");
	getchar();
	gets(cu.addr);
	printf("이메일: ");
	scanf(" %s", &cu.email);

	FILE* fp = fopen(addrname, "ab");
	fwrite(&cu, sizeof(cu), 1, fp);
	fclose(fp);
}

void delete_num(char addrname[])
{
	FILE* fp2 = fopen(addrname, "wb");
	fclose(fp2);

}

void read_num(char addrname[])
{
	FILE* fp3 = fopen(addrname, "rb");
	ADDR temp = { 0 };
	while (fread(&temp, sizeof(ADDR), 1, fp3) == 1) {
		printf("아이디:%d\n", temp.id);
		printf("이름:%s\n", temp.name);
		printf("주소:%s\n", temp.addr);
		printf("이메일:%s\n", temp.email);
	}
}