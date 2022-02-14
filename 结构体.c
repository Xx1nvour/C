#include<stdio.h>
#include<string.h>
#include<windows.h>


//结构体类型的声明

//描述一个学生-一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字  Stu - 结构体标签    struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;

//int main()
//{
//	struct Stu s1={"张三",20,"18273842912","男"};//局部变量
//	Stu s2;
//
//
//	return 0;
//}


//嵌套结构体的初始化

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










