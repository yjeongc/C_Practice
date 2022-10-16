#include <stdio.h>

//변수 선언
int a = 0, b = 0, c = 0;
//int* pa = &a;
//int* pb = &b;


//메인 코드
int main(void)
 {
	printf("두 수를 입력하세요.");
	scanf("%d %d", &a, &b);

	if (a > b) {
		c = (a + b) * (a - b + 1) / 2;
		printf("두 정수 사이에 있는 합: %d", c);
	}

	else if (a < b) {
		c = (a + b) * (b - a + 1) / 2;
		printf("두 정수 사이에 있는 합: %d", c);
	}
	return 0;
}