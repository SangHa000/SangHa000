#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = fopen("src.txt", "rt");
	if (fp == NULL) {
		puts("���� ���� ����!");
		return -1;
	}
	fputc('Z', fp);
	fputc('X', fp);
	fclose(fp);

}