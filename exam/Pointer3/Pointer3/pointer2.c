//#include <stdio.h>
//
//double get_row_avg(int m[][3], int r);
//
//int main()
//{
//	int m[3][3] = {1,2,3,4,5,6,7,8,9};
//	
//	int r = 2; 
//	double result = 0.0;
//	
//	result= get_row_avg(m, r);
//	printf("%lf",result);
//	return 0;
//}
//
//double get_row_avg(int m[][3], int r)
//{
//	int* p, * endp;
//	double sum = 0.0;
//
//	p = &m[r][0];
//	endp = &m[r][2];
//
//	while (p <= endp)
//	{
//		sum += * p++;
//	}
//	sum /= 3;
//	return sum;
//
//}
