#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
 //数组A与数组B交换（两个数组一样大）；
//int main()
//{
//	int  arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int  arr2[] = { 9,8,7,6,5,4,3,2,1 };
//	int  temp = 0,left = 0;
//	for (left = 0; left <9; left++)
//	{
//		temp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = temp;
//	}
//	for (left = 0; left < 9; left++)
//	{
//		printf("%d ", arr1[left]);
//	}
//	printf("\n");
//	for (left = 0; left < 9; left++)
//	{
//		printf("%d ", arr2[left]);
//	}
//	printf("\n");
//	return 0;
//}
//函数调用；
//void printf_arr(int arr[],int x)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 0, 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 10,5 };
//	int i=0,temp = 0;
//	for (i = 0; i < 5; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	printf_arr(arr1,5);
//	printf_arr(arr2,5);
//	return 0;
//}
//int main()
//{
//	printf("请输入数据个数并点击enter键\n");
//	int sz;
//	scanf("%d", &sz);
//	int arr1[] = { 0 }, i = 0;
//	printf("请输入第一组数据并点击enter键\n");
//	for (i = 0; i <= sz; i++)
//	{
//		scanf("%d", &arr1[sz]);
//		//printf("%d", arr1[i]);
//
//	}
//	for (i = 0; i <=sz; i++)
//	{
//		printf("%d ", arr1[sz]);
//	}
//	printf("\n");
//	return 0;
//
//}
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	//int flag=1;
//	for (i = 1; i <=100; i++)
//	{
//		sum += 1.0 / i;
//		//sum += flag*1.0 / i;
//		//flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double  sum=0,sum1=0, sum2=0;
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	printf("sum1=%lf\n", sum1);
//
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum2 += 1.0 / i;
//	}
//	printf("sum2=%lf\n", sum2);
//
//	printf("sum=%lf\n", sum2 - sum1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 2; i <= 100; i+=2)
//	{
//		sum +=  1.0 / i;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum += 1.0 / i;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0, j = 0, sz = 0, count1 = 0, count2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			sz = (10 * i) + j;
//			if (j % 9 == 0)
//			{
//				count1++;
//			}
//		}
//		if ((10 * i) % 9 == 0)
//		{
//			count2++;
//		}
//	}
//	//printf("sz=%2d ", sz);
//	printf("\ncount=%d\n", count1+count2);
//	return 0;
//}
//int main()
//{
//	int i = 0, j = 0, count1 = 0, sz = 0, count2 = 0, count = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sz = 10 * i;
//		if (sz % 9 == 0)
//		{
//			//count1++;
//		}
//		count1++;
//
//	}
//	for (j = 0; j < 10; j++)
//	{
//		if (j % 9 == 0)
//		{
//			//count2++;
//		}
//		count2++;
//
//	}
//	printf("count=%d", count1 + count2);
//	return 0;
//}

//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//		{
//			count++;
//		}
//	    if (9 == i/ 10)
//		{
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
//打印菱形及三角形
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 1; j <= 7 - i; j++)
//		printf(" ");
//		for (k = 1; k <= 2 * i - 1; k++)
//		printf("*");
//		printf("\n");
//	}
//	for (i = 1; i < 7; i++)
//	{
//		for (j = 1; j <=i; j++)
//			printf(" ");
//		for (k = 1; k <=13-2*i; k++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 0, b = 0, c = 0, count = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		a = i % 10;//个位
//		b = i % 100)/ 10;//十位
//		c = i / 100;//百位
//		if ((a*a*a + b*b*b + c*c*c) == (c*100 + b*10 + a))
//		{
//			printf("%d ", c*100+ b*10 + a);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d\n");
//	return 0;
//}
//int main()
//{
//	int i, j, k, count = 0;
//	for (i = 1; i < 10; i++)
//		for (j = 0; j < 10; j++)
//			for (k = 0; k < 10; k++)
//				if ((i*i*i + j*j*j + k*k*k) == (i * 100 + j * 10 + k))
//					printf("%d ", i * 100 + j * 10 + k);
//	return 0;
//}
//int main()
//{
//	int i = 987, b = 0;
//	b = (i % 10) % 10;
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	int i = 987, b1 = 0, b2 = 0;
//	b1 = i % 10 / 10;
//	b2 = i % 100 / 10;
//	printf("%d %d\n", b1, b2);
//	return 0;
//}
//int main()
//{
//	int i = 0, arr[20] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//二维数组的输入域输出；
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i*8+2*(j+1);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}
//冒泡排序
//void maopao_px(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+ 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void printf_px(int arr[], int sz)
//{
//	int i = 0; 
//	for (i = 0; i < sz; i++)
//	{
//			printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0, sz=0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf_px(arr, sz);
//	maopao_px(arr, sz);
//	printf_px(arr, sz);
//	return 0;
//}
//冒泡排序
//void printf_px(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void maopao_px(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//			if (arr[j]>arr[j + 1])
//			{
//			int temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//			}
//	}
//}
//int main()
//{
//	int i = 0;
//	//int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int arr[10] = { 0 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("sz=%d\n", sz);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");*/
//	printf_px(arr, sz);
//	maopao_px(arr, sz);
//	printf_px(arr, sz);
//}