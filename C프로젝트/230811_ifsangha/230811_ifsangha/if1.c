#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);

	//1��. �Է¹��� num���� ��
	if (num < 0) {
		printf("�Է°��� 0���� �۴�.\n");
	}
	//2��. �Է¹��� num���� ��
	if (num > 0) {
		printf("�Է°��� 0���� ũ��.\n");
	}
	//3��. �Է¹��� num���� ��
	if (num == 0) {
		printf("�Է°��� 0�̴�.\n");
	}
	else if (num > 0) {
		printf("�Է°��� 0���� ũ��.\n");
	}
	else{
		printf("�Է°��� 0�̴�.\n");
	}
	// if�� ������ 1���� ���
	// else if �� n�� ��� ����
	// else�� ����ϴ� ��쿡�� �����̾���.(�� : (num==0)��)
	if (num < 0) {
		printf("�Է°��� 0�����۴�\n");
	}
	else if (num == 0) {
		printf("�Է°��� 0�̴�\n");
	}

}