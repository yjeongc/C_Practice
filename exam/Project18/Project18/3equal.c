//#include <stdio.h>
//
//struct point
//{
//	int x;
//	int y;
//};
//
//int equal(struct point *p1, struct point *p2)
//{
//	if ((p1->x == p2->x) && (p1->y == p2->y))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main(void)
//{
//	struct point p1, p2;
//	printf("2차원 공간의 한 점(p1)의 좌표를 입력하시오:");
//	scanf("%d %d", &p1.x, &p1.y);
//	printf("2차원 공간의 한 점(p2)의 좌표를 입력하시오:");
//	scanf("%d %d", &p2.x, &p2.y);
//	printf("%d", equal(&p1, &p2));
//	return 0;
//}