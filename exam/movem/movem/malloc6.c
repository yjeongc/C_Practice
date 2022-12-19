//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 1000
//
//int main()
//{
//	int stand;
//	int* p=NULL;
//	p =(int*)malloc(SIZE*sizeof(int));
//	if (p == NULL)
//	{
//		printf("동적할당메모리 오류입니다.\n");
//		exit(1);
//	}
//	for (int i = 0; i < SIZE; i++)
//	{
//		p[i] = rand();
//	}
//	stand = p[0];
//	for (int j = 1; j < SIZE; j++)
//	{
//		if (p[j] > stand)
//		{
//			stand = p[j];
//		}
//	}
//	printf("최대값=%d", stand);
//	free(p);
//	return 0;
//}