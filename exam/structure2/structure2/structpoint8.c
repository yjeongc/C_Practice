//#include <stdio.h>
//
//struct xy {
//	double x;
//	double y;
//};
//
//struct xy get_vector_sum(struct xy a, struct xy b);
//
//
//int main()
//{
//	struct xy XY1, XY2;
//	struct xy sum;
//
//	printf("첫 번째 벡터를 입력하세요(x y):");
//	scanf("%lf %lf", &XY1.x, &XY1.y);
//
//	printf("두 번째 벡터를 입력하세요(x y):");
//	scanf("%lf %lf", &XY2.x, &XY2.y);
//
//	sum = get_vector_sum(XY1, XY2);
//
//	printf("벡터의 합은 (%lf, %lf)입니다", sum.x, sum.y);
//	return 0;
//}
//
//struct xy get_vector_sum(struct xy XY1, struct xy XY2)
//{
//	struct xy result;
//	result.x = XY1.x + XY2.x;
//	result.y = XY1.y + XY2.y;
//
//	return result;
//}