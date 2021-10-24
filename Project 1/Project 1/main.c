#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}



int main()
{
	//printf("nihao,lus!\n");
	//return 123;
	//int a, b, sum;
	//scanf("%d %d", &a, &b);
	//sum = a + b;
	//printf("sum = %d\n", sum);
	//printf("%d\n", printf("%d\n", printf("%d\n", 5555)));
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
  