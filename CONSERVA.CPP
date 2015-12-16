#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"stdlib.h"
void endbox()
{
int i1,i2,i3,i4,o1,o2,o3,o4;
  for (i1=187,i2=197,i3=583,i4=423;i1<387,i2<307,i3>383,i4>303;i1++,i2++,i3--,i4--)
{
  setcolor(4);
  rectangle(i1,i2,i3,i4);
  delay(1);
 }
 for (o1=187,o2=197,o3=583,o4=423;o1<387,o2<307,o3>383,o4>303;o1++,o2++,o3--,o4--)
{
  setcolor(0);
rectangle(o1,o2,o3,o4);
 delay(1);
 }
}
void conserva()
{
 int gdriver=DETECT,gmode,lkj;
 void *zxc;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
   setcolor(12);
   rectangle(0,0,639,479);
   rectangle(20,20,619,459);
   setfillstyle(SOLID_FILL,4);
   floodfill(10,10,12);
   setcolor(2);
   settextstyle(7,HORIZ_DIR,4);
   outtextxy(75,40,"CONSERVATION OF ENERGY");
   outtextxy(70,60,"-------------------------");
   outtextxy(70,20,"-------------------------");
   //CAR
   setcolor(8);
   line(500-20,100,540-20,100);

   line(540-20,100,560-20,120);
   line(560-20,120,590-20,120);
   line(590-20,120,590-20,140);
   line(570,140,545,140);

   line(500-20,100,480-20,120);
   line(460,120,430,120);
   line(430,120,430,140);
   line(430,140,455,140);
   //windows
   line(520,105,535,120);
   line(535,120,465,120);

   line(480,105,520,105);
   line(480,105,465,120);
   line(505,105,505,120);
   line(500,105,500,120);
   circle(490,113,3);
   line(488,114,483,120);
   line(492,114,491,120);

   //mudguard
   arc(467,140,0,180,12);
   arc(533,140,0,180,12);
   //driver

   //wheel
   arc(467,140,0,360,9);
   arc(533,140,0,360,9);
   arc(467,140,0,360,2);
   arc(533,140,0,360,2);
   line(479,140,521,140);
   //fill-in
   setfillstyle(SOLID_FILL,13);
   floodfill(435,125,8);
   setfillstyle(SOLID_FILL,7);
   floodfill(467,140,8);
   floodfill(533,140,8);
   getch();
   lkj=imagesize(429,99,571,150);
   zxc=malloc(lkj);
   getimage(429,99,571,150,zxc);
   for(lkj=429;lkj>50;lkj--)
   {
    putimage(lkj,99,zxc,COPY_PUT);
    delay(2);
   }
   free(zxc);

   //bulb;

//   getch();



   setcolor(8);
   ellipse(100,250+60,305,235,55,55);
   ellipse(62,322+60,345,62,15,30);
   ellipse(138,322+60,100,197,15,30);
   ellipse(100,330+60,180,360,23,5);
   setfillstyle(SOLID_FILL,11);
   floodfill(100,250+60,8);
      setfillstyle(SOLID_FILL,1);
   floodfill(100,250+60,8);
   setfillstyle(SOLID_FILL,11);
   floodfill(100,250+60,8);
   setcolor(8);
   line(80,332+60,80,347+60);
   line(120,332+60,120,347+60);
   ellipse(100,345+60,180,360,21,5);
   setfillstyle(SOLID_FILL,6);
   floodfill(102,342+60,8);
   line(81,347+60,81,367+60);
   line(119,347+60,119,367+60);
   ellipse(100,365+60,180,360,20,5);
   floodfill(102,363+60,8);
   rectangle(81,353+60,78,356+60);
   setfillstyle(SOLID_FILL,8);
   floodfill(79,354+60,8);
   rectangle(119,353+60,122,356+60);
   floodfill(120,354+60,8);
   ellipse(88,368+60,185,355,3,5);
   floodfill(89,370+60,8);
   ellipse(112,368+60,185,360,3,5);
   floodfill(112,370+60,8);
//filaments
setcolor(8);
ellipse(145,324+60,110,188,45,83);
ellipse(50,324+60,352,65,45,83);
ellipse(143,324+60,110,188,45,83);
ellipse(52,324+60,352,65,45,83);
line(69,250+60,72,250+60);
line(125,247+60,127,247+60);
floodfill(95,310+60,8);
floodfill(100,310+60,8);

//write box
setcolor(5);
rectangle(170,180,600,440);
rectangle(185,195,585,425);
setfillstyle(SOLID_FILL,4);
floodfill(185,185,5);

//page 1-------------
setcolor(11);
settextstyle(8,HORIZ_DIR,3);
outtextxy(188,194,"Conservation of energy is yet ");
outtextxy(188,220,"another method of coping  ");
outtextxy(188,245,"with the energy crisis. Energy  ");
outtextxy(188,270,"wasted in the course of our");
outtextxy(188,295,"daily work. The proportion of ");
outtextxy(188,320,"wastage of electricity is more. ");
outtextxy(188,345,"Electric fan, ligts, & other ");
outtextxy(188,370,"gadgets are left on even when ");
outtextxy(188,391,"not in use causing wastage.....");
getch();
endbox();

//page 2--------------------
setcolor(11);
settextstyle(8,HORIZ_DIR,3);
outtextxy(188,194,"..of energy on a large scale. ");
outtextxy(186,220,"   Wood and coal are also left");
outtextxy(188,245,"burning in the fire places -  ");
outtextxy(188,270,"when not in use.It is possible");
outtextxy(188,295,"to put out the fire when the  ");
outtextxy(188,320,"work is done and to use the ");
outtextxy(188,345,"leftover coal or wood another");
outtextxy(188,370,"time this can save a lot of   ");
outtextxy(188,391,"fuel. It is also possible to use");
getch();
endbox();


//page 3---------=========----------===-=-=-=-=`1234567890-='
setcolor(11);
settextstyle(8,HORIZ_DIR,3);
outtextxy(188,194,"..fuels more economically by   ");
outtextxy(188,220,"using devices like pressure- ");
outtextxy(188,245,"cookers for cooking.");
outtextxy(188,270,"  Using vehicles like cars and");
outtextxy(188,295,"scooters when a place can be  ");
outtextxy(188,320,"reached by walking or cycling");
outtextxy(188,345,"involves wastage of fuel.");
outtextxy(188,370,"Walking & cycling instead of");
outtextxy(188,391,"using motor vehicles can save ");
getch();
endbox();



//filaments
setcolor(8);
ellipse(145,324+60,110,188,45,83);
ellipse(50,324+60,352,65,45,83);
ellipse(143,324+60,110,188,45,83);
ellipse(52,324+60,352,65,45,83);
line(69,250+60,72,250+60);
line(125,247+60,127,247+60);
floodfill(95,310+60,8);
floodfill(100,310+60,8);

//write box
setcolor(5);
rectangle(170,180,600,440);
rectangle(185,195,585,425);
setfillstyle(SOLID_FILL,4);
floodfill(185,185,5);

//page 4------------------------------------------------=
setcolor(11);
settextstyle(8,HORIZ_DIR,3);
outtextxy(188,194,"a lot of fuel. Proper handling");
outtextxy(188,220,"of of vehicles also cotributes");
outtextxy(188,245,"to saving of energy.Well used");
outtextxy(188,270,"vehicles are more efficient &");
outtextxy(188,295,"require less fuel to run. ");
outtextxy(188,320,"  The sources of energy on  ");
outtextxy(188,345,"Earth are limited and will ");
outtextxy(188,370,"get ovet some day or other.So");
outtextxy(187,391,"scientists are discovering .... ");
getch();
endbox();
//page 5------------------------------------------------=
setcolor(11);
settextstyle(8,HORIZ_DIR,3);
outtextxy(188,194,"..alternative sources of energy");
outtextxy(188,220,"like solar thermal technology,");
outtextxy(188,245,"solar photovoltaic technology,");
outtextxy(188,270,"besides these Wind energy ,");
outtextxy(188,295,"Biomass, geothermal energy,");
outtextxy(188,320,"Wawe energy, tidal energy , ");
outtextxy(188,345,"Fusion energy, are other ty- ");
outtextxy(188,370,"pes of alternative sources of");
outtextxy(187,391,"energy .");
getch();
}