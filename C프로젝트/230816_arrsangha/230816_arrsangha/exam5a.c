#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1���� �迭 : dmz�� ���ڰ� �Ʒ�ó�� �ż��Ǿ���.
	// * B * B *
	// 1 1 2 1 1

	char dmz[] = { '*','B','*','B','*' };
	int arr[5] = { 0 };

	if (dmz[0] == '*') {
		printf("��������\n");
	}
	if (dmz[1] == 'B') {
		printf("����\n");
	}

	const int start = 0;
	const int end = 4;
	for (int i = 0; i < 5; i++) {
		if (dmz[i] == 'B')arr[i] += 1; //arr[i]++ ����.
		if (dmz[i - 1] == 'B' && i != 0)arr[i] += 1;
		if (dmz[i + 1] == 'B' && i != 4)arr[i] += 1;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}



}