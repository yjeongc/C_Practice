#include <stdio.h>

void modify(int *p) {
	*p = 99;
}

int main(void) {
	int number;
	printf("값을 입력하세요.");
	scanf_s("%d", &number);

	modify(&number);
	printf("%d", number);

}