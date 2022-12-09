//#include <stdio.h>
//
//point translate(point a, point b);
//
//typedef struct vector {
//	int x;
//	int y;
//}point;
//
//int main()
//{
//	point p, delta;
//	point trans;
//	
//	printf("한 점 p의 좌표를 입력하세요(x y):");
//	scanf("%d %d", &p.x, &p.y);
//	printf("이동 좌표를 입력하세요(x y):");
//	scanf("%d %d", &delta.x, &delta.y);
//
//	trans = translate(p, delta);
//	printf("새로운 점 p의 좌표는 (%d, %d)입니다.", trans.x, trans.y);
//
//	return 0;
//}
//
//struct vector translate(struct vector a, struct vector b) 
//{
//	point sum;
//	sum.x = a.x + b.x;
//	sum.y = a.y + b.y;
//
//	return sum;
//}