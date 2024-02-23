#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// C:/ 바로밑에는 관리자 권한으로 생성 불가
	// C:/test 는 가능함
	// 1. 파일 오픈
	// w: 기존의 내용을 무시하고 덮어씀 (기존 내용 삭제)
	// a: 기존의 내용을 보존하고 뒤에 붙여씀
	// r: 파일의 내용을 읽어옴
	FILE* fp = fopen("data.txt", "wt"); //wt = write text 쓰기모드
	if (fp == NULL) {
		printf("파일오픈 실패!!\n");
		return -1;
	}

	fputc('K', fp); // 문자 1개를 넣음
	fputc('L', fp);
	fputc('M', fp);
	fclose(fp);
	// 1. 파일 오픈(쓰기,읽기)
	// 2. 쓰거나 읽거나 작업
	// 3. 파일 닫기
	return 0;
}