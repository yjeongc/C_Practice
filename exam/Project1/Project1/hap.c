//숫자 1~10 합을 구하는 프로그램
#include <stdio.h>
#include <string.h>

//변수 선언 부분
int i;
int a = 0;

//메인 코드
int main() {
	for (i = 0; i < 11; i++) {
		a+= i;
		printf(a);
	}
	return 0;
}