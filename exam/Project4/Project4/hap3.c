#include <stdio.h>

//���� ����
int a = 0, b = 0, c = 0;
//int* pa = &a;
//int* pb = &b;


//���� �ڵ�
int main(void)
 {
	printf("�� ���� �Է��ϼ���.");
	scanf("%d %d", &a, &b);

	if (a > b) {
		c = (a + b) * (a - b + 1) / 2;
		printf("�� ���� ���̿� �ִ� ��: %d", c);
	}

	else if (a < b) {
		c = (a + b) * (b - a + 1) / 2;
		printf("�� ���� ���̿� �ִ� ��: %d", c);
	}
	return 0;
}