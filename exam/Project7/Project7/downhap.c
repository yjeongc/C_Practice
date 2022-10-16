//수를 입력받아서 1씩 줄여가며 더하기
#include <stdio.h>


//메인 코드
int main(void) {
	
	//변수 선언
	int a;
	int sum = 0;
	int* psum = &sum;

	printf("수를 입력하세요.");
	scanf_s("%d", &a);

	for (int i = 0; i < -(a+1);)
	{
		sum += a + i;
		i--;
		
	}
	printf("1씩 줄여가며 더한 합은 %d입니다.", sum);
	return 0;
}