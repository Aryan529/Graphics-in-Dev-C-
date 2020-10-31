#include<graphics.h>
#include<dos.h>
void flodfill(int x,int y,int f,int o)
{
int c;
 c=getpixel(x,y);
  if(c==o)
  {
  setcolor(f);
  putpixel (x,y,f);

   flodfill(x+1,y,f,o);
   flodfill(x,y+1,f,o);
   flodfill(x+1,y+1,f,o);
   flodfill(x-1,y-1,f,o);
   flodfill(x-1,y,f,o);
   flodfill(x,y-1,f,o);
   flodfill(x-1,y+1,f,o);
   flodfill(x+1,y-1,f,o);
   
   delay(50);
  }
}


int main()
{
	
int gd=DETECT,gm;
initgraph(&gd,&gm,"");

rectangle(50,50,100,100);

flodfill(51,51,10,0);

getch();
}
