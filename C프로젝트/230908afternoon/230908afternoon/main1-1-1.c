#include <stdio.h>

void swap(int a1, int b1);

int main()
{
	int a = 10;
	int b = 20;

	printf("a�� ��: %d b�� ��: %d\n", a, b);

	swap(a, b);
}

void swap(int a1, int b1)
{
	int temp = a1;
	a1 = b1;
	b1 = temp;
	printf("a1 b1 : %d %d\n", a1, b1);

}