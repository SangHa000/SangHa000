#include <stdio.h>

void show_number(int n);
void show_number2(int n, int n2);

int main()
{
	// void �Լ���() -> (void:��������)��ȣ�ȸ� ��������
	// void �Լ���(�Ű�����, ...)

	// �ݵ�� �Ű������� �ִ� �Լ��� ȣ���� ���
	// ()�ȿ� �Ű������� �����ϴ� ���� �־���
	show_number(100);
	int n = 100;
	int n2 = 200;
	show_number2(n, n2); //show_number2(100,200) ���� �ǹ�

}

//�ڵ� ��Ÿ��
//������ũ ���: show_number -> C���
//ī�� ���: showNumber -> �ڹ� (��ü����)
//�Ľ�Į ���: ShowNumber -> C++,C# (��ü����)


void show_number(int n) //�Ű����� (�μ�,����)�� �ִ� �Լ� ���� 
{
	int sum = n + 100;
	printf("sum1:%d\n", sum);
}

void show_number2(int n,int n2) //�Ű�����        //
{                                                //
	int sum = n + n2;                            //  <--  ��������
	printf("sum2:%d\n", sum);                    //
}                                                //