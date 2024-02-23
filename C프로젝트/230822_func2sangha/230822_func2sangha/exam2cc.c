#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

// -------------------------------
// �������� ����ϴ� �Լ� ���� v1.0
// -------------------------------
// 1. ������ ¦���� ���(2~8)
// 2. ������ Ȧ���� ���(3~9)
// 3. ������ ��ü ���(2~9)
// 4. ����
// -------------------------------
// ��ȣ ����:
int main_n();
void gugu1();
void gugu2();
void gugu3();
void gugu1and2();
int main()
{
	//const char �Լ����Ļ���Ҷ� �̰Ž����. 

	while (1) {
		int m = main_n();
		switch (m) {
		case 1:
			gugu1and2('1');
			break;
		case 2:
			gugu1and2('2');
			break;
		case 3:
			gugu3();
			break;
		case 4:
			printf("���α׷� ����\n");
			exit(0);
		default:
			printf("�߸��� ��ȣ �Է�!\n");
			break;
		}
	}
}

int main_n()
{
	printf("-------------------------------\n");
	printf("�������� ����ϴ� �Լ� ���� v1.0\n");
	printf("-------------------------------\n");
	printf("1. ������ ¦���� ���\n");
	printf("2. ������ Ȧ���� ���\n");
	printf("3. ������ ��ü�� ���\n");
	printf("4. ����!\n");
	printf("-------------------------------\n");
	printf("��ȣ ���� :");
	int n;
	scanf(" %d", &n);
	return n;
}

void gugu1and2(char n)
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			if (j % 2 == 0&&n=='1') {
				printf("%d x %d =%d\t", j, i, j * i);
			}
			else if (j % 2 != 0&&n=='2') {
				printf("%d x %d =%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}


void gugu1()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 4; j++) {
			printf("%d x %d = %d\t", j * 2, i, (j * 2) * i);
		}
		printf("\n");
	}
}

void gugu2()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 5; j++) {
			printf("%d x %d = %d\t", (j * 2)-1, i, ((j * 2)-1) * i);
		}
		printf("\n");
	}
}


void gugu3()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d x %d = %d\t", j, i, j * i);
		}
		printf("\n");
	}
}