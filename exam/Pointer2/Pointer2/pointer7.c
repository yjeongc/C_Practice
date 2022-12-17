//#include <stdio.h>
//
//double f(double k);
//double formula(double(*pf)(double), int n);
//
//int main()
//{
//	double result=0.0;
//	int n = 0;
//	printf("정수 n을 입력하시오:");
//	scanf("%d", &n);
//	result= formula(f, n);
//	printf("%lf", result);
//
//	return 0;
//}
//
//double f(double k) 
//{
//	return 1.0 / k;
//}
//double formula(double(*pf)(double), int n) 
//{
//	double sum=0.0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum+=pf(i)* pf(i) + pf(i) + 1;
//	}
//	return sum;
//}
