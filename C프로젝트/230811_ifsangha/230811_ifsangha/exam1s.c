#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���迬����, �������ڰ� if���� �������� ���� ���
	//����1.
	//1���� ���ڸ� �Է� �޾Ƽ� ¦��, Ȧ������ üũ�ϴ� ���α׷�
	//������ ������ Ȱ�� (num%2==0) ->2�γ����������� 0�̸� ¦�� 1�̸� Ȧ��

	int n;
	printf("���� �Է�:");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("¦��\n");
	}
	else if (n % 2 == 1) {
		printf("Ȧ��\n");
	}



	//����2.
	//2���� ���ڸ� �Է¹޾Ƽ� ũ��,�۴�,���ٸ� üũ�ϴ� ���α׷�

	int num1, num2;
	printf("�ΰ��� ���� �Է�:");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
		printf("ù��°���� �ι�°������ ũ��.\n");
	if (num1 < num2)
		printf("ù��°���� �ι�°������ �۴�.\n");
	if (num1 == num2)
		printf("�� �� ��� ����.\n");
		

	//����3.
	//��,��,�� ������ �Է¹޾Ƽ� ����,���,������ ���ϴ� ���α׷�
	//����:100-90 A , 89-80 B, 79-70 C, 69-60 D, 59- F
	//(num >=90 && num<=100)

	int kor, eng, math,total;
	double avr;
	printf("����,����,���� ���� �Է�:");
	scanf("%d %d %d", &kor, &eng, &math);

	total = kor + eng + math;
	printf("����,����,���� ������ ����:%d\n", total);

	avr = total / 3;
	printf("���: %f\n", avr);

	if (avr >= 90 && avr <= 100) {
		printf("���� A\n");
	}
	else if (avr >= 80) {
		printf("���� B\n");
	}
	else if (avr >= 70) {
		printf("���� C\n");
	}
	else if (avr >= 60) {
		printf("���� D\n");
	}
	else if (avr <= 59) {
		printf("���� F\n");
	}







}