//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* list;
//	int i;  int students;
//
//	printf("�л��� ��:");
//	scanf("%d", &students);
//	list = (int*)malloc(students*sizeof(int));
//	if (list == NULL)
//	{
//		printf("�����Ҵ�޸� �����Դϴ�.\n");
//		exit(1);
//	}
//	for (i = 0; i < students; i++)
//	{
//		printf("�л� #%d ����:", i + 1);
//		scanf("%d", &list[i]);
//	}
//	printf("==========================\n");
//
//	for (i = 0; i < students; i++)
//	{
//		printf("�л� #%d ����:", i + 1);
//		scanf("%d", &list[i]);
//	}
//	printf("==========================\n");
//	free(list);
//	return 0;
//}