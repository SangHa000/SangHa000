#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _person
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} person;

int main()
{
	person son[2] = {
	{"홍길머",100,"010-2222-3333","조선 한양 대감댁"},
	{"최길머",200,"010-4444-5555","조선 통영 해안댁"}
	};

	//파일 쓰기
	FILE* fp = fopen("person_arr.bin", "wb");
	if (fp == NULL) {
		printf("파일 쓰기 에러\n");
		return -1;
	}

	fwrite(&son[0], sizeof(son[0]), 1, fp);
	fwrite(&son[1], sizeof(son[1]), 1, fp);
	printf("파일에 정상적으로 저장됨\n");
	fclose(fp);

	//파일 읽기
	FILE* fp3 = fopen("person_arr.bin", "rb");
	if (fp == NULL) {
		printf("파일 읽기 에러\n");
		return -1;
	}
	person temp3 = { 0 };

	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("name:%s, age:%d, tel:%s, address:%s \n", temp3.name, temp3.age, temp3.tel, temp3.addr);
	}
	fclose(fp3);
}