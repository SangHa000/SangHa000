#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt","rt");
	FILE* des = fopen("dst.txt","wt");

	int ch;

	if (src == NULL || des == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}
	if (feof(src) != 0) {
		puts("���� ���� �Ϸ�!");
	}
	else {
		puts("���� ���� ����!");
	}


	fclose(src);
	fclose(des);
}