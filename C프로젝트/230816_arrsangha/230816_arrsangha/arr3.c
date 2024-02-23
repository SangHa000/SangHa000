#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str); //배열이름 str앞에 '&' 붙이지 않음.
	printf("입력받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != 0) {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}