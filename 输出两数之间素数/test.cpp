#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, i, j, min, max;
	printf("请输入想要求素数的范围，数字与数字之间用空格隔开\n");
	scanf("%d %d", &a, &b);
	max = (a > b) ? a : b;//确认两数中的较大值
	min = (a < b) ? a : b;//确认两数中的较小值
	//判断是否为素数
	for (i = min; i <= max; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}
	return 0;
}