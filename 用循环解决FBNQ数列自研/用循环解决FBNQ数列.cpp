#define _CRT_SECURE_NO_WARNINGS 33
#include<stdio.h>

int main()
{
	int n, max;
	long long num, num2, num3, save;
	printf("����쳲��������������:");
	scanf("%d", &max);
	for (num2 = 1, num3 = 1, n = 1; n <= max; n++)
	{

		if (n <= 2)
		{
			printf("%-14lld", num2);//����%-1411d,��%-14LLD--(Сд)
			continue;
		}
		num = num2 + num3;
		save = num2;
		num2 = num;
		num3 = save;
		printf("%-14lld", num);//%-14lld��,14����ȡ14����λ���num��ֵ,-�����ո��ں���,lld����Ϊnum2Ϊlong long�͡�
		if (n % 15 == 0)
			printf("\n");
	}

	return 0;
}