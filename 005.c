//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main(void)
//{
//    system("shutdown -s -t 60");
//    //这是Windows系统下的一个关机命令
//    printf("你的电脑将在一分钟后关机，如果完成下面这个猜数字游戏，就会取消关机！\n请输入: ");
//	srand((unsigned int)time(NULL));
//	do {
//		int guess = 0;
//		//生成随机数
//		int ret = rand() % 100 + 1;
//		//猜数字
//
//		while (1)
//		{
//			printf("数字大小为1~100,请猜数字:\n");
//			scanf("%d", &guess);
//			if (guess < ret)
//			{
//				printf("猜小了\n");
//			}
//			else if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对了！\n");
//				system("shutdown -a");//取消关机命令
//				goto finish;
//			}
//		};
//
//	} while (1);
//finish:
//   
//    return 0;
//}
