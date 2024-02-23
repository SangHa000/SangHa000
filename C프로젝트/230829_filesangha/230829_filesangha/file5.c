#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = fopen("src.txt", "rt");
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}
	fputc('Z', fp);
	fputc('X', fp);
	fclose(fp);

}