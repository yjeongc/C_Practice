//#include <stdio.h>
//
//typedef struct _student {
//	int number;
//	char name[20];
//	double grade;
//}Student;
//
//int main()
//{
//	Student s = {24,"Kim",4.3};
//	struct student* p;
//
//	p = &s;
//
//	printf("학번=%d 이름=%s 학점=%lf ", s.number, s.name, s.grade);
//	printf("학번=%d 이름=%s 학점=%lf ", (*p).number, (*p).name, (*p).grade);
//	return 0;
//}