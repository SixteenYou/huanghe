#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, i, j, min, max;
	printf("��������Ҫ�������ķ�Χ������������֮���ÿո����\n");
	scanf("%d %d", &a, &b);
	max = (a > b) ? a : b;//ȷ�������еĽϴ�ֵ
	min = (a < b) ? a : b;//ȷ�������еĽ�Сֵ
	//�ж��Ƿ�Ϊ����
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