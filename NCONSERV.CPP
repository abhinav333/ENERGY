#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"stdlib.h"
#include"alloc.h"
#include"D:\KCTSCH~1\HFILES~1\VILLAGE.H"
#include"D:\KCTSCH~1\HFILES~1\FUNCTION.H"

void main()
{
 int d=DETECT,m,in,de,sa,area1,area2,area3,area4,lkj;
 void *uty1,*uty2,*uty3,*uty4,*zxc;
 initgraph(&d,&m,"C:\\TC");




 //opener1();
 setcolor(5);
 //closer(0);
 line(50+60,10,50+60,470);
 line(30+60,30,30+60,450);
 line(50+60,10,30+60,30);
 line(50+60,470,30+60,450);
 rectangle(90,190,70,280);

 //ract2
 line(640-110,10,640-110,470);
 line(640-90,30,640-90,450);
 line(640-110,10,640-90,30);
 line(640-110,470,640-90,450);
 rectangle(640-90,190,640-70,280);
 setfillstyle(CLOSE_DOT_FILL,7);
 floodfill(40+60,250,5);
 floodfill(20+60,250,5);

 floodfill(640-100,250,5);
 floodfill(640-80,250,5);



 area1=imagesize(89,9,111,31);
 uty1=malloc(area1);
 getimage(89,9,111,31,uty1);

 area2=imagesize(89,449,111,471);
 uty2=malloc(area2);
 getimage(89,449,111,471,uty2);

 area3=imagesize(529,9,561,31);
 uty3=malloc(area3);
 getimage(529,9,561,31,uty3);

 area4=imagesize(529,449,561,471);
 uty4=malloc(area4);
 getimage(529,449,561,471,uty4);

 for(in=9,de=449;in<180,de>290;in++,de--)
 {
  putimage(89,in,uty1,COPY_PUT);
  putimage(89,de,uty2,COPY_PUT);
  putimage(529,in,uty3,COPY_PUT);
  putimage(529,de,uty4,COPY_PUT);
  delay(10);
 }
 free(uty1);
  free(uty2);
  free(uty3);
  free(uty4);


  //draw_wavea
  setcolor(11);
  line(0,230,10,250);
  line(640,230,630,250);

  delay(100);
  line(10,250,20,230);
  line(630,250,620,230);

  delay(100);
  line(20,230,30,250);
  line(620,230,610,250);

  delay(100);
  line(30,250,40,230);
  line(610,250,600,230);

  delay(100);
  line(40,230,50,250);
  line(600,230,590,250);

  delay(100);
  line(50,250,60,230);
  line(590,250,580,230);

  delay(100);
  line(60,230,70,250);
  line(580,230,570,250);

  delay(100);
   line(70,250,80,230);
  line(570,250,560,230);
  delay(100);
  line(80,230,89,250);
  line(560,230,551,250);

  //rub_wavea
  setcolor(0);
  line(0,230,10,250);
  line(640,230,630,250);

  delay(100);
  line(10,250,20,230);
  line(630,250,620,230);

  delay(100);
  line(20,230,30,250);
  line(620,230,610,250);

  delay(100);
  line(30,250,40,230);
  line(610,250,600,230);

  delay(100);
  line(40,230,50,250);
  line(600,230,590,250);

  delay(100);
  line(50,250,60,230);
  line(590,250,580,230);

  delay(100);
  line(60,230,70,250);
  line(580,230,570,250);

  delay(100);
  line(70,250,80,230);
  line(570,250,560,230);
  delay(100);
  line(80,230,89,250);
  line(560,230,551,250);
  for(de=0;de<20;de++)
  {
   delay(15);
   setcolor(random(15));
   settextstyle(5,HORIZ_DIR,6);
   outtextxy(140,165,"Conservation of");
   outtextxy(140,225,"   Energy");
  }

   //blink
  setfillstyle(SOLID_FILL,12);
  floodfill(40+60,250,5);
  floodfill(640-100,250,5);
  delay(8);
  setfillstyle(CLOSE_DOT_FILL,7);
  floodfill(40+60,250,5);
  floodfill(640-100,250,5);
  delay(8);
  setfillstyle(SOLID_FILL,12);
  floodfill(40+60,250,5);
  floodfill(640-100,250,5);
  delay(8);
  setfillstyle(CLOSE_DOT_FILL,7);
  floodfill(40+60,250,5);
  floodfill(640-100,250,5);
 delay(8);
  setfillstyle(SOLID_FILL,12);
  floodfill(40+60,250,5);
  floodfill(640-100,250,5);
  delay(8);
  setfillstyle(CLOSE_DOT_FILL,7);
  floodfill(40+60,250,5);
  floodfill(640-100,250,5);
  delay(8);


  setcolor(5);
  rectangle(90,190,70,280);
  rectangle(640-90,190,640-70,280);
  setfillstyle(CLOSE_DOT_FILL,7);
  floodfill(20+60,250,5);
  floodfill(640-80,250,5);
  getch();
  setcolor(0);
  for(in=50;in<379;in=in+2)
 {
  line(0,in,639,in);
  delay(4);
  }
  for(in=378;in>50;in=in-1)
 {
  line(0,in,639,in);
  delay(4);
  }
  //main
  setcolor(14);
  rectangle(0,0,639,479);
  rectangle(20,20,619,459);
  setfillstyle(SOLID_FILL,9);
  floodfill(10,10,14);
  setcolor(13);
  settextstyle(7,HORIZ_DIR,4);
  outtextxy(50,30,"  CONSERVATION OF ENERGY");
  setcolor(11);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(30,100," * INCREASING DEMAND FOR ENERGY -");
  getch();
  setcolor(12);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(50,140," SCIENTIFIC PROGRESS HAS GIVEN RISE TO");
  delay(15);
  outtextxy(30,170,"INCREASING  INDUSTRIES  AND IT INVOLVES");
  delay(15);
  outtextxy(30,200,"GREATER  CONSUMPTION  DIFFERENT FORMS ");
  delay(15);
  outtextxy(30,230,"OF ENERGY . THIS  CAN BE  SEEN  IN  THE ");
  delay(15);
  outtextxy(30,260,"FIGURES   RELATING   TO  GENERATION   OF ");
  delay(15);
  outtextxy(30,290,"ELECTRICITY IN INDIA IN THE LAST  FIFTY ");
  delay(15);
  outtextxy(30,320,"YEARS. ");
  getch();
  setcolor(0);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(30,100," * INCREASING DEMAND FOR ENERGY -");
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(50,140," SCIENTIFIC PROGRESS HAS GIVEN RISE TO");
  delay(25);
  outtextxy(30,170,"INCREASING  INDUSTRIES  AND IT INVOLVES");
  delay(25);
  outtextxy(30,200,"GREATER  CONSUMPTION  DIFFERENT FORMS ");
  delay(25);
  outtextxy(30,230,"OF ENERGY . THIS  CAN BE  SEEN  IN  THE ");
  delay(25);
  outtextxy(30,260,"FIGURES   RELATING   TO  GENERATION   OF ");
  delay(25);
  outtextxy(30,290,"ELECTRICITY IN INDIA IN THE LAST  FIFTY ");
  delay(25);
  outtextxy(30,320,"YEARS. ");
  //table
  setcolor(15);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(50,100,"THE FOLLOWING TABLE GIVES INFORMATION ");
  outtextxy(30,130,"ABOUT THE ELECTRICITY PRODUCED IN INDIA");
  outtextxy(30,160,"AND THE PER CAPITA ENERGY CONSUMED IN ");
  outtextxy(30,190,"THE PERIOD FROM 1951 TO 1986.");
  //TABLE
  setcolor(15);
  rectangle(30,220,609,450);
  line(30,260,609,260);
  line(30,260+1,609,260+1);
  setfillstyle(SOLID_FILL,7);
  floodfill(33,222,15);
  setfillstyle(SOLID_FILL,14);
  floodfill(140,300,15);
  line(150,220,150,450);
  line(440,220,440,450);
  line(30,260,609,260);
  line(30,260+1,609,260+1);
  rectangle(30-1,220-1,609+1,450+1);
  line(150+1,220,150+1,450);
  line(440+1,220,440+1,450);

  setfillstyle(SOLID_FILL,7);
  floodfill(33,222,15);
  setfillstyle(SOLID_FILL,14);
  floodfill(140,300,15);
  setcolor(1);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(65,220,"Year");
  outtextxy(115+20+20+10,220,"Electricity generation ");
  outtextxy(115+50+50+50+100+50+40,220,"Consumtion");
  setcolor(4);
  outtextxy(65,270,"1951");
  outtextxy(115+20+20+10+50+50-20,270,"550 kWh");
  outtextxy(115+50+50+50+100+50+40+50-20,270,"18 kWh");
  delay(10);
  outtextxy(65,300,"1961");
  outtextxy(115+20+20+10+50+50-20,300,"1600 kWh");
  outtextxy(115+50+50+50+100+50+40+50-20,300,"40 kWh");
  outtextxy(65,330,"1971");
  outtextxy(115+20+20+10+50+50-20,330,"5300 kWh");
  outtextxy(115+50+50+50+100+50+40+50-20,330,"90 kWh");
  outtextxy(65,360,"1981");
  outtextxy(115+20+20+10+50+50-20,360,"7500 kWh");
  outtextxy(115+50+50+50+100+50+40+50-20,360,"110 kWh");
  outtextxy(65,390,"1986");
  outtextxy(115+20+20+10+50+50-20,390,"17000 kWh");
  outtextxy(115+50+50+50+100+50+40+50-20,390,"190 kWh");
  getch();
  spokes();
  setcolor(14);
  rectangle(0,0,639,479);
  rectangle(20,20,619,459);
  setfillstyle(SOLID_FILL,9);
  floodfill(10,10,14);
  setcolor(14);
  settextstyle(8,HORIZ_DIR,2);
  outtextxy(50,50,"METHODS FOR COPING WITH ENERGY CRISES -");
  setcolor(13);
  settextstyle(8,HORIZ_DIR,2);
  outtextxy(25,80,"*]Countries all over the world are searching for");
  outtextxy(25,110,"  alternative fuels or different forms of energy.  ");
  outtextxy(25,140,"*]Another method is by using renewable resources");
  outtextxy(25,170,"  of energy like:solar energy,wind energy ect.");
  outtextxy(25,200,"*]Saving energy is another method of coping with");
  outtextxy(25,230,"  the energy crises");
  getch();
  for (m=21,de=458;m<242,de>242;m++,de--)
  {
   setcolor(random(15));
   line(21,m,618,m);
   line(21,de,618,de);
   delay(10);
  }

 for (in=242,sa=242;in>19,sa<458;in--,sa++)
  {
   setcolor(0);
   line(21,in,618,in);
   line(21,sa,618,sa);
   delay(10);
  }
   //methods

   setcolor(14);
   settextstyle(7,HORIZ_DIR,4);
   outtextxy(55,40,"METHODS FOR SAVING ENERGY");

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
setfillstyle(SOLID_FILL,1);
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
setfillstyle(SOLID_FILL,1);
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
spokes();
cleardevice();
village();
closep();
getch();
}

