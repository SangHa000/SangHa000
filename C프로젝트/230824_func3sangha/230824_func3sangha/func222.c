#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h> //time()
//#define DEBUG 1 ����� �ڵ�

// 1. �ζ� ����(�ߺ�����) - �迭������ �н� ����
// 2. �Լ��� ó�� - �Լ� �н�

// �ζ� ��ȣ�� ������ �迭 ����
void lottery(int lotto[]);
int main()
{
	int lotto[6] = { 0 };
	srand(time(NULL));
	lottery(lotto);
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
	
}

void lottery(int lotto[])
{
	for (int i = 0; i < 6; i++) {
		lotto[i] = (rand() % 45) + 1;
		//printf("%d\t", lotto[i]); // �ߺ���ȣ�� ����
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--; // i���ҽ�Ű�� ������ �ߺ��� �չ迭�� �ٽ� ���ư��� ���ؼ�
				break; // �˻�� ���� ��ȣ�������� Ż��
			}
		}
	}
	
}