#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int panduan(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		printf("������");
	else
		printf("��ƽ��");
	return 0;
}
int main()
{
	int a;
	printf("��������Ҫ�жϵ����\n");
	scanf("%d", &a);
	panduan(a);
	return 0;
}