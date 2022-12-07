//#include <stdio.h>
//
//typedef struct _point {
//	int x;
//	int y;
//} Point;
//
//int main(void)
//{
//	Point p1 = { 10,20 };
//	Point p2 = { 30,40 };
//
//	p2 = p1;   //대입 가능
//
//	//if (p1 == p2)
//	//{
//	//	printf("p1과 p2가 같습니다.");     //비교 불가, 컴파일 오류!
//	//}
//
//	if ((p1.x == p2.x) && (p1.y == p2.y))
//	{
//		printf("p1과 p2가 같습니다.");
//	}
//
//	return 0;
//}