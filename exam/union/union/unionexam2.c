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
//	strcpy(s1.name,"ȫ�浿");
//
//	s2.type = REG_NUMBER;
//	s2.id.number = 10101010;
//	strcpy(s2.name, "��ö��");
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
//		printf("�й�:%d", s.id.number);
//		printf("�̸�:%s", s.name);
//		printf("\n");
//		break;
//	case REG_NUMBER:
//		printf("�й�:%d", s.id.number);
//		printf("�̸�:%s", s.name);
//		printf("\n");
//		break;
//	default:
//		printf("Ÿ�� ����\n");
//		break;
//	}
//}