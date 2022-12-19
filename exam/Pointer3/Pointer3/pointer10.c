#include <stdio.h>

void set_max_ptr(int m[], int size, int** pmax);

int main()
{
	int m[6] = { 5,6,1,3,7,9 };
	int* pmax=m;

	set_max_ptr(m, sizeof(m) / sizeof(int), &pmax);

	printf("가장 큰 값은 %d", *pmax);
	return 0;
}

void set_max_ptr(int m[], int size, int** pmax)
{
	int max = m[0];
	for (int i = 1; i < size; i++)
	{
		if (m[i] > max)
		{
			max = m[i];
			(*pmax) = &max;
		}
	}

}
