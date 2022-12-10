//#include <stdio.h>
//
//double f(double k);
//double formula(double (*pf)(double), int n); 
//
//int main()
//{
//	int n; double sum;
//	printf("정수 n를 입력하시오: ");
//	scanf("%d", &n);
//	sum = formula(f, n);
//	printf("%lf",sum);
//	return 0;
//}
//
//double f(double k)
//{
//	return 1.0 / k;
//}
//
//double formula(double (*pf)(double), int n)
//{
//	double result =0.0;
//	for (int i = 1; i < n; i++)
//	{
//		result += pf(i) * pf(i) + pf(i) + 1;
//	}
//	return result;
//}