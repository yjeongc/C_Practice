//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 0;
//	int* p;
//	printf("항목의 개수는 몇 개입니까?");
//	scanf("%d", &n);
//	p = (int*)malloc(sizeof(int) * n);
//	if (p == NULL)
//	{
//		printf("동적할당메모리 오류입니다.\n");
//		exit(1);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("항목(정수)을 입력하시오:");
//		scanf("%d", &p[i]);
//	}
//
//	printf("입력된 값은 다음과 같습니다:\n %d %d %d", p[0],p[1],p[2]);
//
//	free(p);
//	return 0;
//}