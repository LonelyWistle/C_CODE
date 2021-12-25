#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>


int factorial(int n)
{
	int i = 0;
	int j = 1;
	for (i = 1; i <= n; i++)
	{
		j *= i;
	}
	return j;
}


int main()
{
	printf("n factorial\n");
	int n = 0;
	while (1)
	{
		printf("please enter:");
		scanf("%d", &n);
		int ret = factorial(n);
		printf("%d\n", ret);
	}
	return 0;
}


