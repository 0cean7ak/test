#include <stdio.h>

int main()
{
	int tarr[2][3];

	printf("2���� �迭 �Է�\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("tarr[%d][%d] �Է� : ", i, j);
			scanf("%d", &tarr[i][j]);
		}
	}

	printf("\n2���� �迭 ���\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("\t%d", tarr[i][j]);
		}
		printf("\n");
	}

	return 0;
}