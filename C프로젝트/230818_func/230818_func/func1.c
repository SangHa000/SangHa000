#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void greeting(); //�����Լ� �Ʒ��� ���ǰ� ������ ������

int main() //�����Լ�
{
	greeting();  //greeting �Լ� ���Ǹ� ȣ����
	printf("main�Լ��� �ٸ�����\n");
	greeting(); //�Լ��� ȣ���� �ٸ� �Լ����� ����

}

// �Լ��� ���Ǵ� ����������� --> ����ϱ����ؼ� �ٸ� �Լ����� �ش� �Լ� ȣ���� �ʿ���
void greeting() //���� ���� �Լ��� ����
{
	printf("----�Լ� ����----\n");
	printf("�ȳ��ϼ���\n");
	printf("�ݰ����ϴ�\n");
	printf("----�Լ� ����----\n");
}


void greeting2()
{
	greeting();
}