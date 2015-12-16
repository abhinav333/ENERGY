#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"stdlib.h"
#include"alloc.h"
void main()
{
 int d=DETECT,m,vm;
 initgraph(&d,&m,"C:\\TC\\BGI");

 settextstyle(5,HORIZ_DIR,5);
 outtextxy(100,200,"A tale of two villages ....");

 getch();
 setcolor(0);
 outtextxy(100,200,"A tale of two villages ....");
 for(m=1;m<479;m++)
 {
  setcolor(6);
  rectangle(1,m,310,m);
  rectangle(330,m,639,m);
  delay(1);
  setcolor(0);
  rectangle(2,m,309,m);
  rectangle(331,m,638,m);

 }
  setcolor(11);
  rectangle(1,1,310,m);
  rectangle(330,1,639,m);
 gotoxy(3,2);
 printf("                (A)   ");

 gotoxy(48,2);
 printf("            (B)    ");

 //sd_pr 1-----------------------------------------------------------------------------------
 //house
 setcolor(7);
 line(60,290,120,290);
 line(120,290,145,325);
 line(145,325,145,360);
 line(145,360,85,360);
 line(85,360,85,325);
 line(85,325,145,325);
 line(85,325,60,290);
 line(60,290,35,325);
 line(35,325,35,360);
 line(35,360,85,360);
 line(35,325,85,325);
 rectangle(50,335,70,360);
 rectangle(105,335,125,345);

 circle(60,310,7);

 //chath & p
 setfillstyle(SOLID_FILL,8);
 floodfill(110,310,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(110,330,7);
 //dor
 setfillstyle(SOLID_FILL,5);
 floodfill(110,340,7);
 floodfill(60,340,7);
 //fr
 //co
 setfillstyle(SOLID_FILL,13);
 floodfill(60,310,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(60,330,7);
 setfillstyle(SOLID_FILL,3);
 floodfill(60,320,7);
 //----------------------
 //h 2
 line(60+90,290+70,120+90,290+70);
 line(120+90,290+70,145+90,325+70);
 line(145+90,325+70,145+90,360+70);
 line(145+90,360+70,85+90,360+70);
 line(85+90,360+70,85+90,325+70);
 line(85+90,325+70,145+90,325+70);
 line(85+90,325+70,60+90,290+70);
 line(60+90,290+70,35+90,325+70);
 line(35+90,325+70,35+90,360+70);
 line(35+90,360+70,85+90,360+70);
 line(35+90,325+70,85+90,325+70);
 circle(60+90,310+70,7);
 rectangle(50+90,335+70,70+90,360+70);
 rectangle(105+90,335+70,125+90,345+70);
 //chath & p
 setfillstyle(SOLID_FILL,8);
 floodfill(110+90,310+70,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(110+90,330+70,7);
 //dor
 setfillstyle(SOLID_FILL,5);
 floodfill(110+90,340+70,7);
 floodfill(60+90,340+70,7);
 //fr
 //co
 setfillstyle(SOLID_FILL,13);
 floodfill(60+90,310+70,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(60+90,330+70,7);
 setfillstyle(SOLID_FILL,3);
 floodfill(60+90,320+70,7);

 //tree 1
 setcolor(6);
 ellipse(190+60,320+30,260,90,5,35);
 ellipse(210+60,320+30,90,280,5,35);
 arc(190+60,280+30,145,295,15);
 arc(170+60,260+30,95,295,15);
 arc(175+60,240+30,55,210,15);
 arc(195+60,230+30,0,165,15);
 arc(220+60,239+30,300,135,15);
 arc(225+60,265+30,255,70,15);
 arc(210+60,280+30,255,360,15);

 arc(200+60,280+30,220,320,10);
 arc(200+60,360+30,20,160,10);
 //fillin
 setfillstyle(SOLID_FILL,2);
 floodfill(220+60,265+30,6);

 setfillstyle(SOLID_FILL,6);
 floodfill(200+60,295+30,6);

 //tree 2
 setcolor(6);
 ellipse(190-140,320+110,260,90,5,35);
 ellipse(210-140,320+110,90,280,5,35);
 arc(190-140,280+110,145,295,15);
 arc(170-140,260+110,95,295,15);
 arc(175-140,240+110,55,210,15);
 arc(195-140,230+110,0,165,15);
 arc(220-140,239+110,300,135,15);
 arc(225-140,265+110,255,70,15);
 arc(210-140,280+110,255,360,15);

 arc(200-140,280+110,220,320,10);
 arc(200-140,360+110,20,160,10);
 //fillin
 setfillstyle(SOLID_FILL,2);
 floodfill(220-140,265+110,6);

 setfillstyle(SOLID_FILL,6);
 floodfill(200-140,295+110,6);

 //tap
 setcolor(8);
 line(250,420,250,475);
 line(250,420,265,420);
 line(265,420,265,440);
 line(265,440,275,440);
 line(275,440,275,435);
 line(275,435,270,435);
 line(270,435,270,430);
 line(270,430,285,430);
 line(285,430,285,435);
 line(285,435,280,435);
 line(280,435,280,440);
 line(280,440,290,440);
 line(290,440,290,450);
 line(290,450,285,450);
 line(285,450,285,445);
 line(285,445,265,445);
 line(265,445,265,475);
 line(265,475,250,475);
 setfillstyle(SOLID_FILL,7);
 floodfill(255,470,8);
 //happy man  in sunderpur1
 setcolor(15);
 circle(100,410,10);
 ellipse(100,410,230,322,5,5);
 circle(96,407,1);
 circle(105,407,1);
 line(97,420,97,425);
 line(103,420,103,425);
 line(97,425,103,425);
 line(97,425,90,428);
 line(103,425,110,428);
 line(90,428,87,445);
 line(93,433,90,447);
 line(87,445,90,447);
 line(110,428,113,445);
 line(107,433,110,447);
 line(113,445,110,447);
 line(93,433,95,445);
 line(107,433,105,445);
 line(95,445,105,445);
 line(95,445,93,470);
 line(100,450,98,470);
 line(93,470,98,470);
 line(105,445,107,470);
 line(100,450,102,470);
 line(107,470,102,470);
 //colur the man
 setfillstyle(SOLID_FILL,6);
 floodfill(100,410,15);
 floodfill(100,423,15);
 setfillstyle(SOLID_FILL,9);
 floodfill(100,432,15);
 setfillstyle(SOLID_FILL,12);
 floodfill(100,448,15);
 //happy man  in SUNDERPUR 2
 setcolor(15);
 circle(100+80,410-120,10);
 ellipse(100+80,410-120,230,322,5,5);
 circle(96+80,407-120,1);
 circle(105+80,407-120,1);
 line(97+80,420-120,97+80,425-120);
 line(103+80,420-120,103+80,425-120);
 line(97+80,425-120,103+80,425-120);
 line(97+80,425-120,90+80,428-120);
 line(103+80,425-120,110+80,428-120);
 line(90+80,428-120,87+80,445-120);
 line(93+80,433-120,90+80,447-120);
 line(87+80,445-120,90+80,447-120);
 line(110+80,428-120,113+80,445-120);
 line(107+80,433-120,110+80,447-120);
 line(113+80,445-120,110+80,447-120);
 line(93+80,433-120,95+80,445-120);
 line(107+80,433-120,105+80,445-120);
 line(95+80,445-120,105+80,445-120);
 line(95+80,445-120,93+80,470-120);
 line(100+80,450-120,98+80,470-120);
 line(93+80,470-120,98+80,470-120);
 line(105+80,445-120,107+80,470-120);
 line(100+80,450-120,102+80,470-120);
 line(107+80,470-120,102+80,470-120);
 //colur the man
 setfillstyle(SOLID_FILL,6);
 floodfill(100+80,410-120,15);
 floodfill(100+80,423-120,15);
 setfillstyle(SOLID_FILL,9);
 floodfill(100+80,432-120,15);
 setfillstyle(SOLID_FILL,12);
 floodfill(100+80,448-120,15);
 //pain piyo good jiyo]
 setcolor(11);
 line(285,453,280,479);
 line(290,453,295,479);
 line(285,453,290,453);
 line(280,479,295,479);
 setfillstyle(LTBKSLASH_FILL,9);
 floodfill(288,460,11);
 //d_pr 1======================================================================================
 //house
 setcolor(7);
 line(60+330,290,120+330,290);
 line(120+330,290,145+330,325);
 line(145+330,325,145+330,360);
 line(145+330,360,85+330,360);
 line(85+330,360,85+330,325);
 line(85+330,325,145+330,325);
 line(85+330,325,60+330,290);
 line(60+330,290,35+330,325);
 line(35+330,325,35+330,360);
 line(35+330,360,85+330,360);
 line(35+330,325,85+330,325);
 rectangle(50+330,335,70+330,360);
 rectangle(105+330,335,125+330,345);

 circle(60+330,310,7);

 //chath & p
 setfillstyle(SOLID_FILL,8);
 floodfill(110+330,310,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(110+330,330,7);
 //dor
 setfillstyle(SOLID_FILL,5);
 floodfill(110+330,340,7);
 floodfill(60+330,340,7);
 //fr
 //co
 setfillstyle(SOLID_FILL,13);
 floodfill(60+330,310,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(60+330,330,7);
 setfillstyle(SOLID_FILL,3);
 floodfill(60+330,320,7);
 //----------------------
 //h 2
 line(60+90+330,290+70,120+90+330,290+70);
 line(120+90+330,290+70,145+90+330,325+70);
 line(145+90+330,325+70,145+90+330,360+70);
 line(145+90+330,360+70,85+90+330,360+70);
 line(85+90+330,360+70,85+90+330,325+70);
 line(85+90+330,325+70,145+90+330,325+70);
 line(85+90+330,325+70,60+90+330,290+70);
 line(60+90+330,290+70,35+90+330,325+70);
 line(35+90+330,325+70,35+90+330,360+70);
 line(35+90+330,360+70,85+90+330,360+70);
 line(35+90+330,325+70,85+90+330,325+70);
 circle(60+90+330,310+70,7);
 rectangle(50+90+330,335+70,70+90+330,360+70);
 rectangle(105+90+330,335+70,125+90+330,345+70);
 //chath & p
 setfillstyle(SOLID_FILL,8);
 floodfill(110+90+330,310+70,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(110+90+330,330+70,7);
 //dor
 setfillstyle(SOLID_FILL,5);
 floodfill(110+90+330,340+70,7);
 floodfill(60+90+330,340+70,7);
 //fr
 //co
 setfillstyle(SOLID_FILL,13);
 floodfill(60+90+330,310+70,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(60+90+330,330+70,7);
 setfillstyle(SOLID_FILL,3);
 floodfill(60+90+330,320+70,7);

 //tree 1
 setcolor(6);
 ellipse(190+60+330,320+30,260,90,5,35);
 ellipse(210+60+330,320+30,90,280,5,35);
 arc(190+60+330,280+30,145,295,15);
 arc(170+60+330,260+30,95,295,15);
 arc(175+60+330,240+30,55,210,15);
 arc(195+60+330,230+30,0,165,15);
 arc(220+60+330,239+30,300,135,15);
 arc(225+60+330,265+30,255,70,15);
 arc(210+60+330,280+30,255,360,15);

 arc(200+60+330,280+30,220,320,10);
 arc(200+60+330,360+30,20,160,10);
 //fillin
 setfillstyle(SOLID_FILL,2);
 floodfill(220+60+330,265+30,6);

 setfillstyle(SOLID_FILL,6);
 floodfill(200+60+330,295+30,6);

 //tree 2
 setcolor(6);
 ellipse(190-140+330,320+110,260,90,5,35);
 ellipse(210-140+330,320+110,90,280,5,35);
 arc(190-140+330,280+110,145,295,15);
 arc(170-140+330,260+110,95,295,15);
 arc(175-140+330,240+110,55,210,15);
 arc(195-140+330,230+110,0,165,15);
 arc(220-140+330,239+110,300,135,15);
 arc(225-140+330,265+110,255,70,15);
 arc(210-140+330,280+110,255,360,15);

 arc(200-140+330,280+110,220,320,10);
 arc(200-140+330,360+110,20,160,10);
 //fillin
 setfillstyle(SOLID_FILL,2);
 floodfill(220-140+330,265+110,6);

 setfillstyle(SOLID_FILL,6);
 floodfill(200-140+330,295+110,6);

 //tap
 setcolor(8);
 line(250+330,420,250+330,475);
 line(250+330,420,265+330,420);
 line(265+330,420,265+330,440);
 line(265+330,440,275+330,440);
 line(275+330,440,275+330,435);
 line(275+330,435,270+330,435);
 line(270+330,435,270+330,430);
 line(270+330,430,285+330,430);
 line(285+330,430,285+330,435);
 line(285+330,435,280+330,435);
 line(280+330,435,280+330,440);
 line(280+330,440,290+330,440);
 line(290+330,440,290+330,450);
 line(290+330,450,285+330,450);
 line(285+330,450,285+330,445);
 line(285+330,445,265+330,445);
 line(265+330,445,265+330,475);
 line(265+330,475,250+330,475);
 setfillstyle(SOLID_FILL,7);
 floodfill(255+330,470,8);
 //happy man  in dpr 1
 setcolor(15);
 circle(100+80+330,410-120,10);
 ellipse(100+80+330,410-120,230,322,5,5);
 circle(96+80+330,407-120,1);
 circle(105+80+330,407-120,1);
 line(97+80+330,420-120,97+80+330,425-120);
 line(103+80+330,420-120,103+80+330,425-120);
 line(97+80+330,425-120,103+80+330,425-120);
 line(97+80+330,425-120,90+80+330,428-120);
 line(103+80+330,425-120,110+80+330,428-120);
 line(90+80+330,428-120,87+80+330,445-120);
 line(93+80+330,433-120,90+80+330,447-120);
 line(87+80+330,445-120,90+80+330,447-120);
 line(110+80+330,428-120,113+80+330,445-120);
 line(107+80+330,433-120,110+80+330,447-120);
 line(113+80+330,445-120,110+80+330,447-120);
 line(93+80+330,433-120,95+80+330,445-120);
 line(107+80+330,433-120,105+80+330,445-120);
 line(95+80+330,445-120,105+80+330,445-120);
 line(95+80+330,445-120,93+80+330,470-120);
 line(100+80+330,450-120,98+80+330,470-120);
 line(93+80+330,470-120,98+80+330,470-120);
 line(105+80+330,445-120,107+80+330,470-120);
 line(100+80+330,450-120,102+80+330,470-120);
 line(107+80+330,470-120,102+80+330,470-120);
 //colur the man
 setfillstyle(SOLID_FILL,6);
 floodfill(100+80+330,410-120,15);
 floodfill(100+80+330,423-120,15);
 setfillstyle(SOLID_FILL,9);
 floodfill(100+80+330,432-120,15);
 setfillstyle(SOLID_FILL,12);
 floodfill(100+80+330,448-120,15);
 //happy man  in durgandhpur2
 setcolor(15);
 circle(100+330,410,10);
 ellipse(100+330,410,230,322,5,5);
 circle(96+330,407,1);
 circle(105+330,407,1);
 line(97+330,420,97+330,425);
 line(103+330,420,103+330,425);
 line(97+330,425,103+330,425);
 line(97+330,425,90+330,428);
 line(103+330,425,110+330,428);
 line(90+330,428,87+330,445);
 line(93+330,433,90+330,447);
 line(87+330,445,90+330,447);
 line(110+330,428,113+330,445);
 line(107+330,433,110+330,447);
 line(113+330,445,110+330,447);
 line(93+330,433,95+330,445);
 line(107+330,433,105+330,445);
 line(95+330,445,105+330,445);
 line(95+330,445,93+330,470);
 line(100+330,450,98+330,470);
 line(93+330,470,98+330,470);
 line(105+330,445,107+330,470);
 line(100+330,450,102+330,470);
 line(107+330,470,102+330,470);
 //colur the man
 setfillstyle(SOLID_FILL,6);
 floodfill(100+330,410,15);
 floodfill(100+330,423,15);
 setfillstyle(SOLID_FILL,9);
 floodfill(100+330,432,15);
 setfillstyle(SOLID_FILL,12);
 floodfill(100+330,448,15);
 //pain piyo good jiyo]
 setcolor(11);
 line(285+330,453,280+330,479);
 line(290+330,453,295+330,479);
 line(285+330,453,290+330,453);
 line(280+330,479,295+330,479);
 setfillstyle(LTBKSLASH_FILL,9);
 floodfill(288+330,460,11);
 //10 years younger
 setcolor(13);
 settextstyle(8,HORIZ_DIR,7);
 outtextxy(10,150,"10 YEARS BACK......");
 setcolor(10);
 rectangle(99,49,541,151);
 rectangle(98,48,542,152);
 setfillstyle(SOLID_FILL,0);
 bar(100,50,540,150);
 gotoxy(16,5);
 printf("TEN YEARS BACK THE TWO VILAGES WERE VERY PROSPEROUS");
 delay(15);
 gotoxy(16,6);
 printf("AND  THE  PEOPLE  WERE  VERY  HAPPY  TOO. THEY  HAD");
 delay(15);
 gotoxy(16,7);
 printf("ENERGY RESOURCES ON  A LARGE  SCALE.");
 getch();
 for(vm=0;vm<35;vm++)
 {
  setcolor(random(15));
   rectangle(99,49,541,151);
  rectangle(98,48,542,152);
  delay(100);
 }
 for (vm=0;vm<640;vm++)
 {
  setcolor(0);
  rectangle(vm,170 ,vm,479);
  delay(5);
 }
 //------------------------------ 10 YAEAHDSU BASIH ===========================================================================
  setcolor(11);
  rectangle(1,170,310,479);
  rectangle(330,170,639,479);



 //s_d 1-----------------------------------------------------------------------------------
 //house
 setcolor(7);
 line(60,290,120,290);
 line(120,290,145,325);
 line(145,325,145,360);
 line(145,360,85,360);
 line(85,360,85,325);
 line(85,325,145,325);
 line(85,325,60,290);
 line(60,290,35,325);
 line(35,325,35,360);
 line(35,360,85,360);
 line(35,325,85,325);
 rectangle(50,335,70,360);
 rectangle(105,335,125,345);

 circle(60,310,7);

 //chath & p
 setfillstyle(SOLID_FILL,8);
 floodfill(110,310,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(110,330,7);
 //dor
 setfillstyle(SOLID_FILL,5);
 floodfill(110,340,7);
 floodfill(60,340,7);
 //fr
 //co
 setfillstyle(SOLID_FILL,13);
 floodfill(60,310,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(60,330,7);
 setfillstyle(SOLID_FILL,3);
 floodfill(60,320,7);
 //----------------------
 //h 2
 line(60+90,290+70,120+90,290+70);
 line(120+90,290+70,145+90,325+70);
 line(145+90,325+70,145+90,360+70);
 line(145+90,360+70,85+90,360+70);
 line(85+90,360+70,85+90,325+70);
 line(85+90,325+70,145+90,325+70);
 line(85+90,325+70,60+90,290+70);
 line(60+90,290+70,35+90,325+70);
 line(35+90,325+70,35+90,360+70);
 line(35+90,360+70,85+90,360+70);
 line(35+90,325+70,85+90,325+70);
 circle(60+90,310+70,7);
 rectangle(50+90,335+70,70+90,360+70);
 rectangle(105+90,335+70,125+90,345+70);
 //chath & p
 setfillstyle(SOLID_FILL,8);
 floodfill(110+90,310+70,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(110+90,330+70,7);
 //dor
 setfillstyle(SOLID_FILL,5);
 floodfill(110+90,340+70,7);
 floodfill(60+90,340+70,7);
 //fr
 //co
 setfillstyle(SOLID_FILL,13);
 floodfill(60+90,310+70,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(60+90,330+70,7);
 setfillstyle(SOLID_FILL,3);
 floodfill(60+90,320+70,7);

 //tree 1
 setcolor(6);
 ellipse(190+60,320+30,260,90,5,35);
 ellipse(210+60,320+30,90,280,5,35);
 arc(190+60,280+30,145,295,15);
 arc(170+60,260+30,95,295,15);
 arc(175+60,240+30,55,210,15);
 arc(195+60,230+30,0,165,15);
 arc(220+60,239+30,300,135,15);
 arc(225+60,265+30,255,70,15);
 arc(210+60,280+30,255,360,15);

 arc(200+60,280+30,220,320,10);
 arc(200+60,360+30,20,160,10);
 //fillin
 setfillstyle(SOLID_FILL,2);
 floodfill(220+60,265+30,6);

 setfillstyle(SOLID_FILL,6);
 floodfill(200+60,295+30,6);

 //tree 2
 setcolor(6);
 ellipse(190-140,320+110,260,90,5,35);
 ellipse(210-140,320+110,90,280,5,35);
 arc(190-140,280+110,145,295,15);
 arc(170-140,260+110,95,295,15);
 arc(175-140,240+110,55,210,15);
 arc(195-140,230+110,0,165,15);
 arc(220-140,239+110,300,135,15);
 arc(225-140,265+110,255,70,15);
 arc(210-140,280+110,255,360,15);

 arc(200-140,280+110,220,320,10);
 arc(200-140,360+110,20,160,10);
 //fillin
 setfillstyle(SOLID_FILL,2);
 floodfill(220-140,265+110,6);

 setfillstyle(SOLID_FILL,6);
 floodfill(200-140,295+110,6);

 //tap
 setcolor(8);
 line(250,420,250,475);
 line(250,420,265,420);
 line(265,420,265,440);
 line(265,440,275,440);
 line(275,440,275,435);
 line(275,435,270,435);
 line(270,435,270,430);
 line(270,430,285,430);
 line(285,430,285,435);
 line(285,435,280,435);
 line(280,435,280,440);
 line(280,440,290,440);
 line(290,440,290,450);
 line(290,450,285,450);
 line(285,450,285,445);
 line(285,445,265,445);
 line(265,445,265,475);
 line(265,475,250,475);
 setfillstyle(SOLID_FILL,7);
 floodfill(255,470,8);
 //happy man  in sunderpur1
 setcolor(15);
 circle(100,410,10);
 ellipse(100,410,230,322,5,5);
 circle(96,407,1);
 circle(105,407,1);
 line(97,420,97,425);
 line(103,420,103,425);
 line(97,425,103,425);
 line(97,425,90,428);
 line(103,425,110,428);
 line(90,428,87,445);
 line(93,433,90,447);
 line(87,445,90,447);
 line(110,428,113,445);
 line(107,433,110,447);
 line(113,445,110,447);
 line(93,433,95,445);
 line(107,433,105,445);
 line(95,445,105,445);
 line(95,445,93,470);
 line(100,450,98,470);
 line(93,470,98,470);
 line(105,445,107,470);
 line(100,450,102,470);
 line(107,470,102,470);
 //colur the man
 setfillstyle(SOLID_FILL,6);
 floodfill(100,410,15);
 floodfill(100,423,15);
 setfillstyle(SOLID_FILL,9);
 floodfill(100,432,15);
 setfillstyle(SOLID_FILL,12);
 floodfill(100,448,15);
 //happy man  in SUNDERPUR 2
 setcolor(15);
 circle(100+80,410-120,10);
 ellipse(100+80,410-120,230,322,5,5);
 circle(96+80,407-120,1);
 circle(105+80,407-120,1);
 line(97+80,420-120,97+80,425-120);
 line(103+80,420-120,103+80,425-120);
 line(97+80,425-120,103+80,425-120);
 line(97+80,425-120,90+80,428-120);
 line(103+80,425-120,110+80,428-120);
 line(90+80,428-120,87+80,445-120);
 line(93+80,433-120,90+80,447-120);
 line(87+80,445-120,90+80,447-120);
 line(110+80,428-120,113+80,445-120);
 line(107+80,433-120,110+80,447-120);
 line(113+80,445-120,110+80,447-120);
 line(93+80,433-120,95+80,445-120);
 line(107+80,433-120,105+80,445-120);
 line(95+80,445-120,105+80,445-120);
 line(95+80,445-120,93+80,470-120);
 line(100+80,450-120,98+80,470-120);
 line(93+80,470-120,98+80,470-120);
 line(105+80,445-120,107+80,470-120);
 line(100+80,450-120,102+80,470-120);
 line(107+80,470-120,102+80,470-120);
 //colur the man
 setfillstyle(SOLID_FILL,6);
 floodfill(100+80,410-120,15);
 floodfill(100+80,423-120,15);
 setfillstyle(SOLID_FILL,9);
 floodfill(100+80,432-120,15);
 setfillstyle(SOLID_FILL,12);
 floodfill(100+80,448-120,15);
  //pain piyo good jiyo]
 setcolor(11);
 line(285,453,280,479);
 line(290,453,295,479);
 line(285,453,290,453);
 line(280,479,295,479);
 setfillstyle(LTBKSLASH_FILL,9);
 floodfill(288,460,11);
 //d_pr 1======================================================================================
 //house
 setcolor(7);
 line(60+330,290,120+330,290);
 line(120+330,290,145+330,325);
 line(145+330,325,145+330,360);
 line(145+330,360,85+330,360);
 line(85+330,360,85+330,325);
 line(85+330,325,145+330,325);
 line(85+330,325,60+330,290);
 line(60+330,290,35+330,325);
 line(35+330,325,35+330,360);
 line(35+330,360,85+330,360);
 line(35+330,325,85+330,325);
 rectangle(50+330,335,70+330,360);
 rectangle(105+330,335,125+330,345);

 circle(60+330,310,7);

 //chath & p
 setfillstyle(SOLID_FILL,8);
 floodfill(110+330,310,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(110+330,330,7);
 //dor
 setfillstyle(SOLID_FILL,5);
 floodfill(110+330,340,7);
 floodfill(60+330,340,7);
 //fr
 //co
 setfillstyle(SOLID_FILL,13);
 floodfill(60+330,310,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(60+330,330,7);
 setfillstyle(SOLID_FILL,3);
 floodfill(60+330,320,7);
 //----------------------
 //h 2
 line(60+90+330,290+70,120+90+330,290+70);
 line(120+90+330,290+70,145+90+330,325+70);
 line(145+90+330,325+70,145+90+330,360+70);
 line(145+90+330,360+70,85+90+330,360+70);
 line(85+90+330,360+70,85+90+330,325+70);
 line(85+90+330,325+70,145+90+330,325+70);
 line(85+90+330,325+70,60+90+330,290+70);
 line(60+90+330,290+70,35+90+330,325+70);
 line(35+90+330,325+70,35+90+330,360+70);
 line(35+90+330,360+70,85+90+330,360+70);
 line(35+90+330,325+70,85+90+330,325+70);
 circle(60+90+330,310+70,7);
 rectangle(50+90+330,335+70,70+90+330,360+70);
 rectangle(105+90+330,335+70,125+90+330,345+70);
 //chath & p
 setfillstyle(SOLID_FILL,8);
 floodfill(110+90+330,310+70,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(110+90+330,330+70,7);
 //dor
 setfillstyle(SOLID_FILL,5);
 floodfill(110+90+330,340+70,7);
 floodfill(60+90+330,340+70,7);
 //fr
 //co
 setfillstyle(SOLID_FILL,13);
 floodfill(60+90+330,310+70,7);
 setfillstyle(SOLID_FILL,9);
 floodfill(60+90+330,330+70,7);
 setfillstyle(SOLID_FILL,3);
 floodfill(60+90+330,320+70,7);

 //b tree 1
 setcolor(6);
 ellipse(190+60+330,320+30,260,341,5,35);
 ellipse(210+60+330,320+30,201,280,5,35);
 line(585,362,595,362);
 arc(200+60+330,360+30,20,160,10);
 //fillin
 setfillstyle(SOLID_FILL,6);
 floodfill(200+60+330,295+30+50,6);
 //b tree 2
 setcolor(6);
 ellipse(190-140+330,320+110,260,341,5,35);
 ellipse(210-140+330,320+110,201,280,5,35);
 line(585-200,350+93,595-200,350+93);
 arc(200-140+330,360+110,20,160,10);
 //fillin
 setfillstyle(SOLID_FILL,6);
 floodfill(200-140+330,295+160,6);
 //tap
 setcolor(8);
 line(250+330,420,250+330,475);
 line(250+330,420,265+330,420);
 line(265+330,420,265+330,440);
 line(265+330,440,275+330,440);
 line(275+330,440,275+330,435);
 line(275+330,435,270+330,435);
 line(270+330,435,270+330,430);
 line(270+330,430,285+330,430);
 line(285+330,430,285+330,435);
 line(285+330,435,280+330,435);
 line(280+330,435,280+330,440);
 line(280+330,440,290+330,440);
 line(290+330,440,290+330,450);
 line(290+330,450,285+330,450);
 line(285+330,450,285+330,445);
 line(285+330,445,265+330,445);
 line(265+330,445,265+330,475);
 line(265+330,475,250+330,475);
 setfillstyle(SOLID_FILL,7);
 floodfill(255+330,470,8);
 //happy man  in dpr 1
 setcolor(15);
 circle(100+80+330,410-120,10);
 ellipse(100+80+330,420-120,38,122,5,5);
 circle(96+80+330,407-120,1);
 circle(105+80+330,407-120,1);
 line(97+80+330,420-120,97+80+330,425-120);
 line(103+80+330,420-120,103+80+330,425-120);
 line(97+80+330,425-120,103+80+330,425-120);
 line(97+80+330,425-120,90+80+330,428-120);
 line(103+80+330,425-120,110+80+330,428-120);
 line(90+80+330,428-120,87+80+330,445-120);
 line(93+80+330,433-120,90+80+330,447-120);
 line(87+80+330,445-120,90+80+330,447-120);
 line(110+80+330,428-120,113+80+330,445-120);
 line(107+80+330,433-120,110+80+330,447-120);
 line(113+80+330,445-120,110+80+330,447-120);
 line(93+80+330,433-120,95+80+330,445-120);
 line(107+80+330,433-120,105+80+330,445-120);
 line(95+80+330,445-120,105+80+330,445-120);
 line(95+80+330,445-120,93+80+330,470-120);
 line(100+80+330,450-120,98+80+330,470-120);
 line(93+80+330,470-120,98+80+330,470-120);
 line(105+80+330,445-120,107+80+330,470-120);
 line(100+80+330,450-120,102+80+330,470-120);
 line(107+80+330,470-120,102+80+330,470-120);
 //colur the man
 setfillstyle(SOLID_FILL,6);
 floodfill(100+80+330,410-120,15);
 floodfill(100+80+330,423-120,15);
 setfillstyle(SOLID_FILL,9);
 floodfill(100+80+330,432-120,15);
 setfillstyle(SOLID_FILL,12);
 floodfill(100+80+330,448-120,15);
 //happy man  in durgandhpur2
 setcolor(15);
 circle(100+330,410,10);
 ellipse(100+330,420,38,122,5,5);
 circle(96+330,407,1);
 circle(105+330,407,1);
 line(97+330,420,97+330,425);
 line(103+330,420,103+330,425);
 line(97+330,425,103+330,425);
 line(97+330,425,90+330,428);
 line(103+330,425,110+330,428);
 line(90+330,428,87+330,445);
 line(93+330,433,90+330,447);
 line(87+330,445,90+330,447);
 line(110+330,428,113+330,445);
 line(107+330,433,110+330,447);
 line(113+330,445,110+330,447);
 line(93+330,433,95+330,445);
 line(107+330,433,105+330,445);
 line(95+330,445,105+330,445);
 line(95+330,445,93+330,470);
 line(100+330,450,98+330,470);
 line(93+330,470,98+330,470);
 line(105+330,445,107+330,470);
 line(100+330,450,102+330,470);
 line(107+330,470,102+330,470);
 //colur the man
 setfillstyle(SOLID_FILL,6);
 floodfill(100+330,410,15);
 floodfill(100+330,423,15);
 setfillstyle(SOLID_FILL,9);
 floodfill(100+330,432,15);
 setfillstyle(SOLID_FILL,12);
 floodfill(100+330,448,15);
 //pani
 gotoxy(16,5);
 printf("BUT THE  PRESENT  CONDITION WAS  TOO  DIFFERENT FROM");
 delay(15);
 gotoxy(16,6);
 printf("THE PAST. (A) USED  THE  ENERGY  RESOURCES SPARINGLY");
 delay(15);
 gotoxy(16,7);
 printf(", WHILE  THE  VILLAGERS  OF (B)  ON  THE  OTHER HAND");
 gotoxy(16,8);
 printf("CONSUMED THEM  CARELESSLY. HENCE THEY FACED SCARCITY");
 gotoxy(16,9);
 printf("OF  WATER,  ELECTRICITY ETC  AND OF  OTHER DAILY AND");
getch();
 for(vm=0;vm<35;vm++)
 {
  setcolor(random(15));
  rectangle(99,49,541,151);
  rectangle(98,48,542,152);

  delay(100);
 }
   getch();
   setcolor(4);
   rectangle(99,49,541,151);
  setfillstyle(SOLID_FILL,0);
  floodfill(101,51,4);
 gotoxy(16,5);
 printf("USEFUL RESOURCES ,BUT THE VILLAGERS OF  (A)  DID NOT");
 gotoxy(16,6);
 printf("FACED SUCH  PROBLEMS BECAUSE, THEY  MADE GOOD USE OF");
 gotoxy(16,7);
 printf("ENERGY RESOURCES.");





 getch();
}