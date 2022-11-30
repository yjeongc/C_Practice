/*#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void array_copy(int src[3][3], int dst[3][3]);

void array_print(int a[3][3]);

int score[3][3] = {{100,30,67},
	{89,50,12},
	{19, 60, 90} 
};
int tmp[3][3]={ 0 };

int main(void)

{
	printf("<원본 2차원 배열>\n");
	printf(score);

	array_copy(score, tmp);

	array_print(tmp);
	
	return 0;
}

void array_copy(int src[3][3], int dst[3][3])

{

	int* p = &src[0][0];

	int* end = &src[3 - 1][3 - 1];

	int* q = &dst[0][0];

	while (p <= end) {

		*q++ = *p++;

	}

}
void array_print(int a[3][3])

{

	int r, c;

	for (r = 0; r < 3; r++) {

		for (c = 0; c < 3; c++)

			printf("%d ", a[r][c]);

		printf("\n");

	}

}*/

