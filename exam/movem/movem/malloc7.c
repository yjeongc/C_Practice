//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct movie {
//	char title[100];
//	double rating;
//}MOIVE;
//
//int main()
//{
//	MOIVE* movies;
//	int n = 0;
//	printf("몇 편이나 저장하시겠습니까? ");
//	scanf("%d", &n);
//	getchar();
//	movies = (MOIVE*)malloc(sizeof(MOIVE) * n);
//
//	if (movies == NULL)
//	{
//		printf("동적할당 메모리 오류입니다.\n");
//		exit(1);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("영화 제목: ");
//		gets(movies[i].title, 100);
//		printf("영화 평점: ");
//		scanf("%lf", &(movies[i].rating));
//		getchar();
//	}
//
//	printf("============================\n");
//	printf("제목\t평점\n");
//
//	for (int j = 0; j < n; j++)
//	{
//		printf("%s \t %lf\n", movies[j].title, movies[j].rating);
//	}
//	printf("============================");
//
//	free(movies);
//	return 0;
//}