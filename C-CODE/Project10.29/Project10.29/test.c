#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int v[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &v[i]);
	}
	int max = v[0];
	for (i = 0; i < 5; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}
	printf("在已输入的5个数中:");
	for (i = 0; i < 5; i++)
	{
		printf(" %d  ", v[i]);
	}
	printf("\nmax=%d", max);
	return 0;
}