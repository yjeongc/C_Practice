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
//	printf("ù ��° ���͸� �Է��ϼ���(x y):");
//	scanf("%lf %lf", &XY1.x, &XY1.y);
//
//	printf("�� ��° ���͸� �Է��ϼ���(x y):");
//	scanf("%lf %lf", &XY2.x, &XY2.y);
//
//	sum = get_vector_sum(XY1, XY2);
//
//	printf("������ ���� (%lf, %lf)�Դϴ�", sum.x, sum.y);
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