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

	printf("������ �Է��ϼ���:");
	scanf("%d", &st.dob.year);

	printf("�� ������ �Է��ϼ���:");
	scanf("%d", &st.dob.month);
	
	printf("�� ������ �Է��ϼ���:");
	scanf("%d", &st.dob.day);

	printf("������ %d�� %d�� %d�� �Դϴ�.\n", st.dob.year, st.dob.month, st.dob.day);

	printf("�й��� �Է��ϼ���:");
	scanf("%d", &st.number);

	printf("�̸��� �Է��ϼ���:");
	scanf("%s", st.name);

	printf("������ �Է��ϼ���:");
	scanf("%lf", &st.grade);

	printf("�й�:%d �̸�:%s ����:%lf", st.number, st.name, st.grade);


	return 0;
}