#include <stdio.h>

//���� ����
#define TAX_YEAR 0.2

//���� �ڵ�
int main(void) {
	const int MONTH = 12;
	int m_salary, y_salary;
	
	printf("������ �Է��ϼ���.");
	scanf_s("%d", & m_salary);
	y_salary = m_salary * MONTH;
	printf("������ %d�Դϴ�.", y_salary);
	printf("������ %f�Դϴ�.", y_salary * TAX_YEAR);
	return 0;
}