//#include <stdio.h>
//#define SIZE 3
//
//typedef struct student {
//	char name[20];
//	int number;
//	double grade;
//}STUDENT;
//
//STUDENT get_max_stu(STUDENT list[]);
//
//int main()
//{
//	STUDENT list[SIZE];
//	STUDENT best_stu;
//
//	printf("학생의 정보를 입력하세요.\n");
//	for(int i = 0; i < SIZE; i++)
//	{
//		printf("[학생 %d]\n", i + 1);
//		printf("이름을 입력하세요:");
//		scanf("%s", list[i].name);
//		printf("학번을 입력하세요:");
//		scanf("%d", &list[i].number);
//		printf("평점을 입력하세요:");
//		scanf("%lf", &list[i].grade);
//	}
//
//	best_stu = get_max_stu(list);
//
//	printf("<평점이 가장 높은 학생>\n");
//	printf("이름: %s\n", best_stu.name);
//	printf("학번: %d\n", best_stu.number);
//	printf("평점: %lf\n", best_stu.grade);
//
//	return 0;
//}
//
//STUDENT get_max_stu(STUDENT list[])
//{
//	STUDENT standard;
//	standard = list[0];
//	for (int j = 0; j < SIZE; j++)
//	{
//		if (list[j].grade > standard.grade)
//		{
//			standard = list[j];
//		}
//	}
//
//	return standard;
//}