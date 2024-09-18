//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <stdbool.h>
//void menu() {
//	printf("=================\n");
//	printf("==0.exit=========\n");
//	printf("==1.play=========\n");
//	printf("=================\n");
//}
//void game() {
//	int guess = 0;
//	//生成随机数
//	int ret = rand() % 100 + 1;
//	//猜数字
//
//	while (1)
//	{
//		printf("请猜数字:\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	};
//
//}
//
//int main() {
//
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//
//	do {
//		menu();
//		printf("请选择:\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//
//
//	} while (input);
//
//
//	return 0;
//}
//
//


//题目：判断一个年份是不是闰年
//闰年:1.四年一闰百年不闰：即如果year能够被4整除，但是不能被100整除，则year是闰年 
//     2.每四百年再一闰：如果year能够被400整除，则year是闰年
//用运&& 和 || 操作符
//
//闰年判断
//void Run(int a) {
//	if ((a % 4 == 0 && a % 100 != 0)|| (a % 400 == 0))
//	{
//		printf("%d  ", a);
//	}
//}
//
//int main() {
//
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		Run(year);
//	}
//
//
//
//	return 0;
//}



//写一个二分查找的函数
//int bin_search(int arr[], int left, int right, int key)
//{
//    int mid = 0;
//    while (left < right)
//    {
//        mid = (left + right) >> 1;
//        //mid = (left + right)/2
//        if (arr[mid] > key)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid + 1;
//        }
//        else
//            return mid;//若找到，返回下标
//    }
//    return -1;//未找到
//}
//
//int main() 
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]) - 1;
//    int ret = bin_search(arr, left, right, 5);//用ret接收函数的返回值
//    printf("ret=%d\n", ret);
//    system("pause");
// 
//	return 0;
//}

//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("ret = %d\n", ret);
//
//	return 0;	
//}

//void baland(int a, int b, int c)
//{	
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	baland(a, b, c);
//
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//
//	}
//	printf("%d", b);
//
//	return 0;
// }

//计算1/1-1/2+1/3-1/4+1/5.+1/99 - 1/100 的值，打印出结果
//分子总是1
//分母是1~100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//void AAA();
//int main()
//{
	//int i = 0;
	////打印9行
	//for (i = 1; i <= 9; i++)
	//{
	//	//打印一行
	//	int j = 0;
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%-2d ",j, i, i*j);
	//	}
	//	printf("\n");

	//}
//	AAA();
//	return 0;
//}
//
//void AAA()
//{
//	printf("!!!!!!!!!!!11");
//}


 









