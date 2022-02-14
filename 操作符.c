
#include<stdio.h>

//& - 与
//| - 或
//^ - 异或

//不使用临时变量，交换两个int变量的值
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//加减法
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//异或的方法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a=%d,b=%d", a, b);
// return 0;
//}


//求一个整数存储在内存中的二进制中的1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}