//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 0;
//	int* p;
//	printf("�׸��� ������ �� ���Դϱ�?");
//	scanf("%d", &n);
//	p = (int*)malloc(sizeof(int) * n);
//	if (p == NULL)
//	{
//		printf("�����Ҵ�޸� �����Դϴ�.\n");
//		exit(1);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("�׸�(����)�� �Է��Ͻÿ�:");
//		scanf("%d", &p[i]);
//	}
//
//	printf("�Էµ� ���� ������ �����ϴ�:\n %d %d %d", p[0],p[1],p[2]);
//
//	free(p);
//	return 0;
//}