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
//		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ½Ã¿À:");
//		scanf("%d", &choice);
//
//		
//		if (choice < 0 || choice >= 4)
//		{
//			break;
//		}
//
//		printf("2°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À:");
//		scanf("%d %d", &x, &y);
//
//		for (int i = 0; i < 4; i++)
//		{
//			if (i == choice)
//			{
//				result=pf[i](x, y);
//			}
//		}
//		printf("¿¬»ê °á°ú: %d\n", result);
//	}
//
//	return 0;
//}
//
//void menu()
//{
//	printf("======================\n");
//	printf("0. µ¡¼À\n1. »¬¼À\n2. °ö¼À\n3. ³ª´°¼À\n4. Á¾·á\n");
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
