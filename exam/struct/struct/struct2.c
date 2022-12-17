//#include <stdio.h>
//
//struct point {
//	int x;
//	int y;
//};
//
//int main()
//{
//	int space, lon;
//
//	struct point list[2];
//
//	printf("왼쪽 상단의 좌표를 입력하시오:");
//	scanf("%d %d", &list[0].x, &list[0].y);
//	printf("오른쪽 상단의 좌표를 입력하시오:");
//	scanf("%d %d", &list[1].x, &list[1].y);
//
//	space = (list[1].x - list[0].x) * (list[0].y - list[1].y);
//	lon = (list[0].y - list[1].y) * 2 + (list[1].x - list[0].x) * 2;
//
//	printf("면적은 %d이고 둘레는 %d입니다.", space, lon);
//
//	return 0;
//}