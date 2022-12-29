//#include <stdio.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//int main()
//{
//	int space, dist;
//	struct point p1, p2;
//	printf("왼쪽 상단의 좌표를 입력하시오:");
//	scanf("%d %d", &p1.x, &p1.y);
//	printf("오른쪽 하단의 좌표를 입력하시오:");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	dist = (p2.x - p1.x) * 2 + (p1.y - p2.y) * 2;
//	space = (p2.x - p1.x) * (p1.y - p2.y);
//	printf("면적은 %d이고 둘레는 %d입니다.", space, dist);
//
//	return 0;
//}