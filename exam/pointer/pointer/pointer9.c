//#include <stdio.h>
//
//double f(double k);
//double formula(double (*pf)(double), int n);
//
//int main()
//{
//	int n, main_result;
//
//	printf("정수 n을 입력하시오:");
//	scanf("%d", &n);
//	main_result = formula(f, n);
//	printf("%lf", main_result);
//	return 0;
//}
//
//double f(double k)
//{
//	return 1 / k;
//}
//
//double formula(double (*pf)(double), int n)
//{
//	double result;
//	for (int i = 1; i < n+1; i++)
//	{
//		result += pf(i)* pf(i) + pf(i) + 1;
//	}
//
//	return result;
//}
//
