#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int start, end;
	printf("ù��° ���� �Է�:");
	scanf("%d", &start);
	int backup = start;
		printf("������ ���� �Է�:");
		scanf("%d", &end);
	int hap = 0;
	for (; start <= end; start++) {
		hap = hap + start;
	}
	printf("%d ~ %d�� ��:%d\n", backup, end, hap);*/

	//��� ���� ������ �ݵ�� 2�� �ݺ������� ����.
	for (int i = 0; i < 3; i++) {
		printf("1���� %d\t", i + 1);
	}
	// \t : ��Ű
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d�� %d��\n", i, j);
		}
		printf("\n");
	}

	//������
	for (int i = 1; i <= 10; i++) {
		for (int j = 2; j <= 10; j++) {
			printf("%d*%d=%d\t",j,i,j*i);
		}
		printf("\n");
	}
}