// exam5.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strcmp()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

struct car {
	char model[20];		// �𵨸�	
};

struct manager {
	char name[20];
};

struct customer {
	char name[20];
	struct manager ma;
	struct car ca;
};

char* cu_name[] = { "ȫ�浿", "����ġ", "������", "�̼���", "������" };
char* model[] = { "�׷���", "���׽ý�", "��Ÿ��", "�ҳ�Ÿ", "K9" };
char* ma_name[] = { "���߱�", "������", "ȫ����", "�Ӳ���", "�Ż��Ӵ�" };

int main_menu();

int main()
{
	srand(time(NULL));
	struct customer cu[5] = { 0 };	// ���� �Է� ����
	while (1) {
		switch (main_menu()) {
		case 1:
			printf("���� �Է�:");
			scanf("%s", &cu[0].name);
			printf("������ �Է�:");
			scanf("%s", &cu[0].ca.model);
			printf("�Ŵ��� �Է�:");
			scanf("%s", &cu[0].ma.name);
			printf("�������� �������� �ԷµǾ����ϴ�.\n");
			break;
		case 2:
			for (int i = 0; i < 5; i++) {
				strcpy(cu[i].name, cu_name[rand() % 5]);
				strcpy(cu[i].ca.model, model[rand() % 5]);
				strcpy(cu[i].ma.name, ma_name[rand() % 5]);
			}
			printf("�������� �����ϰ� �ԷµǾ����ϴ�.\n");
			break;
		case 3:
			for (int i = 0; i < 5; i++) {
				// cu[i].name �� ���� ""�� ���ٸ�
				// ��, �������� ������ Ż����.
				if (strcmp(cu[i].name, "") == 0) {
					break;
				}
				printf("����ȣ:%d\n", i + 1);
				printf("����:%s\n", cu[i].name);
				printf("������:%s\n", cu[i].ca.model);
				printf("�Ŵ�����:%s\n", cu[i].ma.name);
				printf("--------------------------\n");
			}
			break;
		case 4:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!!\n");
		}
	}
}

int main_menu()
{
	printf("----------------------------\n");
	printf("������ ���� ���α׷� v1.6\n");
	printf("----------------------------\n");
	printf("1. ������ ���� �Է�\n");
	printf("2. ������ ���� �Է�\n");
	printf("3. ������ ����\n");
	printf("4. ����\n");
	printf("----------------------------\n");
	printf("�޴� ���� :");
	int menu;
	scanf("%d", &menu);
	return menu;
}