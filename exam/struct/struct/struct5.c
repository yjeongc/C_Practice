//#include <stdio.h>
//
//struct date {
//	int month;
//	int day;
//	int year;
//};
//
//struct student {
//	int number;
//	char name[20];
//	double grade;
//	struct date* dob;
//};
//
//int main()
//{
//	struct date d={3,20,1980};
//	struct student st={2019,"Kim",4.3};
//
//	st.dob = &d;
//
//	printf("�й�:%d\n", st.number);
//	printf("�̸�:%s\n", st.name);
//	printf("����:%lf\n", st.grade);
//	printf("�������:%d %d %d", st.dob->day,st.dob->month, st.dob->year);
//	
//	return 0;
//}