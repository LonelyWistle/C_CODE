#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int SumFac(int n)
{
	int i = 1;
	int a = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		a *= i;
		sum += a;
	}
	return sum;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = SumFac(n);
	printf("%d", ret);

	return 0;
}