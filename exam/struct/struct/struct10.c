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
//	printf("�л��� ������ �Է��ϼ���.\n");
//
//	for (int j = 0; j < SIZE; j++) {
//		printf("[�л� %d]\n", j + 1);
//		printf("�̸��� �Է��ϼ���:");
//		scanf("%s", list[j].name);
//		printf("�й��� �Է��ϼ���:");
//		scanf("%d", &list[j].number);
//		printf("������ �Է��ϼ���:");
//		scanf("%lf", &list[j].grade);
//	}
//
//	best_st = get_max_stu(list);
//	printf("<������ ���� ���� �л�>\n");
//	printf("�̸�: %s\n", best_st.name);
//	printf("�й�: %d\n", best_st.number);
//	printf("����: %lf\n", best_st.grade);
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
