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
//	//���������
//	int ret = rand() % 100 + 1;
//	//������
//
//	while (1)
//	{
//		printf("�������:\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��:\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������������룡\n");
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


//��Ŀ���ж�һ������ǲ�������
//����:1.����һ����겻�򣺼����year�ܹ���4���������ǲ��ܱ�100��������year������ 
//     2.ÿ�İ�����һ�����year�ܹ���400��������year������
//����&& �� || ������
//
//�����ж�
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



//дһ�����ֲ��ҵĺ���
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
//            return mid;//���ҵ��������±�
//    }
//    return -1;//δ�ҵ�
//}
//
//int main() 
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]) - 1;
//    int ret = bin_search(arr, left, right, 5);//��ret���պ����ķ���ֵ
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

//շת�����
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

//����1/1-1/2+1/3-1/4+1/5.+1/99 - 1/100 ��ֵ����ӡ�����
//��������1
//��ĸ��1~100
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

//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//void AAA();
//int main()
//{
	//int i = 0;
	////��ӡ9��
	//for (i = 1; i <= 9; i++)
	//{
	//	//��ӡһ��
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


 









