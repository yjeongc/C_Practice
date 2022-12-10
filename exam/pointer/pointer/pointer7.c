//#include <stdio.h>
//
////함수 원형 정의
//void menu(void);
//int add(int x, int y);
//int sub(int x, int y);
//int mul(int x, int y);
//int div(int x, int y);
//
//int main()
//{
//	int n, a, b, result;
//	int (*pf[4]) (int, int) = {add, sub, mul, div};
//
//	while (1)
//	{	
//		menu();
//		printf("메뉴를 선택하시오:");	
//		scanf("%d", &n);
//
//		if (n >= 4 || n < 0) {
//			break;
//		}
//		printf("2개의 정수를 입력하시오:");
//		scanf("%d %d", &a, &b);
//
//		if (n == 4) {
//			break;
//		}
//		if (n == 0) {
//			result = pf[0](a, b);
//			printf("연산 결과 = %d\n", result);
//		}
//		if (n == 1) {
//			result = pf[1](a, b);
//			printf("연산 결과 = %d\n", result);
//		}
//		if (n == 2) {
//			result = pf[2](a, b);
//			printf("연산 결과 = %d\n", result);
//		}
//		if (n == 3) {
//			result = pf[3](a, b);
//			printf("연산 결과 = %d\n", result);
//		}
//
//	}
//
//	return 0;
//}
//
//void menu(void)
//{
//	printf("==================\n");
//	printf("0.덧셈\n");
//	printf("1.뺄셈\n");
//	printf("2.곱셈\n");
//	printf("3.나눗셈\n");
//	printf("4.종료\n");
//	printf("==================\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
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
