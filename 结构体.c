#include<stdio.h>
#include<string.h>
#include<windows.h>


//�ṹ�����͵�����

//����һ��ѧ��-һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���  Stu - �ṹ���ǩ    struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;

//int main()
//{
//	struct Stu s1={"����",20,"18273842912","��"};//�ֲ�����
//	Stu s2;
//
//
//	return 0;
//}


//Ƕ�׽ṹ��ĳ�ʼ��

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	char arr[] =  "hello bit\n" ;
	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
	printf("%s\n", t.ch);
	printf("%s\n", t.s.arr);
	printf("%lf\n", t.s.d);
	printf("%s\n", t.pc);
	return 0;
}










