#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
		break;  //break문은 자신이 속한 반복문만 탈출.
		num++;
	}

	printf("sum:%d\n", sum);  //break문이 없다면 데드코드(dead code)가 됨.
	printf("num:%d\n", num);

}