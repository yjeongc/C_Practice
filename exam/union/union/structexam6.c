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
//	struct student standard = list[0];
//	int size = sizeof(list) / sizeof(list[0]);
//
//	for (int i = 1; i < size; i++)
//	{
//		if (list[i].grade > list[0].grade)
//		{
//			standard = list[i];
//		}
//	}
//
//	printf("<������ ���� ���� �л�>\n");
//	printf("�̸�: %s\n", standard.name);
//	printf("�й�: %d\n", standard.number);
//	printf("����: %lf\n", standard.grade);
//
//	return 0;
//}