#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total = 0;
	int i, num;
	printf("0∫Œ≈Õ num±Ó¡ˆ¿« µ°º¿, num¿∫?");
	scanf("%d", &num);

	for (i = 1; i <= num + 1; i++) 
	{ total += i; }
	printf("0∫Œ≈Õ %d±Ó¡ˆ µ°º¿∞·∞˙: %d\n", num, total);
}