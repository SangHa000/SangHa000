#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void total(int k, int e, int m);

int main()
{
	int kor, eng, math;
	// exit(0); ---> ���������ϱ�
	printf("���� ����:");
	scanf("%d", &kor);
	if (kor < 0 || kor>100) {
		printf("�߸��� ���� �Է�\n");
		exit(0);
	}
	printf("���� ����:");
	scanf("%d", &eng);
	if (eng < 0 || eng >100) {
		printf("�߸��� ���� �Է�\n");
		exit(0);
	}
	printf("���� ����:");
	scanf("%d", &math);
	if (math < 0 || math > 100) {
		printf("�߸��� ���� �Է�\n");
		exit(0);
	}
	
	total(kor, eng, math);

}

void total(int k, int e, int m)
{
	int allpoint;
	int avr;
	allpoint = k + e + m;
	printf("����: %d\n", allpoint);

	avr = (k + e + m) / 3;
	printf("���: %d\n", avr);

}