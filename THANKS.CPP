#include"stdio.h"
#include"stdlib.h"
#include"graphics.h"
#include"conio.h"
#include"alloc.h"
#include"dos.h"
void blast(int x,int y,int c)
{
setcolor(c);
    line(x,y,x,y-47);
    line(x,y,x+14,y+39);
    line(x,y,x+28,y+37);
    line(x,y,x+34,y-23);
    line(x,y,x+45,y-14);
    line(x,y,x+41,y-11);
  line(x,y,x+47,y+12);
  line(x,y,x+35,y+20);
  line(x,y,x+33,y+35);
  line(x,y,x+17,y+3);
  line(x,y,x,y+48);
line(x,y,x-15,y+40);
line(x,y,x-30,y+39);
line(x,y,x-34,y+21);
line(x,y,x-46,y+12);
line(x,y,x-42,y);
   line(x,y,x-45,y-12);
   line(x,y,x-35,y-24);
   line(x,y,x-31,y-35);
   line(x,y,x-18,y-38);
 }
void p1(int x,int y)
{
 setfillstyle(SOLID_FILL,0);
 floodfill(x,y,7);//1
 floodfill(x+20,y+20,7);
 floodfill(x+50,y,7);//1
 floodfill(x+70,y+20,7);//4

 setfillstyle(SOLID_FILL,8);
 floodfill(x+20,y,7);//2
 floodfill(x,y+20,7);//3
 floodfill(x+70,y,7);//2
 floodfill(x+50,y+20,7);//3


}
void p2(int x,int y)
{
 setfillstyle(SOLID_FILL,8);
 floodfill(x,y,7);//1
 floodfill(x+20,y+20,7);
 floodfill(x+50,y,7);//1
 floodfill(x+70,y+20,7);//4

 setfillstyle(SOLID_FILL,0);
 floodfill(x+20,y,7);//2
 floodfill(x,y+20,7);//3
 floodfill(x+70,y,7);//2
 floodfill(x+50,y+20,7);//3


}

void main()
{
 int gdriver=DETECT,gmode,tarea,tx,tarea1,ty,tx11,ty11,ts,tl;
 initgraph(&gdriver,&gmode,"");
 void *buff,*buff1;

 moveto(540,460);
 lineto(630,460);
 lineto(635,420);
 lineto(595,420);
 lineto(595,380);
 lineto(580,380);
 lineto(580,420);
 lineto(535,420);
 lineto(540,460);

 setfillstyle(SOLID_FILL,2);
 floodfill(545,455,15);
 setcolor(7);
 circle(560,450,20);
 circle(610,450,20);
 setfillstyle(SOLID_FILL,8);

 floodfill(560,461,7);
 floodfill(560,459,7);



 floodfill(610,461,7);
 floodfill(610,459,7);
 line(540,450,580,450);
 line(560,430,560,470);

 line(590,450,630,450);
 line(610,430,610,470);









 tarea=imagesize(534,379,636,471);
 buff=malloc(tarea);
 getimage(534,379,636,471,buff);
 p1(550,440);

 p2(550,440);


 tx11=550,ty11=440;



 for(tx=534;tx>268;tx--)
 {



  delay(1);
  putimage(tx,379,buff,COPY_PUT);
  if(tx%6==0)
  {

   p1(tx11,ty11);
   goto end;

  }

  if(tx%6==1)
  {

   p2(tx11,ty11);
   goto end;
  }
  if(tx%6==2)
  {

   p1(tx11,ty11);
   goto end;
  }
  if(tx%6==3)
  {

   p2(tx11,ty11);
   goto end;
  }
  if(tx%6==4)
  {

   p1(tx11,ty11);
   goto end;
  }
  if(tx%6==5)
  {

   p2(tx11,ty11);
   goto end;
  }

  end:
  tx11-=1;


 }


 circle(322,360,10);
 setfillstyle(SOLID_FILL,1);
 floodfill(322,360,7);
 tarea1=imagesize(311,349,333,371);
 buff1=malloc(tarea1);
 getimage(311,349,333,371,buff1);

 for(ty=349;ty>100;ty--)
 {
  delay(10);
  putimage(311,ty,buff1,COPY_PUT);

 }
  //rubbing circle

 setcolor(0);
 setfillstyle(SOLID_FILL,0);
 bar(260,379,400,471);
 circle(322,111,15);
 setfillstyle(SOLID_FILL,0);
 floodfill(322,111,0);

 //diagrams
 for(ts=0;ts<260;ts++)
 {

  blast(random(640),random(480),random(15));
  delay(20);

 }

 delay(10);

 for(tl=0;tl<361;tl++)
 {
  //delay(5);
  setcolor(4);
  arc(320,240,0,tl,tl-80);
  setcolor(12);
  arc(320,240,0,tl,tl-100);
  setcolor(4);
  arc(320,240,0,tl,tl-120);
  setcolor(12);
  arc(320,240,0,tl,tl-140);
  setcolor(4);
  arc(320,240,0,tl,tl-160);
  setcolor(12);
  arc(320,240,0,tl,tl-180);
  setcolor(4);
  arc(320,240,0,tl,tl-200);
  setcolor(12);
  arc(320,240,0,tl,tl-220);
  setcolor(4);
  arc(320,240,0,tl,tl-240);

 }





     setcolor(1);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(103,50,"THANK'S");
     delay(100);
     setcolor(1);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(104,51,"THANK'S");
     delay(12);
     setcolor(1);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(105,52,"THANK'S");
     delay(120);
     setcolor(11);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(106,53,"THANK'S");
     delay(120);
     setcolor(11);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(107,54,"THANK'S");
	  delay(120);
     setcolor(11);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(285,152,"&");
     delay(110);
     setcolor(11);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(286,152,"&");
	  delay(110);
     setcolor(11);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(287,153,"&");
	  delay(110);
     setcolor(1);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(288,154,"&");

       delay(110);
     setcolor(1);
     settextstyle(7,HORIZ_DIR,9);
     outtextxy(286,152,"&");
	  setcolor(10);
     settextstyle(7,HORIZ_DIR,6);
     outtextxy(65,262,"SPECIAL THANKS");
		   setcolor(10);
     settextstyle(7,HORIZ_DIR,6);
     outtextxy(276,324,"TO");

     setcolor(9);
     setfillstyle(SOLID_FILL,9);
     bar(170-20,400,220-20,450);

     delay(50);

     delay(50);     bar(170+70-20,400,220+70-20,450);


     delay(50);     bar(170+70+70-20,400,220+70+70-20,450);


     delay(50);     bar(170+70+70+70-20,400,220+70+70+70-20,450);


     delay(50);     bar(170+70+70+70+70-20,400,220+70+70+70+70-20,450);
     setcolor(15);
     settextstyle(10,HORIZ_DIR,3);
     outtextxy(167,394,"S");
     outtextxy(167+70,394,"J");
     outtextxy(167+70+70+5,394,"I");
     outtextxy(167+70+70+70+7,394,"I");
     outtextxy(167+70+70+70+70,394,"T");

     setfillstyle(SOLID_FILL,15);
     floodfill(169,420,15);
     floodfill(250,420,15);
     floodfill(315,420,15);
     floodfill(385,420,15);
     floodfill(455,420,15);

  getch();
  getch();
}