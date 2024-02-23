#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cur, is;
	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
			printf("%d*%d=%d\n", cur, is, cur * is);
		printf("\n");
	}

}