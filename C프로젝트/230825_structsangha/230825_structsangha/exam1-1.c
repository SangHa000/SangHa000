// exam1.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// srand()
#include <time.h>	// time()

// �л� ���� ����ü
struct score {
	int kor;	// ����
	int eng;	// ����
	int math;	// ����
	int hap;	// ����
	int avg;	// ���
	char hak;	// ����
	char name[20]; // �̸�
};

int main()
{
	char* name[5] = { "ȫ���", "�ȹ���","�̻���","�̼���","�ѹݵ�" };
	int s[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	struct score sc_arr[100] = { 0 }; // 100���� ����ִ� ����ü �迭
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		strcpy(sc_arr[i].name, name[rand() % 5]);
		sc_arr[i].kor = s[rand() % 10];
		sc_arr[i].eng = s[rand() % 10];
		sc_arr[i].math = s[rand() % 10];

		printf(">>> %d��° �л����� <<<\n", i + 1);
		printf("sc_arr[%d] �̸�:%s\n", i + 1, sc_arr[i].name);
		printf("sc_arr[%d] ����:%d\n", i + 1, sc_arr[i].kor);
		printf("sc_arr[%d] ����:%d\n", i + 1, sc_arr[i].eng);
		printf("sc_arr[%d] ����:%d\n", i + 1, sc_arr[i].math);
		printf("----------------------------\n");
	}
}
