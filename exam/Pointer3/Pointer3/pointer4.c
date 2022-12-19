//#include <stdio.h>
//double get_total_avg(int m[][3]);
//
//int main()
//{
//	double result;
//	int m[3][3] = {1,2,3,4,5,6,7,8,9};
//	result = get_total_avg(m);
//	printf("%lf", result);
//	return 0;
//}
//
//double get_total_avg(int m[][3])
//{
//	double sum = 0.0;
//	int* p; int* endp;
//	p = &m[0][0];
//	endp = &m[2][2];
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 3; j++)
//	//	{
//	//		sum += m[i][j];
//	//	}
//	//}
//	while (p <= endp)
//	{
//		sum += *p++;
//	}
//	
//	sum /= 9.0;
//	return sum;
//}
