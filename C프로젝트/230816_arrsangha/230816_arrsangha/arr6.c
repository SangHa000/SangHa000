#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 2x3  (2by3)
	int arr1[2][3] = {
		{1,2,3}, //1��
		{4,5,6}  //2��
	};

	int num = 1;
	int arr2[12][12] = { 0 }; //3��4�� (3x4) �迭
	//�ٱ� ��
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++)//���� �� 
		{// arr2�� 1~6���� �ֱ�
			arr2[i][j] = num++;
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
}