//#include <stdio.h>
//#include <math.h>
//#define EPSILON 0.0001
//
//double func(double x);
//
//void bisection(double a, double b);
//
//int main()
//{
//	double a = -200, b = 200;
//	bisection(a, b);
//	return 0;
//}
//
//double func(double x)
//{
//	return x * x * x - x * x + 2;
//}
//
//void bisection(double a, double b)
//{
//	double c = 0.0;
//	if (func(a) * func(b) >= 0)
//	{
//		printf("범위가 잘못되었습니다.");
//		return;
//	}
//	while ((b - a) >= EPSILON)
//	{
//		c = (a + b) / 2;
//		if (func(c) * func(a) < 0)
//		{
//			b = c;
//		}
//		else
//		{
//			a = c;
//		}
//	}
//	printf("최종 근: %lf\n", c);
//}
