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
//	printf("���� ����� ��ǥ�� �Է��Ͻÿ�:");
//	scanf("%d %d", &list[0].x, &list[0].y);
//	printf("������ ����� ��ǥ�� �Է��Ͻÿ�:");
//	scanf("%d %d", &list[1].x, &list[1].y);
//
//	space = (list[1].x - list[0].x) * (list[0].y - list[1].y);
//	lon = (list[0].y - list[1].y) * 2 + (list[1].x - list[0].x) * 2;
//
//	printf("������ %d�̰� �ѷ��� %d�Դϴ�.", space, lon);
//
//	return 0;
//}