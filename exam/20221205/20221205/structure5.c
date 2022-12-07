//#include <stdio.h>
//#include <math.h>
//#define SIZE 2
//
//typedef struct _xy {
//	int x;
//	int y;
//}XY;
//
//int main()
//{
//	int xdiff = 0, ydiff = 0;
//	int area = 0, round = 0;
//
//	XY point[SIZE];
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("좌표를 입력하세요(x y): ");
//		scanf("%d %d", &point[i].x, &point[i].y);
//	}
//
//	xdiff = abs(point[1].x - point[0].x);
//	ydiff = abs(point[0].y - point[1].y);
//
//	area = xdiff * ydiff;
//	round = 2 * xdiff + 2*ydiff;
//
//	printf("면적은 %d이고 둘레는 %d입니다.", area, round);
//
//	return 0;
//}