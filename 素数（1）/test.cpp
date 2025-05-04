#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//定义变量和循环变量
	int num=0;
	int i = 0;
	printf("请输入你要判断的数\n");
	scanf("%d", &num);
	//判断是否为素数
	if (num == 1)
	{
		printf("1既不是素数，也不是合数\n");
	}
	else
	{
		i = 2;
		for (i;i < num;i++)
		{
			if (num % i == 0)
				break;
		}
		if (i == num)
			printf("%d是素数\n", num);
		else
			printf("%d是合数\n", num);
	}
	//此函数结束
	return 0;
}