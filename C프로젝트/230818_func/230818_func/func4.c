#include <stdio.h>

int add(int n1, int n2);

int sub(int n1, int n2);

int main()
{
	//���ϰ��� ������Ÿ�� �Լ���(�Ű�����,...)
	int n1 = 200; 
	int n2 = 50;

	//add()�Լ� ȣ���ؼ� ���ϰ��� main���� ���
	//sub()�Լ� ȣ���ؼ� ���ϰ��� main���� ���
	int a = add(n1,n2);
	printf("���� ��:%d\n", a);

	int b = sub(n1,n2);
	printf("�� ��:%d\n", b);

}

int add(int n1, int n2)
{
	int a = n1 + n2;
	return a;
}

int sub(int n1, int n2)
{
	int b = n1 - n2;
	return b;
}