#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int n,m,k;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &m, &k);
		printf("Case #%d: %d\n", i+1, m + k);
	}

	return 0;
}