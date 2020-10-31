#include<graphics.h>                                                                                                   
#include<stdio.h>
int x1,y1,x2,y2,x3,y3,mx,my;
 
void draw();
void scale();
int main()
{
   int gd=DETECT,gm;
   int c;
   initgraph(&gd,&gm,"");
   printf("Enter the 1st point for the triangle:");
   scanf("%d%d",&x1,&y1);
   printf("Enter the 2nd point for the triangle:");
   scanf("%d%d",&x2,&y2);
   printf("Enter the 3rd point for the triangle:");
   scanf("%d%d",&x3,&y3);
   draw();
   scale();
}
 void draw()
{
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x3,y3,x1,y1);
}
void scale()
{
   int x,y,a1,a2,a3,b1,b2,b3;
   int mx,my;
   
   printf("Enter the scalling coordinates");
   scanf("%d%d",&x,&y);
   
   mx=(x1+x2+x3)/3;
   my=(y1+y2+y3)/3;
   
   cleardevice();
   
   a1=mx+(x1-mx)*x;
   b1=my+(y1-my)*y;
   
   a2=mx+(x2-mx)*x;
    b2=my+(y2-my)*y;
    
    a3=mx+(x3-mx)*x;
   b3=my+(y3-my)*y;
   
   
   line(a1,b1,a2,b2);
   line(a2,b2,a3,b3);
   line(a3,b3,a1,b1);
   
   draw();
   
   getch();

}
