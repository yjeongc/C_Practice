//#include <stdio.h>
//#define SIZE 3
//
//typedef struct student {
//	char name[20];
//	int number;
//	double grade;
//}STUDENT;
//
//STUDENT get_max_stu(STUDENT a, STUDENT b, STUDENT c);
//
//int main()
//{
//	STUDENT list[SIZE];
//	STUDENT best_stu;
//	printf("�л��� ������ �Է��ϼ���.\n");
//	for (int i = 0; i < SIZE; i++)
//	{
//
//		printf("[�л� %d]\n", i + 1);
//		printf("�̸��� �Է��ϼ���:");
//		scanf("%s", list[i].name);
//		printf("�й��� �Է��ϼ���:");
//		scanf("%d", &list[i].number);
//		printf("������ �Է��ϼ���:");
//		scanf("%lf", &list[i].grade);
//
//	}
//	best_stu = get_max_stu(list[0], list[1], list[2]);
//
//	printf("<������ ���� ���� �л�>\n");
//	printf("�̸�: %s\n", best_stu.name);
//	printf("�й�: %d\n", best_stu.number);
//	printf("����: %lf\n", best_stu.grade);
//
//	return 0;
//}
//
//STUDENT get_max_stu(STUDENT a, STUDENT b, STUDENT c)
//{
//	STUDENT standard = a;
//	if (b.grade > standard.grade)
//	{
//		standard = b;
//		if (c.grade > standard.grade)
//		{
//			standard = c;
//		}
//
//	}
//	else if (c.grade > standard.grade)
//	{
//		standard = c;
//		if (b.grade > standard.grade)
//		{
//			standard = b;
//		}
//
//	}
//
//	return standard;
//}