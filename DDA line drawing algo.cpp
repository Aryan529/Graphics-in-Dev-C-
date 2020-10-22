#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>
 
int main( )
{
	int x,y,x1,y1,x2,y2,dx,dy,step;
	int i,gd=DETECT,gm;
	char arr[40];
 
	initgraph(&gd,&gm,"");
 
	printf("Enter the value of x1 and y1 : ");
	scanf("%d%d",&x1,&y1);
	
	printf("Enter the value of x2 and y2: ");
	scanf("%d%d",&x2,&y2);
	
	sprintf(arr,"(%d,%d)",x1,y1);
	outtextxy(x1,y1,arr);
	
	sprintf(arr,"(%d,%d)",x2,y2);
	outtextxy(x2,y2,arr);
 
	dx=abs(x2-x1);
	dy=abs(y2-y1);
 
	if(dx>=dy)
		step=dx;
	else
		step=dy;
 
	dx=dx/step;
	dy=dy/step;
 
	x=x1;
	y=y1;
 
	i=1;
	while(i<=step)
	{
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(30);
	}
 
	closegraph();
}
