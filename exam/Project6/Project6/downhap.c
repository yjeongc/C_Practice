/*

//수를 입력받아서 1씩 줄여가며 더하기
#include <stdio.h>

//변수 선언
int d, sum;

//메인 코드
int main(void) {
	printf("수를 입력하세요.");
	scanf_s("%d", &d);

	for (int i = 0; i < -(d+1);)
	{
		sum += d+ i;
		i--;
	}

	return 0;
}

*/