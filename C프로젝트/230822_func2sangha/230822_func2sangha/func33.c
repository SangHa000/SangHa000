#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void call_by_addr(int a[]);

int main()
{
	// Call by Address (�ּҰ��� ���� ����)

	int arr[2] = { 10,20 };
	printf("1.main()=>arr[0]:%d, arr[1]:%d\n",arr[0],arr[1]); //10������ 10, 20�� ������� ����
	call_by_addr(arr);
	printf("2.main()=>arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]); // 12������ �Լ��Ŀ� ����
}

void call_by_addr(int a[])
{
	// a�� b�ǰ��� ���� �ٲ�ġ��

	int temp = a[0]; //a�� ���� temp(�ӽú���)�� ���
	a[0] = a[1];
	a[1] = temp;
	printf("call_by_addr()=> arr[0]:%d, arr[1:]:%d\n",a[0],a[1]);
}