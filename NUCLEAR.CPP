#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"stdlib.h"
#include"alloc.h"
#include"math.h"
 void fd(int r,int y,char* rtd)
 {
  settextstyle(2,HORIZ_DIR,7);
  outtextxy(r,y,rtd);
  }

void lb(int x,int y,char *text)
{
 int c;
 for(c=0;c<5;c++)
 {
  setcolor(5);
  settextstyle(2,HORIZ_DIR,5);
  outtextxy(x,y,text);
  delay(500);
  setcolor(11);
  settextstyle(2,HORIZ_DIR,5);
  outtextxy(x,y,text);
 }
}
void rha(int x,int y,int s,int c)
{
 setcolor(c);
 line(x,y,x+s,y);
 line(x+s,y,x+s-10,y-7);
 line(x+s,y,x+s-10,y+7);
}
void dva(int x,int y,int s,int c)
{
 setcolor(c);
 line(x,y,x,y+s);
 line(x,y+s,x+7,y+s-10);
 line(x,y+s,x-7,y+s-10);
}
void uva(int x,int y,int s,int c)
{
 setcolor(c);
 line(x,y,x,y-s);
 line(x,y-s,x+7,y-s+10);
 line(x,y-s,x-7,y-s+10);
}

void lha(int x,int y,int s,int c)
{
 setcolor(c);
 line(x,y,x-s,y);
 line(x-s,y,x-s+10,y-7);
 line(x-s,y,x-s+10,y+7);
}


void vvapour(int x,int y)
{
 int l;
 setcolor(15);
 for(l=90;l<275;l++)
 {
  arc(x,y,90,l,3);
  delay(1);
 }
 arc(x,y-6,270,105,3);

}
void hvapour(int x,int y)
{
 int l;
 setcolor(15);

 for(l=170;l<361;l++)
 {
  arc(x,y,170,l,3);
  delay(1);
 }
 arc(x+6,y,360,180,3);

}


