#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"stdlib.h"
#include"complex.h"
void main()
{
 int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
   setcolor(12);
   rectangle(0,0,639,479);
    rectangle(20,20,639-20,479-20);
  setfillstyle(BKSLASH_FILL,9);
  floodfill(10,10,12);
  int pie,r,x,y;
    pie=3.14;

 for(r=0;r<1550+345;r++)
 {

  x=320+230*sin(pie+r);
  y=240+120*cos(pie-r);
  setcolor(1);
  circle(x,y,random(25));

}
 settextstyle(7,HORIZ_DIR,4);
r=0;
   while(r!=345)
 {
  r+=1;
 delay(14);
 setcolor(14);
 outtextxy(190,220,"HYDRO POWER");
 setcolor(4);
 outtextxy(190,220,"HYDRO POWER");
}
   setcolor(14);
 outtextxy(190,220,"HYDRO POWER");

  getch();
      }

