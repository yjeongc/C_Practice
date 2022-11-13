#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10	
void array_fill(int* A, int size);

int main(void)
{
	int rand[SIZE] = { 0 };
	int i = 1;

	array_fill(rand, SIZE);
	for (i = 1; i < SIZE; i++)
	{
		printf("%d", rand[i]);
		if (i % 10 == 0)
			printf("\n");
	}
}

void array_fill(int*A, int size)
{
	srand((unsigned)(time)NULL);
	int i;
	for (i = 0; i < size; i++)
	{
		A[i] = rand() % 500 + 1;
	}

}

