// exam2.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy()
#include <stdlib.h>	// srand()
#include <time.h>	// time()

struct prefessor {
	char name[20];	// 교수명
	char major[20];	// 전공과목
	int age;		// 교수나이
};

struct student {
	char name[20];	// 학생명
	char tel[20];	// 전화번호
	int age;		// 나이
	char addr[50];	// 주소
	struct prefessor pro;	// 담당교수
};

int main()
{
	// 1.학생 정보 구조체 만들기
	// 2.학생 정보는 이름, 휴대폰번호, 나이, 주소가 있음.
	// 3.100명의 학생 정보를 랜덤하게 저장하여 출력
	// 4.랜덤값은 배열에 값을 저장하고 출력 처리	
	char* name[5] = { "홍길동", "전우치", "김유신", "유관순", "강감찬" };
	char* addr[5] = { "대구 동구 신암4동", "부산 동구 신암4동", "서울 동구 신암4동",
		"광주 동구 신암4동", "대전 동구 신암4동" };
	int age[5] = { 20, 30, 40, 50, 60 };
	char* tel[] = { "010-1234-1234", "010-1234-1111","010-1234-2222",
		"010-1234-3333","010-1234-4444" };
	struct student st[100] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		// 5개의 배열값중에서 1개를 추출해서 복사
		strcpy(st[i].name, name[rand() % 5]);
		strcpy(st[i].tel, tel[rand() % 5]);
		strcpy(st[i].addr, addr[rand() % 5]);
		st[i].age = age[rand() % 5];
	}

	for (int i = 0; i < 100; i++) {
		printf(">>> %d번째 학생 정보 <<<\n", i + 1);
		printf("이름:%s\n", st[i].name);
		printf("번호:%s\n", st[i].tel);
		printf("주소:%s\n", st[i].addr);
		printf("나이:%d\n", st[i].age);
		printf("-------------------------\n");
	}

	st[0].pro.age = 50; // 첫번째 학생의 담당교수 나이
	strcpy(st[0].pro.name, "홍교수"); // 첫번째 학생의 담당교수 이름
	printf("%s 학생의 담당 교수:%s\n", st[0].name, st[0].pro.name);

}