#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �迭������ �Ű������� �����ϴ� ���
// ��������, �������� ���� ���� �� Ȱ��
// Call by Value(���� ���� ����)
// Call by Address(�ּҰ��� ���� ����)

// �迭: ������ �����Ҽ��ִ� �������� ����

void show_arr(int brr[]);


int main()
{
	int arr[10] = { 0 };  // �������� 10�� �����Ҽ��ִ� arr�迭����
	int a;  //������ �Ѱ����� �����ϴ� �Ϲ� ���� a

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
		//printf("%d\t", arr[i]);
	}
	show_arr(arr);

}

void show_arr(int brr[])
{
	// main���� ���� �迭�� ���Լ����� ���
	for (int i = 0; i < 10; i++) {
		printf("a[%d]=%d\n", i, brr[i]);
	}


}