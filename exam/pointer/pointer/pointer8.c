//#include <stdio.h>
//
////�Լ� ���� ����
//void menu(void);
//int add(int x, int y);
//int sub(int x, int y);
//int mul(int x, int y);
//int div(int x, int y);
//
//int main()
//{
//	int n, a, b, result;
//	int (*pf[4])(int, int) = { add, sub, mul, div };
//	while (1)
//	{
//		menu();
//		printf("�޴��� �����Ͻÿ�:");
//		scanf("%d", &n);
//		if (n > 4 || n <= 0) {
//			break;
//		}
//		if (n == 4)
//		{
//			break;
//		}
//		printf("2���� ������ �Է��Ͻÿ�:");
//		scanf("%d %d", &a, &b);
//
//		result = pf[n](a,b);
//		printf("���� ��� = %d\n", result);
//	}
//
//	return 0;
//}
//
//void menu(void)
//{
//	printf("===============\n");
//	printf("0. ����\n");
//	printf("1. ����\n");
//	printf("2. ����\n");
//	printf("3. ������\n");
//	printf("4. ����\n");
//	printf("===============\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	if (x < y)
//	{
//		return y - x;
//	}
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
