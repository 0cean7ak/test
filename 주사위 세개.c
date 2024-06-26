#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int a, b, c, max;

	scanf("%d %d %d", &a, &b, &c);


	if (a == b && b == c) printf("%d", a * 1000 + 10000);

	else if (a == b || b == c) printf("%d", b * 100 + 1000);
	else if (a == c) printf("%d", c * 100 + 1000);
	else {
		max = a;
		if (max < b) max = b;
		if (max < c) max = c;
		printf("%d", max * 100);
	}

	return 0;
}