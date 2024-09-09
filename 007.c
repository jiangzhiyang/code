#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分
//所有偶数位于数组的后半部分。

void Panduan(int* L, int* R, int a)
{
	for (int i = 0; i < a/2; i++)
	{
		if (((*L % 2 == 0) && (*R % 2 == 0))||((*L % 2 != 0) && (*R % 2 != 0))|| ((*L % 2 != 0) && (*R % 2 == 0)))
		{
			L++;
			R--;
		}
		else if((*L % 2 == 0) && (*R % 2 != 0))
		{
			int a = *L;
			*L = *R;
			*R = a;
			L++;
			R--;
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);
	}
	Panduan(arr,arr+9, sz);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}