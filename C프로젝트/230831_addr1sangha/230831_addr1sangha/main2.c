#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// ���ϸ� : address.bin --> �Ű������� ����
//=============================
//�ּҷ� ���� ���α׷� 1.0
//=============================
// 1. �ּҷ� �ڵ� ���� 
// 2. �ּҷ� ���� �Է�
// 3. �ּҷ� ��ü ����
// 4. �ּҷ� ����
// 5. ����!	
//=============================
// �޴� ����:
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
char* name[] = { "�̾���","�ְ���","�ھ���","�谡��","������" };
char* addr[] = { "�뱸������ ����","�뱸������ ������","�뱸������ �߱�","�뱸������ ����","�뱸������ �ϱ�" };
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
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!");
		}
	}
}

int menu()
{
	printf("==============================\n");
	printf(" �ּҷ� ���� ���α׷� 1.0\n");
	printf("==============================\n");
	printf("1. �ּҷ� �ڵ� ����\n");
	printf("2. �ּҷ� ���� �Է�\n");
	printf("3. �ּҷ� ��ü ����\n");
	printf("4. �ּҷ� ����\n");
	printf("5. ����!\n");
	printf("==============================\n");
	printf("�޴� ����: \n");
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
	printf("�ּҷ��� �ڵ����� �����Ǿ����ϴ�.\n");
}

void self_num(char addrname[])
{
	ADDR cu = { 0 };
	printf("���̵�: ");
	scanf("%d", &cu.id);
	printf("�̸�: ");
	scanf("%s", cu.name);
	printf("�ּ�: ");
	getchar();
	gets(cu.addr);
	printf("�̸���: ");
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
		printf("���̵�:%d\n", temp.id);
		printf("�̸�:%s\n", temp.name);
		printf("�ּ�:%s\n", temp.addr);
		printf("�̸���:%s\n", temp.email);
	}
}