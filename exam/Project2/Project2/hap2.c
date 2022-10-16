//a ~ b 합 구하기
#include <stdio.h>

//메인 코드
int main(void) {
	//변수 선언
	int a, b;
	int i;

	printf("첫 번째 수를 입력하세요.");
	scanf_s("%d", &a);
	printf("두 번째 수를 입력하세요.");
	scanf_s("%d", &b);

	i = a + 1;

	while (i < b + 1) {
		a += i;
		i++;
	}
	printf("두 수의 순차적인 합은: %d\n", a);
	return 0;
}