#include <stdio.h>

void modify(int *p) {
	*p = 99;
}

int main(void) {
	int number;
	printf("���� �Է��ϼ���.");
	scanf_s("%d", &number);

	modify(&number);
	printf("%d", number);

}