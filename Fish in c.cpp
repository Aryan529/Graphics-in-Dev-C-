#include<graphics.h>

int main()
{
	
	int gd=DETECT,gm;
	int newx=0,newy=0,inc_y=5;
	initgraph(&gd,&gm," ");
	
	cleardevice();
	
	while(!kbhit()) 
	{
		
		ellipse(540-newx,200,30,330,100,40);   //fish's body
		
		//setfillstyle(1,6);
		//floodfill(20,60,getmaxcolor());
		
		circle(455-newx,193,4);					//eye
		line(440-newx,200,470-newx,200);  //mouth
		line(577-newx,185,630-newx,150);  // top tail
		line(577-newx,215,630-newx,250);  // last tail
		line(630-newx,150,630-newx,250);  //2nd last tail
		line(577-newx,200,630-newx,200);
		line(577-newx,192,630-newx,175);  //2nd top tail
		line(577-newx,207,630-newx,220);
		line(500-newx,190,540-newx,150+newy); //fins
		line(530-newx,190,540-newx,150+newy);
		
		line(0,100,800,100);
		setfillstyle(11,3);
		floodfill(99,300,getmaxcolor());
		
		
		if(newx>=500)
		    newx=0;
		if(newy>=82)
		    inc_y=-5;
		newx=newx+5;
		if(newy<=0)
		    inc_y=5;
		newy=newy+inc_y;
		delay(40);
		cleardevice();
	}
	cleardevice();
}
