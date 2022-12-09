//#include <stdio.h>
//
//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//
//struct student list[] = {
//	{20210001, "È«±æµ¿", 4.2},
//	{20210002, "±èÃ¶¼ö", 3.2},
//	{20210003, "±è¿µÈñ", 3.9}
//};
//
//int main()
//{
//	struct student standard = list[0];
//	int size = sizeof(list) / sizeof(list[0]);
//
//	for (int i = 1; i < size; i++)
//	{
//		if (list[i].grade > list[0].grade)
//		{
//			standard = list[i];
//		}
//	}
//
//	printf("<ÆòÁ¡ÀÌ °¡Àå ³ôÀº ÇĞ»ı>\n");
//	printf("ÀÌ¸§: %s\n", standard.name);
//	printf("ÇĞ¹ø: %d\n", standard.number);
//	printf("ÆòÁ¡: %lf\n", standard.grade);
//
//	return 0;
//}