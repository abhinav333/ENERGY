#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"stdlib.h"
#include"alloc.h"
#include"math.h"

void main()
{
 int d=DETECT,m;
 initgraph(&d,&m,"C:\\TC\\BGI");
 setcolor(14);
 setfillstyle(XHATCH_FILL,2);
 sector(15,240,0,360,1,230);
 sector(625,240,0,360,1,230);
 sector(320,10,0,360,320,7);
 sector(320,470,0,360,320,7);

 line(110+30,140,100+30,440);
 line(130+30,140,140+30,440);
 ellipse(120+30,140,0,180,10,15);
 //fans
 setcolor(5);
 ellipse(120+30,90,295,245,10,70);
 ellipse(180+30,150,205,155,70,10);
 ellipse(120+30,210,115,65,10,70);
 ellipse(60+30,150,25,335,70,10);
 setcolor(2);
 line(
 setfillstyle(SOLID_FILL,8);
 floodfill(150,150,5);
 for(m=0;m<15;m++)
 {
  setcolor(random(20));
  settextstyle(1,HORIZ_DIR,4);
  outtextxy(230,20,"WIND ENERGY");
  delay(50);
 }


 for(m=70;m<421;m++)
 {
  setcolor(12);
  rectangle(340,70,590,m);
  rectangle(345,75,585,m-5);
  delay(1);
  setcolor(0);
  rectangle(340,70,590,m);
  rectangle(345,75,585,m-5);
 }
 setcolor(12);
  rectangle(340,70,590,m);
  rectangle(345,75,585,m-5);

   gotoxy(45,6);
   printf("        INTRODUCTION   ");
   gotoxy(45,8);
   printf("      Winds  are  caused  by ");
   delay(15);
   gotoxy(45,9);
   printf("ueven heating of the Earth's");
   delay(15);
   gotoxy(45,10);
   printf("surface. Earlier,people used");
   delay(15);
   gotoxy(45,11);
   printf("windmills to grind corn, etc.");
   delay(15);
   gotoxy(45,12);
   printf("Today,very mordern windmills");
   delay(15);
   gotoxy(45,13);
   printf("called  'wind turbines'  are" );
   delay(15);
   gotoxy(45,14);
   printf("used to generate electricity.");
   delay(15);
   gotoxy(45,15);
   printf("The blades  of  the  turbine");
   delay(15);
    gotoxy(45,16);
   printf("catch the wind, changing it's" );
   delay(15);
   gotoxy(45,17);
   printf("direction from horizontal to" );
   delay(15);
   gotoxy(45,18);
   printf("vertical, so the blades spin" );
   delay(15);
   gotoxy(45,19);
   printf("like a pin wheel." );
   delay(15);
   gotoxy(45,20);
   printf("       The wind turbines can" );
   delay(15);
   gotoxy(45,21);
   printf("be  as tall as  ten storeys." );
   delay(15);
   gotoxy(45,22);
   printf("The height  lifts  blades to" );
   delay(15);
   gotoxy(45,23);
   printf("where  the  stronger current" );
   delay(15);
   gotoxy(45,24);
   printf("of air blows. The longest of" );
   delay(15);
   gotoxy(45,25);
   printf("windmill blade is about 16 m" );
   m=0;
   while(m!=25)
 {
  m+=1;
  delay(200);
  setfillstyle(SOLID_FILL,7);
  floodfill(120,150,5);
  floodfill(180,150,5);

  setfillstyle(LINE_FILL,4);
  floodfill(150,120,5);
  floodfill(150,180,5);
  delay(200);
  setfillstyle(LINE_FILL,4);
  floodfill(120,150,5);
  floodfill(180,150,5);

  setfillstyle(SOLID_FILL,7);
  floodfill(150,120,5);
  floodfill(150,180,5);

 }

   for(m=96;m<414;m++)
   {
    setcolor(0);
    line(346,m,584,m);
    delay(2);
   }

   delay(15);
   gotoxy(45,12);
   printf("Electricity can be generated" );
   delay(15);
   gotoxy(45,13);
   printf("even if  the wind speeds are" );
   delay(15);
   gotoxy(45,14);
   printf("low as 15 kmph.              " );
   m=0;
 while(m!=5)
 {
  m+=1;
  delay(200);
  setfillstyle(SOLID_FILL,7);
  floodfill(120,150,5);
  floodfill(180,150,5);

  setfillstyle(LINE_FILL,4);
  floodfill(150,120,5);
  floodfill(150,180,5);
  delay(200);
  setfillstyle(LINE_FILL,4);
  floodfill(120,150,5);
  floodfill(180,150,5);

  setfillstyle(SOLID_FILL,7);
  floodfill(150,120,5);
  floodfill(150,180,5);

 }


   for(m=76;m<414;m++)
   {
    setcolor(0);
    line(346,m,584,m);
    delay(2);
   }
   gotoxy(45,8);
   printf("* ADVANTAGES");
   gotoxy(45,9);
   printf("");
   delay(15);
   gotoxy(45,10);
   printf(" [1] Wind does not cause any");
   delay(15);
   gotoxy(45,11);
   printf("     type pollution");
   delay(15);
   gotoxy(45,12);
   printf("");
   delay(15);
   gotoxy(45,13);
   printf(" [2] Wind  is renewable  and"  );
   delay(15);
   gotoxy(45,14);
   printf("     non-conventional source");
   delay(15);
   gotoxy(45,15);
   printf("     of energy");
   delay(15);
    gotoxy(45,16);
   printf("" );
   delay(15);
   gotoxy(45,17);
   printf(" [3] The devices  which  are" );
   delay(15);
   gotoxy(45,18);
   printf("     used to harrness energy" );
   delay(15);
   gotoxy(45,19);
   printf("     of wind(kinetic energy)" );
   delay(15);
   gotoxy(45,20);
   printf("     are very cheap." );
    m=0;
 while(m!=15)
 {
  m+=1;
  delay(200);
  setfillstyle(SOLID_FILL,7);
  floodfill(120,150,5);
  floodfill(180,150,5);

  setfillstyle(LINE_FILL,4);
  floodfill(150,120,5);
  floodfill(150,180,5);
  delay(200);
  setfillstyle(LINE_FILL,4);
  floodfill(120,150,5);
  floodfill(180,150,5);

  setfillstyle(SOLID_FILL,7);
  floodfill(150,120,5);
  floodfill(150,180,5);

 }

   for(m=76;m<414;m++)
   {
    setcolor(0);
    line(346,m,584,m);
    delay(2);
   }


   gotoxy(45,8);
   printf("* DISADVANTAGES");
   gotoxy(45,9);
   printf("");
   delay(15);
   gotoxy(45,10);
   printf(" [1] The wind mill which is");
   delay(15);
   gotoxy(45,11);
   printf("     mostly used to harness");
   delay(15);
   gotoxy(45,12);
   printf("     wind energy, is slight");
   delay(15);
   gotoxy(45,13);
   printf("     noisy" );
   delay(15);
   gotoxy(45,14);
   printf("");
   delay(15);
   gotoxy(45,15);
   printf(" [2] When the windmill spins,");
   delay(15);
    gotoxy(45,16);
   printf("     the movements of clouds" );
   delay(15);
   gotoxy(45,17);
   printf("     are distrubed resulting" );
   delay(15);
   gotoxy(45,18);
   printf("     in scarcity of rainfall." );
   delay(15);
   gotoxy(45,19);
   printf(""  );
   delay(15);










   gotoxy(45,20);
   printf(" " );
   delay(15);
   gotoxy(45,21);
   printf("There can be no much harm in" );
   delay(15);
   gotoxy(45,22);
   printf("bringing this type of energy" );

   delay(15);gotoxy(45,23);
   printf("useful to mankind at an hour" );
   delay(15);
   gotoxy(45,24);
   printf("of crisis" );
   m=0;
 while(m!=15)
 {
  m+=1;
  delay(200);
  setfillstyle(SOLID_FILL,7);
  floodfill(120,150,5);
  floodfill(180,150,5);

  setfillstyle(LINE_FILL,4);
  floodfill(150,120,5);
  floodfill(150,180,5);
  delay(200);
  setfillstyle(LINE_FILL,4);
  floodfill(120,150,5);
  floodfill(180,150,5);

  setfillstyle(SOLID_FILL,7);
  floodfill(150,120,5);
  floodfill(150,180,5);

 }


 getch();
}