#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char* name[] = { "홍길머","김길덩","박길머","최길모" };
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Lee \n", fp);
	fputs("네 이름은?? \n", fp);
	for (int i = 0; i < 4; i++) {
		fputs(name[i], fp);
		fputc('\n', fp);
	}
	fclose(fp);
}