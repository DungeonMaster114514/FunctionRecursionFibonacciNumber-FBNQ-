#define _CRT_SECURE_NO_WARNINGS 33
#include<stdio.h>

int main()
{
	int n, max;
	long long num, num2, num3, save;
	printf("输入斐波那契数的最大项:");
	scanf("%d", &max);
	for (num2 = 1, num3 = 1, n = 1; n <= max; n++)
	{

		if (n <= 2)
		{
			printf("%-14lld", num2);//不是%-1411d,是%-14LLD--(小写)
			continue;
		}
		num = num2 + num3;
		save = num2;
		num2 = num;
		num3 = save;
		printf("%-14lld", num);//%-14lld中,14代表取14个空位存放num的值,-代表将空格补在后面,lld是因为num2为long long型。
		if (n % 15 == 0)
			printf("\n");
	}

	return 0;
}