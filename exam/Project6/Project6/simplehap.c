//두 수의 합
#include <stdio.h>

//변수 선언
int a, b;

int main(void) {
	printf("두 수를 입력하세요.");
	scanf_s("%d %d", &a, &b);

	printf("%d", a + b);
	return 0;
}