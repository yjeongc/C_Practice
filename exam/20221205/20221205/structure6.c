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
//	printf("���� ����� ��ǥ�� �Է��ϼ���: \n");
//	scanf("%d %d", &r.p1.x, &r.p1.y);
//
//	printf("������ �ϴ��� ��ǥ�� �Է��ϼ���: \n");
//	scanf("%d %d", &r.p2.x, &r.p2.y);
//
//	w = r.p2.x - r.p1.x;
//	h = r.p1.y - r.p2.y;
//
//	area = w * h;
//	peri = 2 * w + 2 * h;
//
//	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);
//
//	return 0;
//}