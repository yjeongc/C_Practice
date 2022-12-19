//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pa;
//	pa = (int*)malloc(sizeof(int) * 2);
//	printf("정수 2개를 저장할 공간이 필요\n");
//
//	pa[0] = 10;
//	pa[1] = 20;
//	printf("%d %d\n", pa[0], pa[1]);
//	printf("정수 3개를 저장할 공간으로 확장\n");
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