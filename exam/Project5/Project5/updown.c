#include <stdio.h>

//���� ����
int x = 0, y = 0;
int a, b;

//���� �ڵ�
int main(void) {
	printf("x�� y�� ���� �Է��ϼ���.");
	scanf("%d %d", &x, &y);

	printf("x=%d\n", x);
	a = ++x;
	printf("++x�� ��=%d\n", a);
	printf("x=%d\n", x);

	printf("y=%d\n", y);
	b = y++;
	printf("y++�� ��=%d\n", b);
	printf("y=%d\n", y);

	return 0;
}