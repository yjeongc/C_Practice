//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0, m;
//	
//	scanf("%d", &n);
//	
//	int k = n-1;
//
//	for (m = 1; m < n; m++)
//	{
//		for (int j = 0; j < n - m ; j++)
//		{
//			printf(" ");
//		}
//
//		for (int i = 1; i < 2*m; i++)
//				printf("*");
//
//		printf("\n");
//
//	}
//
//
//	for (int i = (2 * n - 1); i > 0; i-=2)
//	{
//		if (i == 2 * n - 1)
//		{
//			for (m = i; m > 0; m--)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		else
//		{
//			for (k = n - i / 2; k > 1; k--)
//			{
//				printf(" ");
//			}
//		
//			for (m = i; m > 0; m--)
//			{
//				printf("*");
//
//			}
//
//			printf("\n");
//		}
//	
//	}
//
//	
//	return 0;
//}
//
