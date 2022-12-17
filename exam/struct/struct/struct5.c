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
//	printf("학번:%d\n", st.number);
//	printf("이름:%s\n", st.name);
//	printf("학점:%lf\n", st.grade);
//	printf("생년월일:%d %d %d", st.dob->day,st.dob->month, st.dob->year);
//	
//	return 0;
//}