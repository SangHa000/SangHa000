#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1~5���� ���������� �Ű������� �����Ͽ� ����ϴ� �Լ��ۼ�
// �Լ��� : show_num()

void main()
{
	show_num(1);  //�Լ� ȣ��
	show_num(2);
	show_num(3);
	show_num(4);
	show_num(5);

	for (int i = 1; i <= 5, i++) {
		show_num(i);
	}
}

// �Ű����� ����ϴ� �Լ�����
void show_num(int n)
{
	printf("%d\n", n);
}