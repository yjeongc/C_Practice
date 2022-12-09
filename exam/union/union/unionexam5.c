//#include <stdio.h>
//
//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//
//int main()
//{
//	struct student list[] = {
//		{20210001, "홍길동", 4.2},
//		{20210002, "김철수", 3.2},
//		{20210003, "김영희", 3.9}
//	};
//
//	if (list[0].grade > list[1].grade)
//	{
//		if (list[0].grade > list[2].grade)
//		{
//			printf("<평점이 가장 높은 학생>\n");
//			printf("이름: %s\n학번: %d\n평점:%lf", list[0].name, list[0].number, list[0].grade);
//		}
//	}
//
//	else if (list[1].grade > list[0].grade)
//	{
//		if (list[1].grade > list[2].grade)
//		{
//			printf("<평점이 가장 높은 학생>\n");
//			printf("이름: %s\n학번: %d\n평점:%lf", list[1].name, list[1].number, list[1].grade);
//		}
//	}
//
//	else if (list[3].grade > list[0].grade)
//	{
//		if (list[3].grade > list[1].grade)
//		{
//			printf("<평점이 가장 높은 학생>\n");
//			printf("이름: %s\n학번: %d\n평점:%lf", list[3].name, list[3].number, list[3].grade);
//		}
//	}
//
//	return 0;
//}
