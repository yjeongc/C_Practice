//#include <stdio.h>
//#include <string.h>
//#define STU_NUMBER 1
//#define REG_NUMBER 2
//
//void print(struct student s);
//
//struct student {
//	int type;
//	union {
//		int number;
//		int linumber;
//	}id;
//	char name[20];
//};
//
//int main()
//{
//	struct student s1,s2;
//
//	s1.type = STU_NUMBER;
//	s1.id.number = 20202020;
//	strcpy(s1.name,"홍길동");
//
//	s2.type = REG_NUMBER;
//	s2.id.number = 10101010;
//	strcpy(s2.name, "김철수");
//
//	print(s1);
//	print(s2);
//	
//	return 0;
//}
//
//void print(struct student s)
//{
//	switch (s.type)
//	{
//	case STU_NUMBER:
//		printf("학번:%d", s.id.number);
//		printf("이름:%s", s.name);
//		printf("\n");
//		break;
//	case REG_NUMBER:
//		printf("학번:%d", s.id.number);
//		printf("이름:%s", s.name);
//		printf("\n");
//		break;
//	default:
//		printf("타입 오류\n");
//		break;
//	}
//}