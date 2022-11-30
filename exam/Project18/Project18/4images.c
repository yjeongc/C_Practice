//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void) {
//	unsigned char image[10][10];
//	srand(time(NULL));
//
//	for (int j = 0; j < 10; j++) {
//		for (int i = 0; i < 10; i++) {
//			image[i][j] = rand();
//		}
//	}
//
//	for (int k = 0; k < 10; k++)
//	{
//		for (int l = 0; l < 10; l++)
//		{
//			if (image[k][l] < 128)
//			{
//				image[k][l] = 0;
//			}
//			else
//			{
//				image[k][l] = 255;
//			}
//			printf("%d ", image[k][l]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}