#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int gd,gm,x,y,end,p,x1,x2,y1,y2,dx,dy;
	char arr[40];
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"");
	
	setbkcolor(8);
	
	printf("Enter the value of x1 : ");
	scanf("%d",&x1);
	
	printf("Enter the value of y1 : ");
	scanf("%d",&y1);
	
	printf("Enter the value of x2 : ");
	scanf("%d",&x2);
	
	printf("Enter the value of y2 : ");
	scanf("%d",&y2);
	
	sprintf(arr,"(%d,%d)",x1,y1);
	outtextxy(x1,y1,arr);
	
	sprintf(arr,"(%d,%d)",x2,y2);
	outtextxy(x2,y2,arr);
	
	dx=abs(x1-x2);
	dy=abs(y1-y2);
	p = 2*dy-dx;
	
	if(x1>x2)
	{
		x=x2;
		y=y2;
		end=x1;
	}
	else
	{
		x=x1;
		y=y1;
		end=x2;
	}
	putpixel(x,y,WHITE);
	
	while(x<=end)
	{
		if(p<0)
		{
			x++;
			p=p+2*dy;
		}
		else
		{
			x++;
			y++;
			p=p+2*(dy-dx);
		}
		putpixel(x,y,GREEN);
		delay(60);
	}
	
	getch();
	closegraph();
	return 0;
}
