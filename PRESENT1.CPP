#include"graphics.h"
#include"conio.h"
#include"dos.h"
#include"stdlib.h"
void closer()
{
  int r1,r2,r3,r4;
 for(r1=320,r2=321,r3=240,r4=241;r1>0,r2<640,r3>-90,r4<580;r1--,r2++,r3--,r4++)
 {

  delay(6);
  setcolor(0);
  line(r1,0,r1,240);
  line(r2,241,r2,480);
  line(321,r3,640,r3);
  line(0,r4,320,r4);


 }



}
void main()
{
 int d=DETECT,m,loo,loo2,loo3,c;
 initgraph(&d,&m,"C:\\TC\\BGI");





 for(loo=0;loo<361;loo++)
 {
   setcolor(9);
   ellipse(320,430,0,loo,290,40);
   ellipse(320,330,0,loo,290,40);
   ellipse(320,130,0,loo,290,40);
   ellipse(320,230,0,loo,290,40);
   ellipse(50,240,0,loo,40,290);
   ellipse(590,240,0,loo,40,290);

 }

 setfillstyle(SOLID_FILL,5);
 //1st
 floodfill(50,130,9);
 floodfill(580,130,9);

 //2st
 //putpixel(50,230,15);
 floodfill(50,230,9);
 floodfill(580,230,9);
 //3
 floodfill(50,330,9);
 floodfill(580,330,9);
 //4
 floodfill(50,430,9);
 floodfill(580,430,9);

  for(loo2=1;loo2<6;loo2++)
  {
   delay(100);
   setcolor(loo2);
   settextstyle(8,HORIZ_DIR,loo2);
   outtextxy(150,10,"PRESENTED-BY");
   delay(100);
   setcolor(0);
   settextstyle(8,HORIZ_DIR,loo2);
   outtextxy(150,10,"PRESENTED-BY");

  }
 setcolor(12);
 settextstyle(8,HORIZ_DIR,loo2);
 outtextxy(110,10,"PRESENTED-BY");

 //abhinav
 setfillstyle(SOLID_FILL,4);
 floodfill(50,130,9);
 floodfill(580,130,9);

 for(loo3=1;loo3<46;loo3++)
 {

  c=random(256);
  delay(10);
  setcolor(c);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(140,115,"     ABHINAV KULKARNI");
  delay(10);

 }
 setfillstyle(SOLID_FILL,5);
 floodfill(50,130,9);
 floodfill(580,130,9);

 //AKSHAY
 setfillstyle(SOLID_FILL,4);
 floodfill(50,230,9);
 floodfill(580,230,9);
 for(loo3=1;loo3<53;loo3++)
 {

  c=random(256);
  delay(10);
  setcolor(c);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(140,215,"      AKSHAY AWTADE     ");
  delay(10);

 }
 setfillstyle(SOLID_FILL,5);
 floodfill(50,230,9);
 floodfill(580,230,9);
 //MAC
 setfillstyle(SOLID_FILL,4);
 floodfill(50,330,9);
 floodfill(580,330,9);
 for(loo3=1;loo3<63;loo3++)
 {

  c=random(256);
  delay(10);
  setcolor(c);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(140,315,"      MAKRAND LANGHE      ");
  delay(10);

 }
 setfillstyle(SOLID_FILL,5);
 floodfill(50,330,9);
 floodfill(580,330,9);
 //AKASH
 setfillstyle(SOLID_FILL,4);
 floodfill(50,430,9);
 floodfill(580,430,9);
 for(loo3=1;loo3<63;loo3++)
 {

  c=random(256);
  delay(10);
  setcolor(c);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(140,415,"        AKASH PATIL        ");
  delay(10);

 }
 setfillstyle(SOLID_FILL,5);
 floodfill(50,430,9);
 floodfill(580,430,9);
 getch();
 closer();


}
