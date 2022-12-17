//#include <stdio.h>
//#define SIZE 3
//
//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//
//struct student list[SIZE];
//struct student get_max_stu(struct student list[]);
//
//int main()
//{
//	struct student best_st;
//	printf("학생의 정보를 입력하세요.\n");
//
//	for (int j = 0; j < SIZE; j++) {
//		printf("[학생 %d]\n", j + 1);
//		printf("이름을 입력하세요:");
//		scanf("%s", list[j].name);
//		printf("학번을 입력하세요:");
//		scanf("%d", &list[j].number);
//		printf("평점을 입력하세요:");
//		scanf("%lf", &list[j].grade);
//	}
//
//	best_st = get_max_stu(list);
//	printf("<평점이 가장 높은 학생>\n");
//	printf("이름: %s\n", best_st.name);
//	printf("학번: %d\n", best_st.number);
//	printf("평점: %lf\n", best_st.grade);
//
//	return 0;
//}
//
//struct student get_max_stu(struct student list[])
//{
//	int size = sizeof(list) / sizeof(list[0]);
//	struct student stand, result;
//	stand = list[0];
//s
//	for (int i = 1; i < size; i++)
//	{
//		if (list[i].grade > stand.grade)
//		{
//			stand = list[i];
//		}
//	}
//	result = stand;
//
//	return result;
//
//}
