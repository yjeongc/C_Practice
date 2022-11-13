#include <stdio.h>
#define SIZE 5

void print_array(int a[], int n)
{
	int i = 0;
	for (; i < n;i++)
	{
		printf("%d\n", a[i]);
	}
}

int main(void)
{
	int i;
	int data[SIZE] = { 10,20,30,40,50 };

	print_array(data, SIZE);
	return 0;
}