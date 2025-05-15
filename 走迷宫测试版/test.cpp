#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define movea "不能在往左移动了，你要超出边界了"
#define moves "不能在往下移动了，你要超出边界了"
#define moved "不能在往右移动了，你要超出边界了"
#define movew "不能在往上移动了，你要超出边界了"
#define win "恭喜你，成功逃出迷宫！"
#define wall "这是墙，不能撞墙！"
char input()
{
	char a = _getch();
	if (a == 27)
		exit(0);
	Sleep(100);
	return a;
}
int welcome()
{
	int a;
	printf("########################\n");
	printf("##（1）开始##（0）结束##\n");
	printf("########ESC 退出########\n");
	printf("########################\n");
	do
	{
		a = input();
		if (a == 49 || a == 48)
		{
			system("cls");
			return a;
		}
		else
			printf("输入错误\n");
	} while (1);
}
void dayinditu(char* a, int x, int y)
{
	system("cls");
	for (int i = 0; i < x; i++)
		printf("%s\n", a + i * y);
	printf("ESC退出\n");
}
int move(char* a, int x, int y, int* newx, int* newy, char m)
{
	int old_x = *newx;
	int old_y = *newy;
	switch (m)
	{
	case 'a':
	case 'A':
		(*newy)--;
		if (*newy < 0)
		{
			printf("%s\n", movea);
			(*newy)++;
			break;
		}
		else if (a[(old_x)*y + *newy] == '*')
		{
			a[(old_x)*y + (old_y)] = ' ';
			a[(old_x)*y + *newy] = 'o';
			return 1;
		}
		else if (a[(old_x)*y + *newy] == '#')
		{
			printf("%s\n", wall);
			(*newy)++;
			break;
		}
		else if (a[(old_x)*y + *newy] == ' ')
		{
			a[(old_x)*y + (old_y)] = ' ';
			a[(old_x)*y + *newy] = 'o';
		}
		dayinditu(a, x, y);
		break;
	case 's':
	case 'S':
		(*newx)++;
		if (*newx >= x)
		{
			printf("%s\n", moves);
			(*newx)--;
			break;
		}
		else if (a[(*newx) * y + old_y] == '*')
		{
			a[(old_x)*y + (old_y)] = ' ';
			a[(*newx) * y + old_y] = 'o';
			return 1;
		}
		else if (a[(*newx) * y + old_y] == '#')
		{
			printf("%s\n", wall);
			(*newx)--;
			break;
		}
		else if (a[(*newx) * y + old_y] == ' ')
		{
			a[(old_x)*y + (old_y)] = ' ';
			a[(*newx) * y + old_y] = 'o';
		}
		dayinditu(a, x, y);
		break;
	case 'd':
	case 'D':
		(*newy)++;
		if (*newy >= y)
		{
			printf("%s\n", moved);
			(*newy)--;
			break;
		}
		else if (a[(old_x)*y + *newy] == '*')
		{
			a[(old_x)*y + (old_y)] = ' ';
			a[(old_x)*y + *newy] = 'o';
			return 1;
		}
		else if (a[(old_x)*y + *newy] == '#')
		{
			printf("%s\n", wall);
			(*newy)--;
			break;
		}
		else if (a[(old_x)*y + *newy] == ' ')
		{
			a[(old_x)*y + (old_y)] = ' ';
			a[(old_x)*y + *newy] = 'o';
		}
		dayinditu(a, x, y);
		break;
	case 'w':
	case 'W':
		(*newx)--;
		if (*newx < 0)
		{
			printf("%s\n", movew);
			(*newx)++;
			break;
		}
		else if (a[(*newx) * y + old_y] == '*')
		{
			a[(old_x)*y + (old_y)] = ' ';
			a[(*newx) * y + old_y] = 'o';
			return 1;
		}
		else if (a[(*newx) * y + old_y] == '#')
		{
			printf("%s\n", wall);
			(*newx)++;
			break;
		}
		else if (a[(*newx) * y + old_y] == ' ')
		{
			a[(old_x)*y + (old_y)] = ' ';
			a[(*newx) * y + old_y] = 'o';
		}
		dayinditu(a, x, y);
		break;
	}
	return 0;
}
void GuankaA()
{
	int newx = 1, newy = 0;
	char map[5][6] =
	{ "#####",
	 "o # *",
	 "# # #",
	 "#   #",
	 "#####" };
	dayinditu((char*)map, 5, 6);
	while (1)
	{
		char Move = input();
		if (move((char*)map, 5, 6, &newx, &newy, Move))
		{
			dayinditu((char*)map, 5, 6);
			printf("%s\n", win);
			break;
		}
	}
}
void GuankaB1()
{
	int newx = 8, newy = 0;
	char map[10][11] =
	{
	"##########",
	"###      #",
	"#   #### #",
	"# #####  #",
	"#    ## ##",
	"#### ##  #",
	"# ## ### #",
	"#    ### #",
	"o ###*   #",
	"##########",
	};
	dayinditu((char*)map, 10, 11);
	while (1)
	{
		char Move = input();
		if (move((char*)map, 10, 11, &newx, &newy, Move))
		{
			dayinditu((char*)map, 10, 11);
			printf("%s\n", win);
			break;
		}
	}
}
void GuankaB2()
{
	int newx = 8, newy = 0;
	char map[10][11] =
	{
	"##########",
	"###      #",
	"#   # ####",
	"# ##    ##",
	"##   ## ##",
	"# ## ## *#",
	"# ## ##  #",
	"#     ## #",
	"o ###    #",
	"##########",
	};
	dayinditu((char*)map, 10, 11);
	while (1)
	{
		char Move = input();
		if (move((char*)map, 10, 11, &newx, &newy, Move))
		{
			dayinditu((char*)map, 10, 11);
			printf("%s\n", win);
			break;
		}
	}
}
void GuankaC1()
{
	int newx = 10, newy = 0;
	char map[20][21] =
	{
	"####################",
	"####       #########",
	"#### #####   #######",
	"####  ######  ######",
	"#####    ####  #####",
	"######## #####  ####",
	"#        ###### ####",
	"# ############  ####",
	"# ###########  #####",
	"# ######   *  ####  ",
	"o  ##   #######    #",
	"## ## ######### ####",
	"## ##    #####   ###",
	"## ##### ####  #####",
	"## ##### ###  ######",
	"#  #####     #######",
	"# ########## #######",
	"#     ###    #######",
	"####      ##########",
	"####################",
	};
	dayinditu((char*)map, 20, 21);
	while (1)
	{
		char Move = input();
		if (move((char*)map, 20, 21, &newx, &newy, Move))
		{
			dayinditu((char*)map, 20, 21);
			printf("%s\n", win);
			break;
		}
	}
}
void GuankaC2()
{
	int newx = 10, newy = 0;
	char map[20][21] =
	{
	"####################",
	"####       #########",
	"#### ### #   #######",
	"######## ###  ######",
	"#####    ####  #####",
	"######## #####  ####",
	"#        ###### ####",
	"# #### #######  ####",
	"# ###  ######  #####",
	"# #  ###   #  #### *",
	"o  ##   #######    #",
	"## ## ####      ####",
	"## ##      ###   ###",
	"## ##### ####  # ###",
	"## ##### #######  ##",
	"#  #####         ###",
	"# ########## #######",
	"#     ###       ####",
	"####      ##########",
	"####################",
	};
	dayinditu((char*)map, 20, 21);
	while (1)
	{
		char Move = input();

		if (move((char*)map, 20, 21, &newx, &newy, Move))
		{
			dayinditu((char*)map, 20, 21);
			printf("%s\n", win);
			break;
		}
	}
}
void GuankaC3()
{
	int newx = 10, newy = 0;
	char map[20][21] =
	{
	"####################",
	"####       # #######",
	"#### ### #   #######",
	"######## ###    ####",
	"#####    ####  #####",
	"# ###### #####  ####",
	"#        ###### ####",
	"# ###  ####### #####",
	"# ### #######  #####",
	"# #  #*#   #  ####  ",
	"o  ##   #### ##    #",
	"## ## ####      ####",
	"## ##      ###   ###",
	"## ##### ####  # ###",
	"## ##### ####### ###",
	"#    ###          ##",
	"# ########## #######",
	"#     ###       ####",
	"####       #########",
	"####################",
	};
	dayinditu((char*)map, 20, 21);
	while (1)
	{
		char Move = input();
		if (move((char*)map, 20, 21, &newx, &newy, Move))\
		{
			dayinditu((char*)map, 20, 21);
			printf("%s\n", win);
			break;
		}
	}
}
void xuanze()
{
	printf("###############\n");
	printf("###(1)难 度1###\n");
	printf("###(2)难 度2###\n");
	printf("###(3)难 度3###\n");
	printf("###(4)难 度4###\n");
	printf("###(5)难 度5###\n");
	printf("###(6)难 度6###\n");
	printf("####ESC退出####\n");
	printf("###############\n");
	printf("注意！！移动方法W上S下A左D右\n");
	printf("#表示墙，*表示出口，o表示当前位置\n");
}
int main()
{
	void (*play[6])() = { GuankaA,GuankaB1,GuankaB2,GuankaC1,GuankaC2,GuankaC3 };
	do
	{
		switch (welcome())
		{
		case 48:
			return 0;
		case 49:
			xuanze();
			while (1)
			{
				int a = input();
				if (a <= 54 && a >= 49)
				{
					play[a - 49]();
					break;
				}
				else if (a == 27)
					break;
			}
			break;
		}
	} while (1);
	return 0;
}