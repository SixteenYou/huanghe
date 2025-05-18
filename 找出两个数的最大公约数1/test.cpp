#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, gongyueshu, min;
	printf("请输入你要求两个数，数字之间用空格\n");
	scanf("%d %d", &a, &b);
	while (getchar() != '\n');
	min = (a < b) ? a : b;
	for (int i = 1; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0)
			gongyueshu = i;
	}
	printf("%d和%d这两个数的最大公约数是%d", a, b, gongyueshu);
	return 0;
}