void main()
{
 int d=DETECT,m,a,xs,r1,r2,r3,r4;
 initgraph(&d,&m,"C:\\TC\\BGI");

 int an,x,y,x1,y1,x11,y11,x111,y111,clor;
 double pie,pie1=3.58,pie2=0.58;

 pie=3.14;

 for(an=0;an<550;an++)
 {

  x=320+230*sin(pie+an);
  y=240+100*cos(pie-an);
  setcolor(random(15));
  circle(x,y,random(15));

  x1=320+100*sin(pie+an);
  y1=240+230*cos(pie-an);
  setcolor(random(15));
  circle(x1,y1,random(15));



  setcolor(random(15));
  circle(x1,y1,30);
  delay(1);
  setcolor(0);
  circle(x1,y1,30);

  setcolor(random(15));
  circle(x,y,30);
  delay(1);
  setcolor(0);
  circle(x,y,30);
  x=random(600);
  y=random(480);
  clor=random(15);
  setcolor(clor);
  circle(50+x,y,50);



  setcolor(0);
  circle(50+x,y,50);

 setcolor(random(15));

 settextstyle(3,HORIZ_DIR,5);
 outtextxy(150,210,"NUCLEAR ENERGY");

 }




 for(r1=320,r2=321,r3=240,r4=241;r1>0,r2<640,r3>-90,r4<580;r1--,r2++,r3--,r4++)
 {

  delay(6);
  setcolor(0);
  line(r1,0,r1,240);
  line(r2,241,r2,480);
  line(321,r3,640,r3);
  line(0,r4,320,r4);


 }
  setcolor(13);
 for(r4=0;r4<361;r4++)
 {
 delay(2);
 setcolor(13);
 ellipse (328,55,0,r4,285,48);
 setcolor(4);
 ellipse (328,57,0,r4,285,51);
 setcolor(9);
  settextstyle(7,HORIZ_DIR,6);
 outtextxy(100-24,20,"NUCLEAR ENERGY");
   setcolor(4);
  outtextxy(99-24,19,"NUCLEAR ENERGY");

 }
   setfillstyle(SOLID_FILL,14);
// fillellipse(328,55,285,48);
 setcolor(1);
  settextstyle(7,HORIZ_DIR,6);
 outtextxy(100-24,20,"NUCLEAR ENERGY");
   setcolor(4);
  outtextxy(99-24,19,"NUCLEAR ENERGY");

  for(xs=10;xs<630;xs++)
 {
setcolor(9);
delay(4);
rectangle(xs,150,630,459);
}

setcolor(14);
fd(15,160,"NUCLEAR FUSION :- Natural uranium contains 0.712% ");
delay (100);
fd(15,180,"u235 & 99.282% u238 the rest being u234 .When irra-");
delay (100);
fd(15,200,"dited with slow neutrons, the u235 nuclie undergoes ");
delay (100);
fd(15,220,"fusion & the u238 undergoes neutron capture giving  ");
delay (100);
fd(15,240,"rise to higher order elements np & pu. ");
delay (100);
fd(15,260,"u235+n..> two roughly equal fractions of mass numbers");
delay (100);
fd(15,280,"around 95 & 138. u238+n..>u239..>np239..>pu239. ");
delay (100);
fd(15,300,"whereas the fission of each u235 nucleus gives rises  ");
delay (100);
fd(15,320,"to evolution of 190-200 MeV energy & 2/3 neutrons it  ");
delay (100);
fd(15,340,"also accompanied by formation of one nuclie of pu239,  ");
delay (100);
fd(15,360,"on an average 4 grams a day. ");
  getch();
for(xs=10;xs<630;xs++)
{
 setcolor(12);
 delay(4);
 rectangle(xs,150,630,459);
}
setcolor(14);
circle(150,290,15);
circle(151,291,15);
line(166,291,200,260);
line(166,291,200,291);
line(166,291,200,322);
circle(210,332,5);
circle(212,291,5);
circle(210,249,5);
pieslice(205,332,0,361,5+5);
pieslice(207,291,0,361,5+5);
pieslice(205,249,0,361,5+5);
line(215,332,255,332);
circle(270,332,15);
circle(271,333,15);
line(215,249,255,249);
circle(270,249,15);
circle(271,250,15);
line(286,250,310,250);
line(286,250,310,270);
line(286,250,310,230);
line(286,333,310,333);
line(286,333,310,313);
line(286,333,310,356);
circle(325,333,5);
circle(325,313,5);
circle(325,356,5);
circle(325,250,5);
circle(325,270,5);
circle(325,230,5);
pieslice(320,333,0,361,5+5);
pieslice(320,313,0,361,5+5);
pieslice(320,356,0,361,5+5);
pieslice(320,250,0,361,5+5);
pieslice(320,270,0,361,5+5);
pieslice(320,230,0,361,5+5);
 setcolor(12);
 settextstyle(1,HORIZ_DIR,3);
 outtextxy( 200,400,"SPLITTING OF ATOMS");
 setcolor(14);
 circle(450,250,15);
  circle(451,251,15);
 setcolor(4);
 outtextxy(444,238,"U");
 settextstyle(1,HORIZ_DIR,2);
 outtextxy(484,243,"Uranium Atom ");

 setcolor(4);
 outtextxy(264,237,"U");
 outtextxy(263,321,"U");
 outtextxy(145,278,"U");

   setcolor(14);
   circle(491-40,251+50,5);
   line(486-40,251+50,496-40,251+50);
   settextstyle(1,HORIZ_DIR,2);
setcolor(1);
outtextxy(484,243+50,"Neutron");

getch();

for(xs=0;xs<640;xs++)
{
 setcolor(0);

 rectangle(xs,0,xs,479);
 }


 for(xs=0;xs<640;xs++)
 {

  setcolor(14);
  line(xs,0,xs,10);
  line(xs,470,xs,480);
  line(xs,15,xs,15);
  line(xs,465,xs,465);
  line(xs,18,xs,18);
  line(xs,462,xs,462);
  delay(6);
 }
 ///drawing
 for(xs=0;xs<15;xs++)
 {
  delay(50);
  setcolor(random(15));
  settextstyle(1,HORIZ_DIR,2);
  outtextxy(210,425,"NUCLEAR REACTOR");
 }
 setcolor(8);
 setfillstyle(SOLID_FILL,8);
 bar(50,100,65,410);
 bar(380,100,395,410);
 bar(50,395,390,410);
 ellipse(222.5,100,0,180,172.5,60);
 ellipse(222.5,100,0,180,157.5,50);
 floodfill(222.5,45,8);
 setcolor(8);

 line(75,385,350,385);
 line(85,375,340,375);

 line(350,385,350,230);
 line(340,375,340,230);
 ellipse(335,230,0,180,15,30);
 ellipse(335,230,0,180,5,20);
 line(330,230,330,260);
 line(320,230,320,250);
 line(330,260,250,260);
 line(320,250,250,250);
 line(250,260,250,360);
 line(250,360,100,360);
 line(100,360,100,260);
 line(100,260,85,260);
 line(85,260,85,375);
 line(75,385,75,250);
 line(75,250,100,250);

 line(100,250,100,200);
 line(250,250,250,200);

 ellipse(175,200,0,180,75,40);
 setfillstyle(CLOSE_DOT_FILL,11);

 floodfill(175,200,8);

 setfillstyle(SOLID_FILL,7);
 bar(170,150,180,330);
 setcolor(8);
 rectangle(170,150,180,330);

 bar(170+50,150,180+50,330);
 setcolor(8);
 rectangle(170+50,150,180+50,330);

 bar(120,150,130,330);
 setcolor(8);
 rectangle(120,150,130,330);

 sector(125,150,0,180,5,10);
 setcolor(7);
 line(121,150,129,150);

 sector(125,150,0,180,5,10);
 setcolor(7);
 line(121,150,129,150);

 sector(175,150,0,180,5,10);
 setcolor(7);
 line(171,150,179,150);

 sector(225,150,0,180,5,10);
 setcolor(7);
 line(221,150,229,150);
 //cadmium rods
 setcolor(8);
 bar3d(105,270,115,350,1,1);
 bar3d(135,270,145,350,1,1);
 bar3d(155,270,165,350,1,1);
 bar3d(185,270,195,350,1,1);
 bar3d(205,270,215,350,1,1);
 bar3d(235,270,245,350,1,1);

 setfillstyle(SOLID_FILL,12);
 floodfill(110,280,8);
 floodfill(140,280,8);
 floodfill(160,280,8);
 floodfill(190,280,8);
 floodfill(210,280,8);
 floodfill(240,280,8);

 //jar
 setcolor(8);
 line(290,360,375,360);
 line(290,360,290,190);
 line(375,360,375,190);
 line(290,190,290+37.5,150);
 line(375,190,375-37.5,150);
 line(290+37.5,150,290+37.5,120);
  line(375-37.5,150,375-37.5,130);
  line(290+37.5,120,520,120);
  line(375-37.5,130,510,130);
  line(510,130,510,200);
  line(520,120,520,200);


  arc(510,240,90,270,40);
 arc(520,240,270,90,40);
 line(508,280,508,291);
 line(520,280,520,300);
 line(508,290,375,290);
 line(520,300,375,300);
 setcolor(0);
 line(375,291,375,299);
 //water
 setcolor(8);
 moveto(290,230);
 lineto(300,220);
 lineto(310,225);
 lineto(320,220);
 moveto(330,225);
 lineto(340,220);
 moveto(350,220);
 lineto(370,210);
 lineto(375,230);
 setfillstyle(SOLID_FILL,7);
 floodfill(370,290,8);
 floodfill(320,290,8);
 floodfill(310,230,8);
 bar(375,290,520,300);
 bar(520,300,509,280);
 line(375,290,510,290);
 line(375,300,520,300);

 line(520,300,520,280);
 line(509,290,509,280);

 //fan 1
 setfillstyle(SOLID_FILL,0);
 pieslice(515,240,75,105,35);
 //fan2
 pieslice(515,240,165,195,35);
 //fan3
 pieslice(515,240,255,285,35);
 //fan4
 pieslice(515,240,345,360,35);
 pieslice(515,240,0,15,35);
 setcolor(0);
 line(516,240,549,240);
 //fillin fans
 setfillstyle(CLOSE_DOT_FILL,8);
 floodfill(515,249,8);
 floodfill(515,231,8);

 setfillstyle(SOLID_FILL,7);
 floodfill(510,240,8);
 floodfill(519,240,8);
 //generator
 setcolor(8);
 rectangle(455,180,575,340);
 setcolor(7);
 line(455,290,455,300);
 setcolor(0);
 line(511,180,519,180);
 setfillstyle(SOLID_FILL,8);
 floodfill(460,190,8);
 floodfill(525,190,8);
 //buttons
 setfillstyle(SOLID_FILL,4);
 pieslice(490,320,0,360,7);

 setfillstyle(SOLID_FILL,10);
 pieslice(540,320,0,360,7);

 setfillstyle(SOLID_FILL,0);
 bar(380,121,395,129);
 //label
 for(a=0;a<29;a++)
 {

  dva(175,108,a,15);
  delay(5);
  dva(175,108,a,0);

 }
 dva(175,108,a,15);
 lb(140,85,"URANIUM RODS");

 for(a=0;a<50;a++)
 {
  lha(400,50,a,15);
  delay(5);
  lha(400,50,a,0);
 }

 lha(400,50,50,15);
 lb(410,40,"WALLS MADE OF CONCRETE & LEAD");



 uva(140,430,75,15);
 lb(100,430,"CADMIUM RODS");

 for(a=0;a<100;a++)
 {
  dva(85,150,a,15);
  delay(5);
  dva(85,150,a,0);
 }

 dva(85,150,100,15);
 lb(70,130,"COOL WATER");

 for(a=0;a<100;a++)
 {
  dva(275,150,a,15);
  delay(5);
  dva(275,150,a,0);
 }

 dva(275,150,100,15);
 lb(250,130,"HOT WATER");


 for(a=0;a<30;a++)
 {
  lha(550,125,a,15);
  delay(5);
  lha(550,125,a,0);
 }

 lha(550,125,30,15);
 lb(560,120,"STEAM PIPE");


 lha(500,345,130,15);
 line(500,345,500,400);
 lb(420,410,"STEAM GENERATOR");

 for(a=0;a<30;a++)
 {
 uva(550,370,a,15);
 delay(5);
 uva(550,370,a,0);
 }
 uva(550,370,30,15);
 lb(500,370,"ELECTRIC GENERATOR");

 getch();
 //steam
 vvapour(300,220);
 vvapour(315,220);
 vvapour(355,220);

 vvapour(305,200);
 vvapour(315,200);
 vvapour(325,200);
 vvapour(335,200);
 vvapour(345,200);
 vvapour(355,200);
 vvapour(365,200);

 vvapour(312,180);
 vvapour(320,180);
 vvapour(330,180);
 vvapour(340,180);
 vvapour(350,180);


  vvapour(330,160);
  vvapour(333,140);


 hvapour(335,125);
 hvapour(353,124);
 hvapour(375,124);
 hvapour(395,125);
 hvapour(410,124);
 hvapour(430,125);
 hvapour(445,125);
 hvapour(460,124);
 hvapour(480,124);
 hvapour(495,124);
 hvapour(505,124);

 vvapour(515,135);
 vvapour(516,150);
 vvapour(515,165);
 vvapour(517,180);
 vvapour(514,195);
 vvapour(501,220);
 vvapour(485,225);
 vvapour(494,230);

 vvapour(529,217);
 vvapour(540,225);
 vvapour(523,231);

 vvapour(529,257);
 vvapour(540,265);
 vvapour(490,262);

 delay(2);

 while(!(kbhit()))
 {

  //1st pisition
  setcolor(8);
  setfillstyle(SOLID_FILL,7);
  floodfill(515,249,8);
  floodfill(515,231,8);

  setfillstyle(CLOSE_DOT_FILL,8);
  floodfill(510,240,8);
  floodfill(529,240,8);
  delay(250);
 //2nd poistion
  setfillstyle(CLOSE_DOT_FILL,8);
  floodfill(515,249,8);
  floodfill(515,231,8);

  setfillstyle(SOLID_FILL,7);
  floodfill(510,240,8);
  floodfill(529,240,8);
  delay(250);

 }
 getch();

}