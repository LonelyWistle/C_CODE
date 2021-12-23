#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("enter two numbers£º");
		scanf("%d %d", &a, &b);
		int sum = a + b;
		printf("%d\n", sum);
	}
	return 0;
}


