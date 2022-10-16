#include <stdio.h>

//변수 선언
#define TAX_YEAR 0.2

//메인 코드
int main(void) {
	const int MONTH = 12;
	int m_salary, y_salary;
	
	printf("월급을 입력하세요.");
	scanf_s("%d", & m_salary);
	y_salary = m_salary * MONTH;
	printf("연봉은 %d입니다.", y_salary);
	printf("세금은 %f입니다.", y_salary * TAX_YEAR);
	return 0;
}