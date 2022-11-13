#include <stdio.h>

int main(void) {
	int i;
	int* pi = &i;

	printf("값을 입력하세요.");
	scanf_s("%d", &i);

	printf("i=%d, pi = %p\n", i, pi);
	(* pi)++;
	printf("i=%d, pi = %p\n", i, pi);
	*pi++;
	printf("i=%d, pi = %p\n", i, pi);
}