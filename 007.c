#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ���������飬ʵ��һ������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��
//����ż��λ������ĺ�벿�֡�

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