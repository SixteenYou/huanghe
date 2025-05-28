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
			printf("开始抽奖喽!\n");
			printf("正在抽奖中！");
			Sleep(500);
			i--;
		}
		else if (i == 8 || i == 5 || i == 2)
		{
			system("cls");
			printf("开始抽奖喽!\n");
			printf("正在抽奖中！！");
			Sleep(500);
			i--;
		}
		else if (i == 7 || i == 4 || i == 1)
		{
			system("cls");
			printf("开始抽奖喽!\n");
			printf("正在抽奖中！！！");
			Sleep(500);
			i--;
		}
	}
}
char ui(double a, int b, int c, int count)
{
	char tmp;
	system("cls");
	printf("你现在已经获得%0.2f元\n", a);
	if (b)
		printf("你现在已经获得%d个钻石\n", b);
	if (c)
		printf("你现在已经获得%d个钻石碎片\n", c);
	printf("你还有%d次抽奖机会\n", count);
	printf("你还要抽吗？(Y抽N不抽)\n");
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
	printf("你现在已经获得%0.2f元\n", a);
	if (b)
		printf("你现在已经获得%d个钻石\n", b);
	if (c)
		printf("你现在已经获得%d个钻石碎片\n", c);
	printf("你已经没有抽奖的机会了，你还有%d次邀请朋友的机会\n", d);
	printf("邀请好友可以很大概率立马拿到300元\n");
	printf("是否邀请好友？(Y是N否)");
}
int yaoqing()
{
	int i = 9;
	while (i)
	{
		if (i == 6 || i == 3 || i == 9)
		{
			system("cls");
			printf("开始邀请好友!\n");
			printf("正在邀请好友中！\n");
			Sleep(500);
			i--;
		}
		else if (i == 8 || i == 5 || i == 2)
		{
			system("cls");
			printf("开始邀请好友!\n");
			printf("正在邀请好友中！！\n");
			Sleep(500);
			i--;
		}
		else if (i == 7 || i == 4 || i == 1)
		{
			system("cls");
			printf("开始邀请好友!\n");
			printf("正在邀请好友中！！！\n");
			Sleep(500);
			i--;
		}
	}
	int a = rand() % 2;
	if (a == 1)
	{
		printf("邀请成功\n");
		Sleep(1500);
		return a;
	}
	else
	{
		printf("邀请失败\n");
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
			printf("开始提现!\n");
			printf("正在提现中！\n");
			Sleep(500);
			i--;
		}
		else if (i == 8 || i == 5 || i == 2)
		{
			system("cls");
			printf("开始提现!\n");
			printf("正在提现中！！\n");
			Sleep(500);
			i--;
		}
		else if (i == 7 || i == 4 || i == 1)
		{
			system("cls");
			printf("开始提现!\n");
			printf("正在提现中！！！\n");
			Sleep(500);
			i--;
		}
	}
	return rand() % 2;
}
void huojiang(double a, int zuanshi, int suipian, int count, int friend_f)
{
	ui_yaoqing(a, zuanshi, suipian, count, friend_f);
	printf("恭喜你，成功获得300元，请等候提现\n");
	if (tixian())
	{
		printf("恭喜你，成功获得拼夕夕的300元巨款\n");
		printf("本软件只用于用于演示，并无法真的提供300元\n");
		printf("你能走到这，你的运气已经很不错了\n");
		printf("下次不要在乱相信那种能获得几百块的软件了，\n");
		printf("你如果真的获得了几百块，那么你提供给软件商的不止几百块的价值，\n");
		printf("羊毛出在羊身上，只不过可能不是你身上，\n");
		printf("包括任何免费的东西，都不一定是免费的，只不过在暗处标好了价格，谢谢！\n");
		printf("其实还有一个结果是你的钱被老鼠叼走了（类似的话术等等，不让你获得这几百块）\n");
		exit(0);
	}
	else
	{
		printf("很抱歉，你的钱被老鼠叼走了，请下次再来吧！！\n");
		printf("恭喜你，你浪费了几分钟时间，什么也没获得\n");
		printf("还有另有一个结果是你获得了，但是\n");
		printf("你如果真的获得了几百块，那么你提供给软件商的不止几百块的价值，\n");
		printf("羊毛出在羊身上，只不过可能不是你身上，\n");
		printf("包括任何免费的东西，都不一定是免费的，只不过在暗处标好了价格，谢谢！\n");
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
			printf("你浪费了几位很友好的朋友，但是你什么也没得到，祝愿你下次早点识别骗局\n");
			printf("珍爱生命，远离类似诈骗\n");
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
				printf("你获得了1元");
				a += 1;
				break;
			case 7:
				count--;
				printf("你获得了0.5元");
				a += 0.5;
				break;
			case 6:
				count--;
				printf("你获得了0.25元");
				a += 0.25;
				break;
			case 5:
				count--;
				printf("你获得了0.24元\n");
				printf("还差最后1分钱就能提现了，加油\n");
				Sleep(1000);
				a += 0.24;
				break;
			case 4:
				count--;
				printf("你获得了90个钻石\n");
				printf("还差最后10个钻石就能提现了，加油，100个钻石可以兑换1分钱\n");
				Sleep(1000);
				zuanshi += 90;
				break;
			case 3:
				count--;
				printf("你获得了9个钻石\n");
				printf("还差最后1个钻石就能提现了，加油，100个钻石可以兑换1分钱\n");
				Sleep(1000);
				zuanshi += 9;
				break;
			case 2:
				count--;
				printf("你获得了90个钻石碎片\n");
				printf("还差最后10个钻石碎片就能提现了，加油，100个钻石碎片可以兑换1个钻石\n");
				Sleep(1000);
				suipian += 90;
				break;
			case 1:
				count--;
				printf("你获得了9个钻石碎片\n");
				printf("还差最后1个钻石碎片就能提现了，加油，100个钻石碎片可以兑换1个钻石\n");
				Sleep(1000);
				suipian += 9;
				break;
			}
		}
		else if (tmp == 'n')
		{
			printf("恭喜你，你浪费了几分钟时间，什么也没获得\n");
			printf("天上不会掉馅饼，就算掉，你咋那么确定就是你中的呢，这个概率只能说很小,比中500万还小\n");
			printf("珍爱生命，远离类似诈骗\n");
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
	printf("恭喜你获得298.00元\n");
	Sleep(1500);
	system("cls");
	choujiang1((double)298.0);
}
int main()
{
	srand((unsigned int)time(NULL));
	printf("你有很大的几率能拿到300元\n");
	printf("你的好友XXX1，XXX2，XXX3，XXX4，都已经拿到了，就差你了\n");
	printf("你是要抽吗？？(Y抽N不抽)\n");
	while (1)
	{
		char a = input();
		if (a == 'N' || a == 'n')
		{
			system("cls");
			printf("你确定不抽吗，你的很多好友都拿到了？(Y确定N取消)\n");
			printf("XXX1:这不很简单吗？傻子才不要呢。\n");
			printf("XXX2:朋友，赶紧抢，很轻松就拿到了\n");
			printf("XXX3:三百块也是钱，你为啥都不要呢，你很有钱吗？\n");
			printf("XXX4:你月工资过一万了吗，你买房了吗，你结婚了吗，这三百块都不要，要啥？\n");
			while (1)
			{
				a = input();
				if (a == 'Y' || a == 'y')
				{
					system("cls");
					printf("恭喜你，成功躲避了诱惑！");
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