#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���� 1
	//3���� ���ڸ� �Է¹޾Ƽ� Ȧ¦ �����ϱ�
	//���� = �ݺ����� ����ؼ� �Է¹ޱ�
	/*for (int i = 0; i < 3; i++) {
		printf("���� %d �Է�:", i + 1);
		int n;
		scanf("%d", &n);

		if (n % 2 == 0) {
			printf("%d�� ¦���Դϴ�.\n", n);
		}
		else {
			printf("%d�� Ȧ���Դϴ�.\n", n);
		}
	}*/
	//����2
	//1~100 ������ �����߿��� 5�� ����� ����ϱ�
	//���� = �ݺ��� for,while ����ϱ�

	int i = 1;
	while (i <= 100) {
		if (i % 5 == 0) {
			printf("%d\n", i);
		}
		i++;
	}

}