#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void choujiang1(double a);
void start();
void yaoqinghaoyou(double a, int zuanshi, int count, int suipian, int friend_f);
void huojiang(double a, int zuanshi, int suipian, int count, int friend_f);
int tixian();
int yaoqing();
void ui_yaoqing(double a, int b, int c, int count, int d);
char ui(double a, int b, int c, int count);
void choujiang();
char input()
{
	Sleep(300);
	return _getch();
}
void choujiang()
{
	int i = 6;
	while (i)
	{
		if (i == 6 || i == 3 || i == 9)
		{
			system("cls");
			printf("��ʼ�齱�!\n");
			printf("���ڳ齱�У�");
			Sleep(500);
			i--;
		}
		else if (i == 8 || i == 5 || i == 2)
		{
			system("cls");
			printf("��ʼ�齱�!\n");
			printf("���ڳ齱�У���");
			Sleep(500);
			i--;
		}
		else if (i == 7 || i == 4 || i == 1)
		{
			system("cls");
			printf("��ʼ�齱�!\n");
			printf("���ڳ齱�У�����");
			Sleep(500);
			i--;
		}
	}
}
char ui(double a, int b, int c, int count)
{
	char tmp;
	system("cls");
	printf("�������Ѿ����%0.2fԪ\n", a);
	if (b)
		printf("�������Ѿ����%d����ʯ\n", b);
	if (c)
		printf("�������Ѿ����%d����ʯ��Ƭ\n", c);
	printf("�㻹��%d�γ齱����\n", count);
	printf("�㻹Ҫ����(Y��N����)\n");
	while (1)
	{
		tmp = input();
		if (tmp == 'y' || tmp == 'Y')
			break;
		else if (tmp == 'n' || tmp == 'N')
			return 'n';
	}
	return tmp;
}
void ui_yaoqing(double a, int b, int c, int count, int d)
{
	system("cls");
	printf("�������Ѿ����%0.2fԪ\n", a);
	if (b)
		printf("�������Ѿ����%d����ʯ\n", b);
	if (c)
		printf("�������Ѿ����%d����ʯ��Ƭ\n", c);
	printf("���Ѿ�û�г齱�Ļ����ˣ��㻹��%d���������ѵĻ���\n", d);
	printf("������ѿ��Ժܴ���������õ�300Ԫ\n");
	printf("�Ƿ�������ѣ�(Y��N��)");
}
int yaoqing()
{
	int i = 9;
	while (i)
	{
		if (i == 6 || i == 3 || i == 9)
		{
			system("cls");
			printf("��ʼ�������!\n");
			printf("������������У�\n");
			Sleep(500);
			i--;
		}
		else if (i == 8 || i == 5 || i == 2)
		{
			system("cls");
			printf("��ʼ�������!\n");
			printf("������������У���\n");
			Sleep(500);
			i--;
		}
		else if (i == 7 || i == 4 || i == 1)
		{
			system("cls");
			printf("��ʼ�������!\n");
			printf("������������У�����\n");
			Sleep(500);
			i--;
		}
	}
	int a = rand() % 2;
	if (a == 1)
	{
		printf("����ɹ�\n");
		Sleep(1500);
		return a;
	}
	else
	{
		printf("����ʧ��\n");
		Sleep(1500);
		return 0;
	}
}
int tixian()
{
	int i = 9;
	while (i)
	{
		if (i == 6 || i == 3 || i == 9)
		{
			system("cls");
			printf("��ʼ����!\n");
			printf("���������У�\n");
			Sleep(500);
			i--;
		}
		else if (i == 8 || i == 5 || i == 2)
		{
			system("cls");
			printf("��ʼ����!\n");
			printf("���������У���\n");
			Sleep(500);
			i--;
		}
		else if (i == 7 || i == 4 || i == 1)
		{
			system("cls");
			printf("��ʼ����!\n");
			printf("���������У�����\n");
			Sleep(500);
			i--;
		}
	}
	return rand() % 2;
}
void huojiang(double a, int zuanshi, int suipian, int count, int friend_f)
{
	ui_yaoqing(a, zuanshi, suipian, count, friend_f);
	printf("��ϲ�㣬�ɹ����300Ԫ����Ⱥ�����\n");
	if (tixian())
	{
		printf("��ϲ�㣬�ɹ����ƴϦϦ��300Ԫ�޿�\n");
		printf("�����ֻ����������ʾ�����޷�����ṩ300Ԫ\n");
		printf("�����ߵ��⣬��������Ѿ��ܲ�����\n");
		printf("�´β�Ҫ�������������ܻ�ü��ٿ������ˣ�\n");
		printf("�������Ļ���˼��ٿ飬��ô���ṩ������̵Ĳ�ֹ���ٿ�ļ�ֵ��\n");
		printf("��ë���������ϣ�ֻ�������ܲ��������ϣ�\n");
		printf("�����κ���ѵĶ���������һ������ѵģ�ֻ�����ڰ�������˼۸�лл��\n");
		printf("��ʵ����һ����������Ǯ����������ˣ����ƵĻ����ȵȣ����������⼸�ٿ飩\n");
		exit(0);
	}
	else
	{
		printf("�ܱ�Ǹ�����Ǯ����������ˣ����´������ɣ���\n");
		printf("��ϲ�㣬���˷��˼�����ʱ�䣬ʲôҲû���\n");
		printf("��������һ������������ˣ�����\n");
		printf("�������Ļ���˼��ٿ飬��ô���ṩ������̵Ĳ�ֹ���ٿ�ļ�ֵ��\n");
		printf("��ë���������ϣ�ֻ�������ܲ��������ϣ�\n");
		printf("�����κ���ѵĶ���������һ������ѵģ�ֻ�����ڰ�������˼۸�лл��\n");
		exit(0);
	}
}
void yaoqinghaoyou(double a, int zuanshi, int count, int suipian, int friend_f)
{
	while (friend_f)
	{
		char tmp;
		ui_yaoqing(a, zuanshi, suipian, count, friend_f);
		tmp = input();
		if (tmp == 'y' || tmp == 'Y')
		{
			switch (friend_f)
			{
			case 2:
				if (yaoqing() == 0)
					friend_f++;
				break;
			case 1:
				if (yaoqing() == 0)
					friend_f++;
				else
					huojiang(a, zuanshi, suipian, count, friend_f);
				break;
			}
			friend_f--;
		}
		else if (tmp == 'n' || tmp == 'N')
		{
			printf("���˷��˼�λ���Ѻõ����ѣ�������ʲôҲû�õ���ףԸ���´����ʶ��ƭ��\n");
			printf("�䰮������Զ������թƭ\n");
			exit(0);
		}
	}
}
void choujiang1(double a)
{
	int count = 8, friend_f = 2;
	int zuanshi = 0, suipian = 0;
	while (count != 0)
	{
		char tmp = ui(a, zuanshi, suipian, count);
		if (tmp == 'y' || tmp == 'Y')
		{
			switch (count)
			{
			case 8:
				count--;
				printf("������1Ԫ");
				a += 1;
				break;
			case 7:
				count--;
				printf("������0.5Ԫ");
				a += 0.5;
				break;
			case 6:
				count--;
				printf("������0.25Ԫ");
				a += 0.25;
				break;
			case 5:
				count--;
				printf("������0.24Ԫ\n");
				printf("�������1��Ǯ���������ˣ�����\n");
				Sleep(1000);
				a += 0.24;
				break;
			case 4:
				count--;
				printf("������90����ʯ\n");
				printf("�������10����ʯ���������ˣ����ͣ�100����ʯ���Զһ�1��Ǯ\n");
				Sleep(1000);
				zuanshi += 90;
				break;
			case 3:
				count--;
				printf("������9����ʯ\n");
				printf("�������1����ʯ���������ˣ����ͣ�100����ʯ���Զһ�1��Ǯ\n");
				Sleep(1000);
				zuanshi += 9;
				break;
			case 2:
				count--;
				printf("������90����ʯ��Ƭ\n");
				printf("�������10����ʯ��Ƭ���������ˣ����ͣ�100����ʯ��Ƭ���Զһ�1����ʯ\n");
				Sleep(1000);
				suipian += 90;
				break;
			case 1:
				count--;
				printf("������9����ʯ��Ƭ\n");
				printf("�������1����ʯ��Ƭ���������ˣ����ͣ�100����ʯ��Ƭ���Զһ�1����ʯ\n");
				Sleep(1000);
				suipian += 9;
				break;
			}
		}
		else if (tmp == 'n')
		{
			printf("��ϲ�㣬���˷��˼�����ʱ�䣬ʲôҲû���\n");
			printf("���ϲ�����ڱ������������զ��ôȷ���������е��أ��������ֻ��˵��С,����500��С\n");
			printf("�䰮������Զ������թƭ\n");
			exit(0);
		}
		Sleep(2000);
	}
	yaoqinghaoyou(a, zuanshi, count, suipian, friend_f);
}
void start()
{
	choujiang();
	system("cls");
	printf("��ϲ����298.00Ԫ\n");
	Sleep(1500);
	system("cls");
	choujiang1((double)298.0);
}
int main()
{
	srand((unsigned int)time(NULL));
	printf("���кܴ�ļ������õ�300Ԫ\n");
	printf("��ĺ���XXX1��XXX2��XXX3��XXX4�����Ѿ��õ��ˣ��Ͳ�����\n");
	printf("����Ҫ���𣿣�(Y��N����)\n");
	while (1)
	{
		char a = input();
		if (a == 'N' || a == 'n')
		{
			system("cls");
			printf("��ȷ����������ĺܶ���Ѷ��õ��ˣ�(Yȷ��Nȡ��)\n");
			printf("XXX1:�ⲻ�ܼ���ɵ�ӲŲ�Ҫ�ء�\n");
			printf("XXX2:���ѣ��Ͻ����������ɾ��õ���\n");
			printf("XXX3:���ٿ�Ҳ��Ǯ����Ϊɶ����Ҫ�أ������Ǯ��\n");
			printf("XXX4:���¹��ʹ�һ���������������������������ٿ鶼��Ҫ��Ҫɶ��\n");
			while (1)
			{
				a = input();
				if (a == 'Y' || a == 'y')
				{
					system("cls");
					printf("��ϲ�㣬�ɹ�������ջ�");
					return 0;
				}
				else if (a == 'n' || a == 'N')
					start();
			}
		}
		else if (a == 'Y' || a == 'y')
			start();
	}
	return 0;
}