#include <stdio.h>

//변수 선언
int x = 0, y = 0;
int a, b;

//메인 코드
int main(void) {
	printf("x와 y의 값을 입력하세요.");
	scanf("%d %d", &x, &y);

	printf("x=%d\n", x);
	a = ++x;
	printf("++x의 값=%d\n", a);
	printf("x=%d\n", x);

	printf("y=%d\n", y);
	b = y++;
	printf("y++의 값=%d\n", b);
	printf("y=%d\n", y);

	return 0;
}