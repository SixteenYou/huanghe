#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//���������ѭ������
	int num=0;
	int i = 0;
	printf("��������Ҫ�жϵ���\n");
	scanf("%d", &num);
	//�ж��Ƿ�Ϊ����
	if (num == 1)
	{
		printf("1�Ȳ���������Ҳ���Ǻ���\n");
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
			printf("%d������\n", num);
		else
			printf("%d�Ǻ���\n", num);
	}
	//�˺�������
	return 0;
}