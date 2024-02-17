#include <stdio.h>
#include <dos.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
int wx[10], wo[10], win, lx, lo;
f1t9()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		line(205, 80, 205 + i, 80 + i);
		delay(50);
	}
}
f7t9()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		line(265, 140, 265 - i, 140);
		delay(50);
	}
}
f3t7()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		line(205, 140, 205 + i, 140 - i);
		delay(50);
	}
}
f3t9()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		line(265, 80, 265, 80 + i);
		delay(50);
	}
}
f1t7()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		line(205, 140, 205, 140 - i);
		delay(50);
	}
}
f1t3()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		line(205, 80, 205 + i, 80);
		delay(50);
	}
}
f2t8()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		line(235, 80, 235, 80 + i);
		delay(50);
	}
}

f4t6()
{
	int i;
	for (i = 0; i < 60; i++)
	{
		line(205, 110, 205 + i, 110);
		delay(50);
	}
}
endx()
{
	delay(2000);
	system("cls");
	printf("\n\n\t\t\tCongratulations player1 \"x\" you won");
	getch();
	exit(0);
}
endo()
{
	delay(2000);
	system("cls");
	printf("\n\n\t\t\tCongratulations player2 \"o\" you won");
	getch();
	getch();
	exit(0);
}
xwin()
{
	int i, j, k;
	for (i = 0; i < 9; i++)
	{
		if (wx[i] == 1)
		{
			for (j = 0; j < 9; j++)
			{
				if (wx[j] == 2)
				{
					for (k = 0; k < 9; k++)
					{
						if (wx[k] == 3)
						{
							win = 888;
							f1t3();
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wx[i] == 1)
		{
			for (j = 0; j < 9; j++)
			{
				if (wx[j] == 5)
				{
					for (k = 0; k < 9; k++)
					{
						if (wx[k] == 9)
						{
							win = 888;
							f1t9();
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wx[i] == 1)
		{
			for (j = 0; j < 9; j++)
			{
				if (wx[j] == 4)
				{
					for (k = 0; k < 9; k++)
					{
						if (wx[k] == 7)
						{
							win = 888;
							f1t7();
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wx[i] == 4)
		{
			for (j = 0; j < 9; j++)
			{
				if (wx[j] == 5)
				{
					for (k = 0; k < 9; k++)
					{
						if (wx[k] == 6)
						{
							win = 888;
							f4t6();
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wx[i] == 7)
		{
			for (j = 0; j < 9; j++)
			{
				if (wx[j] == 8)
				{
					for (k = 0; k < 9; k++)
					{
						if (wx[k] == 9)
						{
							win = 888;
							f7t9();
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wx[i] == 7)
		{
			for (j = 0; j < 9; j++)
			{
				if (wx[j] == 5)
				{
					for (k = 0; k < 9; k++)
					{
						if (wx[k] == 3)
						{
							win = 888;
							f3t7();
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wx[i] == 2)
		{
			for (j = 0; j < 9; j++)
			{
				if (wx[j] == 5)
				{
					for (k = 0; k < 9; k++)
					{
						if (wx[k] == 8)
						{
							win = 888;
							f2t8();
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wx[i] == 3)
		{
			for (j = 0; j < 9; j++)
			{
				if (wx[j] == 6)
				{
					for (k = 0; k < 9; k++)
					{
						if (wx[k] == 9)
						{
							win = 888;
							f3t9();
						}
					}
				}
			}
		}
	}
	//return win;
}
owin()
{
	int i, j, k;
	for (i = 0; i < 9; i++)
	{
		if (wo[i] == 1)
		{
			for (j = 0; j < 9; j++)
			{
				if (wo[j] == 2)
				{
					for (k = 0; k < 9; k++)
					{
						if (wo[k] == 3)
						{
							win = 999;
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wo[i] == 1)
		{
			for (j = 0; j < 9; j++)
			{
				if (wo[j] == 5)
				{
					for (k = 0; k < 9; k++)
					{
						if (wo[k] == 9)
						{
							win = 999;
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wo[i] == 1)
		{
			for (j = 0; j < 9; j++)
			{
				if (wo[j] == 4)
				{
					for (k = 0; k < 9; k++)
					{
						if (wo[k] == 7)
						{
							win = 999;
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wo[i] == 4)
		{
			for (j = 0; j < 9; j++)
			{
				if (wo[j] == 5)
				{
					for (k = 0; k < 9; k++)
					{
						if (wo[k] == 6)
						{
							win = 999;
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wo[i] == 7)
		{
			for (j = 0; j < 9; j++)
			{
				if (wo[j] == 8)
				{
					for (k = 0; k < 9; k++)
					{
						if (wo[k] == 9)
						{
							win = 999;
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wo[i] == 7)
		{
			for (j = 0; j < 9; j++)
			{
				if (wo[j] == 5)
				{
					for (k = 0; k < 9; k++)
					{
						if (wo[k] == 3)
						{
							win = 999;
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wo[i] == 2)
		{
			for (j = 0; j < 9; j++)
			{
				if (wo[j] == 5)
				{
					for (k = 0; k < 9; k++)
					{
						if (wo[k] == 8)
						{
							win = 999;
						}
					}
				}
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		if (wo[i] == 3)
		{
			for (j = 0; j < 9; j++)
			{
				if (wo[j] == 6)
				{
					for (k = 0; k < 9; k++)
					{
						if (wo[k] == 9)
						{
							win = 999;
						}
					}
				}
			}
		}
	}
	//return win;
}
xmark()
{
	int x, j = 0;
	printf("p1 enter position");
	scanf("%d", &x);
	//for(lx=0;lx<9;lx++){
	if (x == 1)
	{
		wx[lx] = x;
		outtextxy(202, 72, "x");
	}
	if (x == 2)
	{
		wx[lx] = x;
		outtextxy(233, 72, "x");
	}
	if (x == 3)
	{
		wx[lx] = x;
		outtextxy(264, 72, "x");
	}
	if (x == 4)
	{
		wx[lx] = x;
		outtextxy(202, 105, "x");
	}
	if (x == 5)
	{
		wx[lx] = x;
		outtextxy(233, 105, "x");
	}
	if (x == 6)
	{
		wx[lx] = x;
		outtextxy(264, 105, "x");
	}
	if (x == 7)
	{
		wx[lx] = x;
		outtextxy(202, 134, "x");
	}
	if (x == 8)
	{
		wx[lx] = x;
		outtextxy(233, 134, "x");
	}
	if (x == 9)
	{
		wx[lx] = x;
		outtextxy(264, 134, "x");
		//}
	}
	xwin();
	if (win == 888)
	{
		endx();
	}
}
omark()
{
	int y;
	printf("p2 enter position");
	scanf("%d", &y);
	//for(ly=0;ly<9;ly++){
	if (y == 1)
	{
		wo[lo] = y;
		outtextxy(202, 72, "o");
	}
	if (y == 2)
	{
		wo[lo] = y;
		outtextxy(233, 72, "o");
	}
	if (y == 3)
	{
		wo[lo] = y;
		outtextxy(264, 72, "o");
	}
	if (y == 4)
	{
		wo[lo] = y;
		outtextxy(202, 105, "o");
	}
	if (y == 5)
	{
		wo[lo] = y;
		outtextxy(233, 105, "o");
	}
	if (y == 6)
	{
		wo[lo] = y;
		outtextxy(264, 105, "o");
	}
	if (y == 7)
	{
		wo[lo] = y;
		outtextxy(202, 134, "o");
	}
	if (y == 8)
	{
		wo[lo] = y;
		outtextxy(233, 134, "o");
	}
	if (y == 9)
	{
		wo[lo] = y;
		outtextxy(264, 134, "o");
	}
	owin();
	if (win == 999)
	{
		endo();
	}
}
void main()
{
	int gm = DETECT, gd, x, p, pc = 0, i, j;
	clrscr();
	initgraph(&gm, &gd, "C:\\TURBOC3\\BGI");
	outtextxy(210, 170, "LOADING");
	for (i = 0; i < 80; i++)
	{
		line(225, 70, 225, 70 + i);
		line(195, 100, 195 + i, 100);
		delay(50);
	}
	for (i = 0; i < 80; i++)
	{
		line(245, 70, 245, 70 + i);
		line(195, 120, 195 + i, 120);
		delay(40);
	}
	delay(40);
	system("cls");
	initgraph(&gm, &gd, "C:\\TURBOC3\\BGI");
	line(225, 70, 225, 150);
	line(195, 100, 275, 100);
	line(195, 120, 275, 120);
	line(245, 70, 245, 150);
	//outtextxy(100,160,"RECTANGLE");
	for (i = 0; i < 9; i++)
	{
		if (pc % 2 == 0)
		{

			xmark();
			lx++;
		}
		else
		{
			omark();
			lo++;
		}
		pc++;
	}
	getch();
	closegraph();
}