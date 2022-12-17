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
//	int size = sizeof(list) / sizeof(list[0]);
//	struct student stand;
//	stand = list[0];
//
//	for (int i = 1; i < size; i++)
//	{
//		if (list[i].grade > stand.grade)
//		{
//			stand = list[i];
//		}
//	}
//
//	printf("<ÆòÁ¡ÀÌ °¡Àå ³ôÀº ÇĞ»ı>\n");
//	printf("ÀÌ¸§: %s\n", stand.name);
//	printf("ÇĞ¹ø: %d\n", stand.number);
//	printf("ÆòÁ¡: %lf\n", stand.grade);
//	return 0;
//}