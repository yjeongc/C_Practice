#include <stdio.h>
#define MONTH 12

//���� ����
int m_money, y_money;

//���� �ڵ�
int main(void) {
	const float TAX = 0.2;
	
	printf("������ �Է��Ͻÿ�");
	scanf("%d", &m_money);

	y_money = MONTH * m_money;
	printf("������ %d�Դϴ�.", y_money);
	printf("������ %f�Դϴ�.", y_money* TAX);


	return 0;
}