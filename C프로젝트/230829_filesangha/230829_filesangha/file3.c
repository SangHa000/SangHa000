#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char* name[] = { "ȫ���","��浢","�ڱ��","�ֱ��" };
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Lee \n", fp);
	fputs("�� �̸���?? \n", fp);
	for (int i = 0; i < 4; i++) {
		fputs(name[i], fp);
		fputc('\n', fp);
	}
	fclose(fp);
}