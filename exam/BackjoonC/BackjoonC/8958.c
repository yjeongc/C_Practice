#include <stdio.h>

typedef struct oxlist
{
	char ox[81];
}OXLIST;

int main()
{
	int N = 0;
	scanf("%d", &N);

	OXLIST list[5];
	
	for (int i = 0; i < N; i++)
	{
		scanf("%s", list[i]);
	}

	printf("%s", list[1]);


	return 0;
}