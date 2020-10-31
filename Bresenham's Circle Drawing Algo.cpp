#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int gd=DETECT,gm;
int r,x,y,p,xc,yc;

initgraph(&gd,&gm,"");
cleardevice();

printf("*****Bresenham's Circle Drawing*****\n");

printf("Enter the coordinates :\n");
scanf("%d %d",&xc,&yc);

printf("Enter r value :\n");
scanf("%d",&r);


char c0[50];

sprintf(c0,"( %d , %d )",xc,yc);                           
outtextxy(xc,yc,c0);

 x= 0;
 y= r;
 putpixel(xc+x,yc-y,8);

 p=3-(2*r);

 for(x=0;x<=y;x++)
 {
 if(p<0)
 {
 y=y;
 p=(p+(4*x)+6);
 }
 else
 {
 y=y-1;
 p=p+(4*(x-y)+10);
 }
 
 
 putpixel(xc+x,yc-y,8);
 putpixel(xc-x,yc-y,8);
 putpixel(xc+x,yc+y,8);
 putpixel(xc-x,yc+y,8);
 putpixel(xc+y,yc-x,8);
 putpixel(xc-y,yc-x,8);
 putpixel(xc+y,yc+x,8);
 putpixel(xc-y,yc+x,8);
 
 }

getch();

closegraph();
}
