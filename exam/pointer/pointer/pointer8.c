//#include <stdio.h>
//
////ÇÔ¼ö ¿øÇü Á¤ÀÇ
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
//		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ½Ã¿À:");
//		scanf("%d", &n);
//		if (n > 4 || n <= 0) {
//			break;
//		}
//		if (n == 4)
//		{
//			break;
//		}
//		printf("2°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À:");
//		scanf("%d %d", &a, &b);
//
//		result = pf[n](a,b);
//		printf("¿¬»ê °á°ú = %d\n", result);
//	}
//
//	return 0;
//}
//
//void menu(void)
//{
//	printf("===============\n");
//	printf("0. µ¡¼À\n");
//	printf("1. »¬¼À\n");
//	printf("2. °ö¼À\n");
//	printf("3. ³ª´°¼À\n");
//	printf("4. Á¾·á\n");
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
