#include <stdio.h>

int main()
{
	int a = 3, b = 5;
	printf("a=%d, b=%d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("a=%d, b=%d\n", a, b);

	return 0;
}