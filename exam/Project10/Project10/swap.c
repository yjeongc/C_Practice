#include <stdio.h>

//�Լ�, ���� ����
void swap(int x, int y);


int main(void) {
	int a, b;
	printf("�� ���� �Է��ϼ���.");
	scanf_s("%d %d", &a, &b);
	printf("a = %d, b = %d\n", a,b);
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int x, int y) {
	int change = x;
	printf("x = %d, y =%d\n", x, y);
	x = y;
	y = change;
	printf("x = %d, y =%d\n", x, y);
}