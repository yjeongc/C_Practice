#include <stdio.h>
#define SIZE 5

double get_array(int a[])
{
	int i = 0;
	double sum = 0.0;

	for (; i < SIZE; i++)
	{
		sum += a[i];
	}
}

int main(void)
{
	int i;
	int data[SIZE] = { 10,20,30,40,50 };
	double result;

	result=get_array(data)/SIZE;

	printf("�迭 ���ҵ��� ��� = %f\n", result);

}