#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int panduan(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		printf("是闰年");
	else
		printf("是平年");
	return 0;
}
int main()
{
	int a;
	printf("请输入你要判断的年份\n");
	scanf("%d", &a);
	panduan(a);
	return 0;
}