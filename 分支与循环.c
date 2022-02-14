//#include<stdio.h>
//

//打印100以内的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf(" % d ", i);
//		i++;
//	}
//	return 0;
//}


//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//while循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	/*while (1)
//		printf("hehe\n");*/
//	return 0;
//}

//int main()
//{
//
//	int ch = 0;
//
//	//CTRL + Z
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar();
//
//	putchar(ch);
//	printf("%c\n", ch);*/
//	return 0;
//}

//for循环

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//do while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}


//计算10的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1;i<=n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}


//计算1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n。编写int binsearch(int x,int v[],int n);功能:在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是 %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			 right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			 left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是 %d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}


//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>

//编写代码，演示多个字符从两端移动，向中间汇聚
 
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息1秒
//		system("cls");//执行系统命令的一个函数
//		left++;
//		right--;
//	}
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录3次。（只允许输入3次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。
//int main()
//{
//	int i = 0;
//	char password[20]={0};
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s ", password);
//		if (strcmp(password, "123456") == 0)//==不能用来比较两个字符是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//			printf("三次密码均错误，退出程序\n");
//	return 0;
//

//#include<stdio.h>

//
//int main()
//{
//	int ch = getchar(0);
//		putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	default:
//		printf("输入错误");
//	}
//	return 0;
//}




//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//			printf("%d ", num);
//		num++;
//	}
//	return 0;
//}
////int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//	return 0;
//}
//
//#include<stdio.h>

//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//	}
//	return 0; 
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int c = 1;
//	scanf("%d", &n);
//	for(a=1;a<=n;a++)
//	{
//		c = c * a;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		b = b * a;
//		c = c + b;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int a = 0;
//	int b =3 ;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (a = 0; a < sz; a++)
//	{
//		if (a == b)
//		{
//			printf("找到了，下标是%d", a);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到");
//	}
// 
//	return 0;
////}
//
//#include<stdio.h>
////int main()
//{
//	int a = 2;
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		b = b * a;
//	}
//	printf("%d\n", b);
//	return 0;
//}

#include<stdio.h>


//int main()
//{
//	int a = 0;
//	char password[20] = { 0 };
//	for (a = 0; a < 3; a++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}		
//	}
//	if (a == 3)
//			printf("三次密码均错误，退出程序");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a % 4 == 0 && a % 100 != 0)
//			printf("%d ", a);
//		else if (a % 400 == 0)
//			printf("%d ", a);
//	}
//	return 0;
//}
