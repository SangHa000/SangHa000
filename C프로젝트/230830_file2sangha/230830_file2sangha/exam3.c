#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// *���� ������ ��� ����
//===========================
// �� ���� �������α׷� 2.0
//===========================
// 1.�� ���� ���� �Է�
// 2.�� ���� ���� �Է�
// 3.�� ���� ����
// 4.����

// �� ����: �̸�,��ȭ,�ּ�
// ���� ����: �𵨸�,����,����

typedef struct CARINFOR 
{
	char carname[20];
	char price[20];
	char year[20];
}CAR;

typedef struct CUSINFOR
{
	char name[20];
	char tel[20];
	char addr[50];
	CAR car;
}CUST;


int main()
{
	char* carname[5] = { "���׽ý�","����","�����ٰ�","����","���" };
	char* price[5] = { "4000����","5000����","6000����","7000����","8000����" };
	char* year[5] = { "2018���","2019���","2020���","2021���","2022���" };

	char* name[5] = { "������","������","������","������","������" };
	char* tel[5] = { "010-1212-1212","010-3535-3535","010-6868-6868","010-9754-2154","010-5471-8135" };
	char* addr[5] = { "�뱸������ ��õ��","�λ걤���� ����","����Ư���� �ѳ���","���������� �л굿","����Ư���� ���ﵿ" };

	CUST st[100] = { 0 };
	srand(time(NULL));
	char filename[] = "car.bin";
	
	while (1) {
		int me = menu();
		switch (me) {
		case 1: {
			CUST cst = { 0 };
			printf("�� �̸�: ");
			scanf("%s", cst.name);
			printf("�� ��ȭ��ȣ: ");
			scanf("%s", cst.tel);
			getchar(); // \nȿ��
			printf("�� �ּ�: ");
			gets(cst.addr); //���� �Է¹ޱ����ؼ� ���
			printf("������: ");
			scanf("%s", cst.car.carname);
			printf("����: ");
			scanf("%s", cst.car.price);
			printf("����: ");
			scanf("%s", cst.car.year);

			FILE* fp = fopen(filename, "ab");
			fwrite(&cst, sizeof(cst), 1, fp);
			fclose(fp);
			break;
		}
		case 2:
		{
			FILE* fp2 = fopen("car.bin", "ab");
			for (int i = 0; i < 5; i++) {
				strcpy(st[i].name, name[rand() % 5]);
				strcpy(st[i].tel, tel[rand() % 5]);
				strcpy(st[i].addr, addr[rand() % 5]);
				strcpy(st[i].car.carname, carname[rand() % 5]);
				strcpy(st[i].car.price, price[rand() % 5]);
				strcpy(st[i].car.year, year[rand() % 5]);
				fwrite(&st[i], sizeof(CUST), 1, fp2);
			}
			fclose(fp2);
			printf("������ �������� �ԷµǾ����ϴ�.\n");
			break;
		}
		case 3: 
		{
			FILE* fp3 = fopen("car.bin", "rb");
			CUST temp = { 0 };
			while (fread(&temp, sizeof(temp), 1, fp3) == 1) {
				printf("���̸�:%s ��ȭ��ȣ:%s �ּ�:%s\n", temp.name, temp.tel, temp.addr);
				printf("�����̸�:%s ����:%s ����:%s\n", temp.car.carname, temp.car.price, temp.car.year);
			}break;
		case 4: 
		{
			FILE* fp = fopen("car.bin", "wb");
			fclose(fp);
			printf("������ �����͸� �����߽��ϴ�.\n");
			break;
		}
		case 5:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����\n");
		}

		}
	}

}

int menu()
{
	printf("==============================\n");
	printf(" �� ���� ���� ���α׷� 2.0\n");
	printf("==============================\n");
	printf("1. �� ���� ���� �Է�\n");
	printf("2. �� ���� ���� �Է�\n");
	printf("3. �� ���� ����\n");
	printf("4. �� ���� ��ü ����\n");
	printf("5. ����!\n");
	printf("==============================\n");
	printf("�޴� ����: \n");
	int n;
	scanf("%d", &n);
	return n;
}