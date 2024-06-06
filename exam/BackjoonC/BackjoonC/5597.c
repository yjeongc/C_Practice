//#include <stdio.h>
//#define SIZE 30
//
//int main()
//{
//	int stu_number_sample[SIZE];
//	int stu_number[SIZE - 2];
//	int compar[2];
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		stu_number_sample[i] = i+1;
//	}
//	for (int j = 0; j < SIZE - 2; j++)
//	{
//		scanf("%d", &stu_number[j]);
//	}
//	for (int k = 0; k < SIZE - 2; k++)
//	{
//		for (int l = 0; l < SIZE; l++)
//		{
//			if (stu_number[k] == stu_number_sample[l])
//			{
//				stu_number_sample[l] = 0;
//			}
//		}
//	}
//
//	int a = 0;
//	for (int m = 0; m < SIZE; m++)
//	{
//		if (stu_number_sample[m] != 0)
//		{
//			compar[a] = stu_number_sample[m];
//			a += 1;
//		}
//
//	}
//
//	if (compar[0] > compar[1])
//	{
//		printf("%d\n%d", compar[1], compar[0]);
//	}
//
//	else
//	{
//		printf("%d\n%d", compar[0], compar[1]);
//	}
//
//	return 0;
//}