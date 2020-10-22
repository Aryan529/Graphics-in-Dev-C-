  #include <graphics.h>
 
  void ball_motion(int *x, int *y, int *flag, int *i, int val, int tmp) {
                int maxy = getmaxy();
                setcolor(YELLOW);
                setfillstyle(8,5);
                pieslice(*x, *y, 0, 360, 30);

                /* subsequent position of ball in x - axis */
                if (*i % 5 == 0)
				{
                        if (tmp) {
                                *x = *x + 3;
                        } else {
                                *x = *x - 3;
                        }
                        *i = 0;
                }

                /* subsequent position of ball in y-axis */
                if (*flag) {
                        *y = *y - 10;
                } else {
                        *y = *y + 10;
                }

                /* reached y axis maximum */
                if (*y >= maxy) {
                        *flag = 1;
                } else if (*y <= val) {
                /* reached y axix minimum */
                        *flag = 0;
                }

                *i = *i + 1;
                return;
  }


  int main() {
        int gdriver = DETECT, gmode, err;
        int x[4], y[4], stage[4], i, k = 0;
        int flag[] = {0, 1, 0, 1};
        int maxy, midy;

        initgraph(&gdriver, &gmode, "");
        err = graphresult();

        for(i = 0; i < 4; i++)
            stage[i] = 0;
        
        /* midy - mid of y axis */
        midy = getmaxy()/2;
        
        /* max of y axis */
        maxy = getmaxy();

        /* initial position of 4 balls */
        x[0] = 0, y[0] = 0;
        x[2] = getmaxx() - 100, y[2] = midy;
        x[3] = getmaxx(), y[3] = maxy;

        while (!kbhit()) {
            cleardevice();
setfillstyle(10,7);				//background colour
floodfill(0,400,getmaxcolor());
                ball_motion(&x[0], &y[0], &flag[0], &stage[0], 0, 1);
                ball_motion(&x[2], &y[2], &flag[2], &stage[2], 2, 0);
                ball_motion(&x[3], &y[3], &flag[3], &stage[3], 0, 0);
                delay(15);
        }

        getch();
        closegraph();
        return 0;
  }
