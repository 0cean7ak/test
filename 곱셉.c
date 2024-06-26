#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", a * ((b % 100) % 10));
	printf("%d\n", a * ((((b % 100) - ((b % 100) % 10)))/10));
	printf("%d\n", a * (b / 100));
	printf("%d\n", a * b);

	return 0;
}