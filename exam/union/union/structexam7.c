//#include <stdio.h>
//
//typedef struct vector {
//	int x;
//	int y;
//}POINT;
//
//POINT translate(POINT a, POINT b);
//
//int main()
//{
//	POINT p, delta;
//	POINT sum;
//
//	printf("�� �� P�� ��ǥ�� �Է��ϼ���(x y):");
//	scanf("%d %d", &p.x, &p.y);
//	printf("�̵� ��ǥ�� �Է��ϼ���(x y):");
//	scanf("%d %d", &delta.x, &delta.y);
//
//	sum = translate(p, delta);
//
//	printf("���ο� �� P�� ��ǥ�� (%d, %d)�Դϴ�.", sum.x, sum.y);
//	return 0;
//}
//
//POINT translate(POINT p, POINT delta)
//{
//	POINT result;
//	result.x = p.x + delta.x;
//	result.y = p.y + delta.y;
//
//	return result;
//
//}