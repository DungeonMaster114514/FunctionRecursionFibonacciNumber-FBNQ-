#define _CRT_SECURE_NO_WARNINGS 33
#include<stdio.h>

int FBNQnumber(int N)//斐波那契数列1 1 2 3 5 8 13 21...(该项数列的值为前两项的和)用递归解决的极低效率法
{
	if (N <= 2)//1 2 项都为1
	{
		return 1;
	}
	else//第3项为FBNQnumber(3-2)+FBNQnumber(3-1)---(第1项加第2项) 第4项为FBNQnumber(4-2)+FBNQnumber(4-1)---(第2项加第3项)......
	{
		return FBNQnumber(N - 2) + FBNQnumber(N - 1);
	}
}
int main()
{
	int N, SAVE;
	printf("输出最大值为输入值的斐波那契数");
	scanf("%d", &N);
	SAVE = FBNQnumber(N);
	printf("%d\n", SAVE);
	return 0;
}