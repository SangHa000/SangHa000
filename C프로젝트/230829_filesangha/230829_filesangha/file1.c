#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// C:/ �ٷιؿ��� ������ �������� ���� �Ұ�
	// C:/test �� ������
	// 1. ���� ����
	// w: ������ ������ �����ϰ� ��� (���� ���� ����)
	// a: ������ ������ �����ϰ� �ڿ� �ٿ���
	// r: ������ ������ �о��
	FILE* fp = fopen("data.txt", "wt"); //wt = write text ������
	if (fp == NULL) {
		printf("���Ͽ��� ����!!\n");
		return -1;
	}

	fputc('K', fp); // ���� 1���� ����
	fputc('L', fp);
	fputc('M', fp);
	fclose(fp);
	// 1. ���� ����(����,�б�)
	// 2. ���ų� �аų� �۾�
	// 3. ���� �ݱ�
	return 0;
}