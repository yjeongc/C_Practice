#include <stdio.h>
#define SIZE 3
struct student {
	int number;
	char name[20];
	double grade;
};
struct student list[SIZE];
struct student get_max_stu(struct student list[]);
int main(void)
{
	struct student best_stu;
	int i;
	printf("학생의 정보를 입력하세요. (3명)₩n");
	for (i = 0; i < SIZE; i++)
	{
		printf("[학생 %d]₩n", i + 1);
		printf("이름을 입력하세요: ");
		scanf("%s", list[i].name);
		printf("학번을 입력하세요: ");
		scanf("%d", &(list[i].number));
		printf("평점을 입력하세요: ");
		scanf("%lf", &(list[i].grade));
	}
	best_stu = get_max_stu(list);
	printf("₩n");
	printf("<평점이 가장 높은 학생>₩n");
	printf("이름: %s₩n", best_stu.name);
	printf("학번: %d₩n", best_stu.number);
	printf("평점: %f₩n", best_stu.grade);
	return 0;
}

struct student get_max_stu(struct student list[])
{
	struct student super_stu;
	int i;
	super_stu = list[0];
	for (i = 1; i < SIZE; i++)
	{
		if (list[i].grade > super_stu.grade)
			super_stu = list[i];
	}
	return super_stu;
}