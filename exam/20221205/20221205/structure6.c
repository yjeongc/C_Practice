//#include <stdio.h>
//
//typedef struct _point {
//	int x;
//	int y;
//} Point;
//
//typedef struct _rect {
//	Point p1;
//	Point p2;
//} Rect;
//
//int main()
//{
//	Rect r;
//	int w, h, area, peri;
//
//	printf("왼쪽 상단의 좌표를 입력하세요: \n");
//	scanf("%d %d", &r.p1.x, &r.p1.y);
//
//	printf("오른쪽 하단의 좌표를 입력하세요: \n");
//	scanf("%d %d", &r.p2.x, &r.p2.y);
//
//	w = r.p2.x - r.p1.x;
//	h = r.p1.y - r.p2.y;
//
//	area = w * h;
//	peri = 2 * w + 2 * h;
//
//	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
//
//	return 0;
//}