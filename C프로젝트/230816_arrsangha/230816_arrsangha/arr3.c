#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str); //�迭�̸� str�տ� '&' ������ ����.
	printf("�Է¹��� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	while (str[idx] != 0) {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}