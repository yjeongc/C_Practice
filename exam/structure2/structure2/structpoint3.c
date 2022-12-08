//#include <stdio.h>
//
//typedef struct _date {
//	int year;
//	int month;
//	int day;
//}Date;
//
//typedef struct _student {
//	int number;
//	char name[10];
//	double grade;
//
//	struct _date* dob;
//}Student;
//
//
//int main()
//{
//	Date d = { 1980,3,20 };
//	Student s = { 2000000, "Kim", 4.3 };
//
//	s.dob = &d;
//
//
//	printf("학번: %d\n", s.number);
//	printf("이름: %s\n", s.name);
//	printf("학점: %lf\n", s.grade);
//	printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);
//
//		return 0;
//}