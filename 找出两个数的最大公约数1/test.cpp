#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, gongyueshu, min;
	printf("��������Ҫ��������������֮���ÿո�\n");
	scanf("%d %d", &a, &b);
	while (getchar() != '\n');
	min = (a < b) ? a : b;
	for (int i = 1; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0)
			gongyueshu = i;
	}
	printf("%d��%d�������������Լ����%d", a, b, gongyueshu);
	return 0;
}