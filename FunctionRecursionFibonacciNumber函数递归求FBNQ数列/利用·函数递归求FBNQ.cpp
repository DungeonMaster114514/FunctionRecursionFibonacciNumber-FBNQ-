#define _CRT_SECURE_NO_WARNINGS 33
#include<stdio.h>

int FBNQnumber(int N)//쳲���������1 1 2 3 5 8 13 21...(�������е�ֵΪǰ����ĺ�)�õݹ����ļ���Ч�ʷ�
{
	if (N <= 2)//1 2 �Ϊ1
	{
		return 1;
	}
	else//��3��ΪFBNQnumber(3-2)+FBNQnumber(3-1)---(��1��ӵ�2��) ��4��ΪFBNQnumber(4-2)+FBNQnumber(4-1)---(��2��ӵ�3��)......
	{
		return FBNQnumber(N - 2) + FBNQnumber(N - 1);
	}
}
int main()
{
	int N, SAVE;
	printf("������ֵΪ����ֵ��쳲�������");
	scanf("%d", &N);
	SAVE = FBNQnumber(N);
	printf("%d\n", SAVE);
	return 0;
}