#include <stdio.h>

void array_copy(int src[3][3], int dst[3][3]);

int main(void)
{
	int src[3][3] = { 
		{100,30,67},
		{89,50,12},
		{19, 60, 90}
	};
	int dst[3][3] = { 0 };
	printf("<원본 2차원 배열>\n");
	
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", src[i][j]);
		}
		printf("\n");
	}

	array_copy(src, dst);
	printf("<복사본 2차원 배열>\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", dst[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void array_copy(int src[3][3], int dst[3][3])
{
	int* p = 0;

	int* q = 0;

	int j,k;

	for (j = 0; j < 3; j++)
	{
		for (k = 0; k < 3; k++)
		{
			p = &src[j][k];
			q = &dst[j][k];
			*q = *p;
		}
	}
}