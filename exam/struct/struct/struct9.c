//#include <stdio.h>
//
//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//
//struct student list[] = {
//	{20210001, "ȫ�浿", 4.2},
//	{20210002, "��ö��", 3.2},
//	{20210003, "�迵��", 3.9}
//};
//
//int main()
//{
//	int size = sizeof(list) / sizeof(list[0]);
//	struct student stand;
//	stand = list[0];
//
//	for (int i = 1; i < size; i++)
//	{
//		if (list[i].grade > stand.grade)
//		{
//			stand = list[i];
//		}
//	}
//
//	printf("<������ ���� ���� �л�>\n");
//	printf("�̸�: %s\n", stand.name);
//	printf("�й�: %d\n", stand.number);
//	printf("����: %lf\n", stand.grade);
//	return 0;
//}