#include <stdio.h>
#define MONTH 12

//변수 선언
int m_money, y_money;

//메인 코드
int main(void) {
	const float TAX = 0.2;
	
	printf("월급을 입력하시오");
	scanf("%d", &m_money);

	y_money = MONTH * m_money;
	printf("연봉은 %d입니다.", y_money);
	printf("세금은 %f입니다.", y_money* TAX);


	return 0;
}