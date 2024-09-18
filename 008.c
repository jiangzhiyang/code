#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//有序序列合并
int main() 
{
	int n = 0;
	int m = 0;
	scanf("%d %d",&n,&m);
	 
	int arr1[1000]; //int arr1[n];  <c99 - 变长数组>
	int arr2[1000]; //int arr2[m];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}

	int arr[2000];  //int arr[(n + m)];

	int i = 0;
	int j = 0;
	int k = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			arr[k] = arr1[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = arr2[j];
			j++;
			k++;
		}
	}
	if (i < n)
	{
		for (; i < n; i++)
		{
			arr[k] = arr1[i];
			k++;
		}
	}
	else
	{
		for (; j < m; j++)
		{
			arr[k] = arr2[j];
			k++;
		}
	}
	for ( i = 0; i <(m+n); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
