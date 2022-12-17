//#include <stdio.h>
//
//typedef struct vector {
//	double x;
//	double y;
//}VECTOR;
//
//VECTOR get_vector_sum(VECTOR p1, VECTOR p2);
//
//
//int main()
//{
//	VECTOR p1,p2,sum;
//
//	printf("첫 번째 벡터를 입력하세요(x y):");
//	scanf("%lf %lf", &p1.x, &p1.y);
//
//	printf("두 번째 벡터를 입력하세요(x y):");
//	scanf("%lf %lf", &p2.x, &p2.y);
//
//	sum = get_vector_sum(p1, p2);
//	printf("벡터의 합은 (%lf, %lf)입니다.", sum.x, sum.y);
//	return 0;
//}
//
//VECTOR get_vector_sum(VECTOR p1, VECTOR p2)
//{
//	VECTOR result;
//	result.x = p1.x + p2.x;
//	result.y = p1.y + p2.y;
//	return result;
//}