#include<stdio.h>
#include<string.h>


//strcpy -- �ַ�������
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "################";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory - �ڴ�  set - ����

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n",arr);
//	return 0;
//}

//void Swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a = % d b = % d\n", a, b);
//	return 0;
//}

//int Max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
#include<math.h>
//int sushu(int a)
//{
//	int b = 0;
//	for (b = 2; b<=sqrt(a); b++)
//	{
//		if (a % b == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if(sushu(a) == 1)
//			printf("%d ", a);
//
//	}
//	return 0;
//}

//int run(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (run(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}

//���ֲ���
//�����������в��Ҿ����ĳ����
//����ҵ��˷���������ֵ��±꣬�Ҳ�������-1

//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k == arr[mid])
//			return mid;
//		else if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������");
//	else
//		printf("�ҵ���ָ�������֣��±���%d\n", ret);
//	return 0;
//}

//void Add(int* pa)
//{
//	(* pa)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//Stack overflow -- �ݹ�ĳ�������ջ���

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	return 0;
//}
//�ݹ���ʹ��ʱһ��Ҫ�ҵ���������
//
//int main()
//{
//	char arr[] = "bit";
//	int len=strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n", len);
//	return 0;
//}

//int cheng(int n)
//{
//	if (n != 1)
//		return n*cheng(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=cheng(n);
//	printf("%d\n", ret);
// }
//
//int feibo(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return feibo(n - 2) + feibo(n - 1);
//}
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = feibo(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int forg(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return forg(n - 1) + forg(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	m = forg(n);
//	printf("%d\n", m);
//	return 0;
//}
