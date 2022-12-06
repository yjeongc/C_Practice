#include <stdio.h>

typedef struct _date {
	int year;
	int month;
	int day;
} Date;

typedef struct _student {
	int number;
	char name[20];
	Date dob;
	double grade;
} Student;

int main(void)
{
	Student st;

	printf("연도를 입력하세요:");
	scanf("%d", &st.dob.year);

	printf("몇 월인지 입력하세요:");
	scanf("%d", &st.dob.month);
	
	printf("몇 일인지 입력하세요:");
	scanf("%d", &st.dob.day);

	printf("지금은 %d년 %d월 %d일 입니다.\n", st.dob.year, st.dob.month, st.dob.day);

	printf("학번을 입력하세요:");
	scanf("%d", &st.number);

	printf("이름을 입력하세요:");
	scanf("%s", st.name);

	printf("학점을 입력하세요:");
	scanf("%lf", &st.grade);

	printf("학번:%d 이름:%s 학점:%lf", st.number, st.name, st.grade);


	return 0;
}