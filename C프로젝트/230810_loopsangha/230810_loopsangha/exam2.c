#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����2��
int main(void)
{
	int total = 0;
	int num1, num2;
	printf("num1 ���� num2������ ����, num1��?");
	scanf("%d", &num1);
	do {
		printf("num1 ���� num2������ ����, num2��?");
		scanf("%d", &num2);
	} while (num2 <= num1); //������ �ѿ����� ������ �ٽ��Է��ϰ� ����.

	for (int i= num1; num2>=i; i++) //i�� �������� ������ num1 +1�� ��������.
		total += i;

	printf("%d ���� %d���� �������:%d\n", num1, num2, total);

}