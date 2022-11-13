#include <stdio.h>

void stars(void)
{
	for (int i = 0; i < 6; )
	{
		printf("*");
		i++;
	}
}

int main(void)
{
	char s[11];
	printf("문장을 입력하세요.");
	scanf("%s", s);

	stars();
	printf("\n %s \n", s);
	stars();
	
	return 0;
}