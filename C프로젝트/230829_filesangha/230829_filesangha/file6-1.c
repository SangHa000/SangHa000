#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("���� ���� ����!");
		return -1;
	}
	/*while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}*/

	while (1) {
		ch = fgetc(fp);
		if (ch == EOF)break;
		printf("%c", ch);
	}
}