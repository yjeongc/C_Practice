//#include <stdio.h>
//
//void menu();
//int add(int x, int y);
//int sub(int x, int y);
//int mul(int x, int y);
//int div(int x, int y);
//
//int main()
//{
//	int(*pf[4])(int, int)={add, sub, mul, div};
//	int choice, x, y, result;
//
//	while (1)
//	{
//		menu();
//		printf("�޴��� �����Ͻÿ�:");
//		scanf("%d", &choice);
//
//		
//		if (choice < 0 || choice >= 4)
//		{
//			break;
//		}
//
//		printf("2���� ������ �Է��Ͻÿ�:");
//		scanf("%d %d", &x, &y);
//
//		for (int i = 0; i < 4; i++)
//		{
//			if (i == choice)
//			{
//				result=pf[i](x, y);
//			}
//		}
//		printf("���� ���: %d\n", result);
//	}
//
//	return 0;
//}
//
//void menu()
//{
//	printf("======================\n");
//	printf("0. ����\n1. ����\n2. ����\n3. ������\n4. ����\n");
//	printf("======================\n");
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y) {
//	return x - y;
//}
//int mul(int x, int y) {
//	return x * y;
//}
//int div(int x, int y) {
//	return x / y;
//}
