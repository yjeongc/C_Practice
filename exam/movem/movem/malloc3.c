//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pa;
//	pa = (int*)malloc(sizeof(int) * 2);
//	printf("���� 2���� ������ ������ �ʿ�\n");
//
//	pa[0] = 10;
//	pa[1] = 20;
//	printf("%d %d\n", pa[0], pa[1]);
//	printf("���� 3���� ������ �������� Ȯ��\n");
//	int* list;
//	list = (int*)realloc(pa,sizeof(int) * 3);
//	list[2] = 30;
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", list[i]);
//	}
//
//	free(list);
//	return 0;
//}