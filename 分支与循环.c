//#include<stdio.h>
//

//��ӡ100���ڵ�����
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


//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//whileѭ��
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

//forѭ��

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


//do whileѭ��
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


//����10�Ľ׳�
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


//����1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
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


//��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);����:��v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x
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
//			printf("�ҵ��ˣ��±��� %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ���,�±��� %d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}


//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>

//��д���룬��ʾ����ַ��������ƶ������м���
 
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
//		Sleep(1000);//��Ϣ1��
//		system("cls");//ִ��ϵͳ�����һ������
//		left++;
//		right--;
//	}
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼3�Ρ���ֻ��������3�����룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
//int main()
//{
//	int i = 0;
//	char password[20]={0};
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s ", password);
//		if (strcmp(password, "123456") == 0)//==���������Ƚ������ַ��Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//			printf("��������������˳�����\n");
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	default:
//		printf("�������");
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
//			printf("�ҵ��ˣ��±���%d", a);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���");
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}		
//	}
//	if (a == 3)
//			printf("��������������˳�����");
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
