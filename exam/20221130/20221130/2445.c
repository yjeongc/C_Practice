#include <stdio.h>

int main(void)
{
	int n=0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}

		for (int k = 0; k < 2 * n - (2 * i + 2); k++)
		{
			printf(" ");
		}

		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int l = 0; l < n-1; l++)
	{
		for (int m = 0; m < n - (l + 1); m++)
		{
			printf("*");
		}

		for (int n = 0; n < 2 * l + 2; n++)
		{
			printf(" ");
		}

		for (int m = 0; m < n - (l + 1); m++)
		{
			printf("*");
		}

		printf("\n");
	}
	
	return 0;
}