#include<graphics.h>
void b_fill(int x,int y,int f,int b)
{
  int c;
  c=getpixel(x,y);
  if((c!=b)&&(c!=f))
  {
      putpixel(x,y,f);
      
      b_fill(x+1,y,f,b);
      b_fill(x,y+1,f,b);
      b_fill(x+1,y+1,f,b);
      b_fill(x-1,y-1,f,b);
      b_fill(x-1,y,f,b);
      b_fill(x,y-1,f,b);
      b_fill(x-1,y+1,f,b);
      b_fill(x+1,y-1,f,b);
      
      delay(60);
  }
}

int main()
{
  int gd=DETECT,gm;
  
  initgraph(&gd,&gm,"");
  
  rectangle(100,100,200,200);
  
  b_fill(101,101,10,15);
  
  getch();
}
