#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include"dos.h"
 int g;
 int f;
 void zx(int q,char *far string)
 {
   setcolor(10);
   settextstyle(6,HORIZ_DIR,2);
   outtextxy(98, q,string);
 }
 void close()
{
  getch();

 for (g=0,f=0;g<100,f<160;g++,f--)
  {
  setcolor(random(1));
  rectangle(random(g),random(f),random(220),random(480));
  }

 }
 void main()
{
   int gdriver = DETECT, gmode,l,m,a,n,k,k1,k2,k3,k4;
   initgraph(&gdriver, &gmode, "");
   for(l=0,m=0,a=639,n=479;l<322,m<242,a>318,n>238;l++,m++,a--,n--)
   {
    setcolor(random(15));
    line(a,l,m,n);
    line(a,n,m,l);

   settextstyle(7,HORIZ_DIR,5);
   outtextxy(100,200,"GEOTHERMAL ENERGY");
    delay(10);
    }
   setcolor(14);
   settextstyle(7,HORIZ_DIR,5);
   outtextxy(100,200,"GEOTHERMAL ENERGY");
   getch();
   for(l=0,m=0,a=639,n=479;l<322,m<242,a>318,n>238;l++,m++,a--,n--)
   {
    setcolor(random(0));
    line(a,l,m,n);
    line(a,n,m,l);

   settextstyle(7,HORIZ_DIR,5);
   outtextxy(100,200,"GEOTHERMAL ENERGY");
    delay(10);
    }


   setcolor(12);
   rectangle(0,0,639,479);
   rectangle(20,20,619,459);
   setfillstyle(SOLID_FILL,4);
   floodfill(10,10,12);

 int r1;
 for(r1=0;r1<70;r1++)
 {

  delay(25);
  setcolor(random(15+r1));
circle(60,240,random(30));
circle(60,150,random(30));
circle(570,150,random(30));
circle(570,240,random(30));
circle(60,330,random(30));
circle(570,330,random(30));
circle(60,420,random(30));
circle(570,420,random(30));
line(570,450,60,450);
line(570,120,60,120);
settextstyle(3,HORIZ_DIR,4);
outtextxy(160,30,"GEOTHERMAL ENERGY");
outtextxy(190,50,"~~~~~~~~~~~");

setcolor(9);
outtextxy(160,28,"GEOTHERMAL ENERGY");
outtextxy(190,48,"~~~~~~~~~~~");
}
setcolor(14);
settextstyle(6,HORIZ_DIR,1);
getch();

zx(120,"The word GEOTHERMAL is derived from GEO-earth   ");
delay(9);
zx(150,"& thermal heat. Earth's core is very hot.Geother-   ");
delay(9);
zx(180,"mal reservooirs are formed by rain water seeping");
delay(9);
zx(210,"through the earths crust in to porous hot rocks . ");
delay(9);
zx(240,"Most of them contains of hot water & steam .It is");
delay(9);
zx(270,"obtained by drilling wells. Hot water &steam mixt-");
delay(9);
zx(300,"ure is used to generate electricity. Once water is ");
delay(9);
zx(330,"been used it is injected back into the ground . It ");
delay(9);
zx(360,"is non-polluting . The hot water steam is used for");
delay(9);
zx(390,"direct heating of houses & industries. Iceland  gets");
delay(9);
zx(420,"more of the GEOTHERMAL energy.   ");
getch();
close();

  setcolor(4);
  settextstyle(3,HORIZ_DIR,5);
 outtextxy ( 120,50,"GEOTHERMAL ENERGY");
  outtextxy(120,90,"~~~~~~~~~~~~~~");
  setcolor(9);
  settextstyle(3,HORIZ_DIR,5);
 outtextxy ( 117,47,"GEOTHERMAL ENERGY");
 outtextxy(117,87,"~~~~~~~~~~~~~~");
   setcolor(10);
   settextstyle(6,HORIZ_DIR,2);
  outtextxy(75,180,"                              Geothermal Power Plant     " );

 //-d-i-a-g-r-a-m-
 rectangle(50,160,610,450);
 setcolor(8);
 rectangle(235,220,595,440);
 setfillstyle(SOLID_FILL,15);
 floodfill(240,230,8);
 setcolor(8);
 line(235,300,595,300);
 //1
 ellipse(282,316-10,200,300,50,20);
 ellipse(374,337-10,30,170,70,20);
 ellipse(507,314-10,207,350,90,20);

 //2
 ellipse(282,316,200,300,50,20);
 ellipse(374,337,30,170,70,20);
 ellipse(507,314,207,350,90,20);
 //3
 ellipse(282,316+10,200,300,50,20);
 ellipse(374,337+10,30,170,70,20);
 ellipse(507,314+10,207,350,90,20);

 //4
 ellipse(282,316+80,200,300,50,20);
 ellipse(374,337+80,30,170,70,20);
 ellipse(507,314+80,207,350,90,20);
 //5
 ellipse(282,316+90,200,300,50,20);
 ellipse(374,337+90,30,170,70,20);
 ellipse(507,314+90,207,350,90,20);
 //skpdkd
 setcolor(8);
 setfillstyle(SOLID_FILL,7);
 fillellipse(300,400,20,7);
 fillellipse(410,355,5,20);
 fillellipse(320,360,30,15);
 fillellipse(250,370,10,25);
 fillellipse(277,368,7,20);
 fillellipse(265,400,8,10);
 fillellipse(350,385,30,10);
 fillellipse(370,345,25,10);
 fillellipse(375,366,20,8);
 fillellipse(420,387,30,10);
 fillellipse(460,360,40,10);
 fillellipse(510,378,5,32);
 fillellipse(478,390,23,10);
 fillellipse(550,360,30,10);
 fillellipse(563,385,30,10);
 fillellipse(525,388,4,15);
 //colors
 setfillstyle(SOLID_FILL,2);
 floodfill(290,350,8);
 setfillstyle(SOLID_FILL,4);
 floodfill(290,420,8);
 setfillstyle(SOLID_FILL,6);
 floodfill(290,430,8);
 setfillstyle(SOLID_FILL,4);
 floodfill(290,340,8);
 setfillstyle(SOLID_FILL,6);
 floodfill(290,330,8);
 setfillstyle(SOLID_FILL,14);
 floodfill(290,320,8);
 //power plant

 line(235,280,300,280);
 line(300,280,300,260);
 line(300,260,295,260);
 ellipse(285+5,260,0,180,5,15);
 line(280+5,260,275+5,260);
 ellipse(270+5,260,0,180,5,15);
 line(270,260,265,260);
 line(265,260,265,272);
 line(265,272,235,272);
 setfillstyle(SOLID_FILL,0);
 floodfill(240,275,8);
 //production well
 //line(400,290,425,290);
 line(400,290,408,260);
 line(408,260,417,260);
 line(417,260,425,290);
 line(400,290,404,300);
 line(404,300,412.5,290);
 line(412.5,290,421,300);
 line(421,300,425,290);
 setfillstyle(SOLID_FILL,9);
 floodfill(408,290,8);
 //eterf
 setcolor(0);
 line(285,280,285,290);
 line(285,290,520,290);
 line(412.5,260,412.5,376);
 line(520,290,520,370);
 //latel
  settextstyle(6,HORIZ_DIR,2);
delay(50);
setcolor(10);
outtextxy(75,180," * Factometer *     " );
setcolor(1);
delay(50);
setcolor(10);
outtextxy(55,210,"In India northwestern ");
delay(50);
outtextxy(55,240,"himalayas & western ");
delay(50);
outtextxy(55,270,"coast are geothermal  " );
delay(50);
outtextxy(55,300,"areas.Geothermal");
delay(50);
outtextxy(55,330,"manifestations are " );
delay(50);
outtextxy(55,360,"spread wide in India");
delay(50);
outtextxy(55,390,"in the form of 340" );
delay(50);
outtextxy(55,420," hot spring sites." );
a=0;
while(a!=20)
{
 a+=1;
 setcolor(12);
 setfillstyle(SOLID_FILL,12);
 fillellipse(300,400,20,7);
 fillellipse(410,355,5,20);
 fillellipse(320,360,30,15);
 fillellipse(250,370,10,25);
 fillellipse(277,368,7,20);
 fillellipse(265,400,8,10);
 fillellipse(350,385,30,10);
 fillellipse(370,345,25,10);
 fillellipse(375,366,20,8);
 fillellipse(420,387,30,10);
 fillellipse(460,360,40,10);
 fillellipse(510,378,5,32);
 fillellipse(478,390,23,10);
 fillellipse(550,360,30,10);
 fillellipse(563,385,30,10);
 fillellipse(525,388,4,15);

 setcolor(7);
 setfillstyle(SOLID_FILL,7);
 fillellipse(300,400,20,7);
 fillellipse(410,355,5,20);
 fillellipse(320,360,30,15);
 fillellipse(250,370,10,25);
 fillellipse(277,368,7,20);
 fillellipse(265,400,8,10);
 fillellipse(350,385,30,10);
 fillellipse(370,345,25,10);
 fillellipse(375,366,20,8);
 fillellipse(420,387,30,10);
 fillellipse(460,360,40,10);
 fillellipse(510,378,5,32);
 fillellipse(478,390,23,10);
 fillellipse(550,360,30,10);
 fillellipse(563,385,30,10);
 fillellipse(525,388,4,15);
 //lable
  setcolor(1);
 settextstyle(2,HORIZ_DIR,5);
 outtextxy(310,222,"  GEOTHERMAL POWER PLANT");
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(305,250,"Power Plant");
 outtextxy(350,260,"            Production ");
 outtextxy(355,270,"            Well");
 outtextxy(500,275,"Injection Well");
 outtextxy(360,380,"Geothermal Reservoir");
 settextstyle(2,HORIZ_DIR,5);
 outtextxy(360,415,"    Magma");

 setcolor(0);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(360,380,"Geothermal Reservoir");
}
 getch();

   }
