#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�������� ������� ������ 2���� �迭 ����
	//������´� ����6�� ������ó�� �Ұ�
	//�迭���� �о�ͼ� ���

	int a[9][8] = { 0 };
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 9; j++) {
			a[i-1][j-2] = j * i; //i��j�� ������ 0�̾ƴϹǷ� �����ؾ���.
			printf("%d\t",a[i-1][j-2]);
		}
		printf("\n");
	}


}