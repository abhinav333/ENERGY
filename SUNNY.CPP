#include"conio.h"
#include"stdio.h"
#include"stdlib.h"
#include"graphics.h"
#include"dos.h"
#include"alloc.h"
void rays(int x,int y,int sid,int color)
{
 setcolor(color);
 line(x,y,x,y+sid);
 line(x,y+sid,x+5,y+sid-5);
 line(x,y+sid,x-5,y+sid-5);

}
void cir()
{
 int x,r;

 setcolor(0);
 for(x=0;x<639;x=x+100)
 {
  circle(x,0,0);

 }
 for(x=0;x<639;x=x+100)
 {
  circle(x,100,0);

 }
 for(x=0;x<639;x=x+100)
 {
  circle(x,200,0);

 }
 for(x=0;x<639;x=x+100)
 {
  circle(x,300,0);

 }
 for(x=0;x<639;x=x+100)
 {
  circle(x,400,0);

 }
 //oikyh
 for(r=0;r<75;r++)
 {
  setcolor(0);
  setfillstyle(SOLID_FILL,0);
  pieslice(0,0,0,360,r);
  pieslice(100,0,0,360,r);
  pieslice(200,0,0,360,r);
  pieslice(300,0,0,360,r);
  pieslice(400,0,0,360,r);
  pieslice(500,0,0,360,r);
  pieslice(600,0,0,360,r);

  //sdef
  pieslice(0,100,0,360,r);
  pieslice(100,100,0,360,r);
  pieslice(200,100,0,360,r);
  pieslice(300,100,0,360,r);
  pieslice(400,100,0,360,r);
  pieslice(500,100,0,360,r);
  pieslice(600,100,0,360,r);

  //kjl//
  pieslice(0,200,0,360,r);
  pieslice(100,200,0,360,r);
  pieslice(200,200,0,360,r);
  pieslice(300,200,0,360,r);
  pieslice(400,200,0,360,r);
  pieslice(500,200,0,360,r);
  pieslice(600,200,0,360,r);

  //jhk;//
  pieslice(0,300,0,360,r);
  pieslice(100,300,0,360,r);
  pieslice(200,300,0,360,r);
  pieslice(300,300,0,360,r);
  pieslice(400,300,0,360,r);
  pieslice(500,300,0,360,r);
  pieslice(600,300,0,360,r);

  //jhk;//
  pieslice(0,400,0,360,r);
  pieslice(100,400,0,360,r);
  pieslice(200,400,0,360,r);
  pieslice(300,400,0,360,r);
  pieslice(400,400,0,360,r);
  pieslice(500,400,0,360,r);
  pieslice(600,400,0,360,r);

    //dfsgdfg
  pieslice(0,500,0,360,r);
  pieslice(100,500,0,360,r);
  pieslice(200,500,0,360,r);
  pieslice(300,500,0,360,r);
  pieslice(400,500,0,360,r);
  pieslice(500,500,0,360,r);
  pieslice(600,500,0,360,r);

  }
}
void main()
{
 int gdriver=DETECT,gmode,a,qwe;
 void *iop;
 initgraph(&gdriver, &gmode, "");
  //wel come
 setcolor(15);
 rectangle(0,0,639,479);
 rectangle(0,0,639,479);
 line(0,230,85,260);
 line(0,300,150,230);
 moveto(150,230);
 lineto(270,300);
 lineto(200,260);
 lineto(350,220);
 lineto(500,300);
 moveto(450,274);
 lineto(600,240);
 lineto(669,300);
 line(0,300,639,300);
 setfillstyle(SOLID_FILL,6);
 floodfill(200,280,15);
 floodfill(400,280,15);
 floodfill(600,280,15);
 floodfill(20,280,15);
 //grass
 setfillstyle(SOLID_FILL,10);
 floodfill(20,320,15);
 setfillstyle(SOLID_FILL,11);
 floodfill(20,20,15);
 //sun
 setcolor(14);
 circle(70+500,70,20);
 setfillstyle(SOLID_FILL,14);
 floodfill(70+500,70,14);
    line(70+500,70,70+500,23);
    line(70+500,70,84+500,31);
    line(70+500,70,98+500,33);
    line(70+500,70,104+500,47);
    line(70+500,70,115+500,56);
    line(70+500,70,111+500,69);
  line(70+500,70,117+500,82);
  line(70+500,70,105+500,90);
  line(70+500,70,103+500,105);
  line(70+500,70,87+500,109);
  line(70+500,70,70+500,118);
line(70+500,70,55+500,110);
line(70+500,70,40+500,109);
line(70+500,70,36+500,91);
line(70+500,70,24+500,82);
line(70+500,70,28+500,70);
   line(70+500,70,25+500,58);
   line(70+500,70,35+500,46);
   line(70+500,70,39+500,35);
   line(70+500,70,52+500,32);

getch();
qwe=imagesize(520,22,620,120);
iop=malloc(qwe);
getimage(520,22,620,120,iop);
for(a=520;a>30;a--)
{
 putimage(a,22,iop,COPY_PUT);


}
free(iop);
getch();
setcolor(1);
settextstyle(10,HORIZ_DIR,6);
outtextxy(80,30,"S");
settextstyle(10,HORIZ_DIR,4);
outtextxy(127,70,"OLAR");
setcolor (1);
settextstyle (10,HORIZ_DIR,6);
outtextxy (290,30,"E");
settextstyle (10,HORIZ_DIR,4);
outtextxy (337,70,"NERGY");
//color
setfillstyle(SOLID_FILL,1);
floodfill(100,100,1);
floodfill(148,100,1);
floodfill(163,100,1);
floodfill(200,100,1);
floodfill(245,100,1);
floodfill(300,100,1);
floodfill(340,100,1);
floodfill(372,100,1);
floodfill(402,100,1);
floodfill(434,100,1);
floodfill(470,100,1);

getch();


cir();

 // typing 8is  good for health and wealth

 // solar cooker//
 setcolor(13);
 rectangle(0,0,639,479);
 rectangle(15,15,625,465);
 setfillstyle(CLOSE_DOT_FILL,11);
 floodfill(10,10,13);
 //setfillstyle(SOLID_FILL,9);
 //floodfill(30,30,13);
 setcolor(13);
 settextstyle(7,HORIZ_DIR,5);
 outtextxy(80,30,"   SOLAR ENERGY");
  //sdr

 gotoxy(10,8);
 printf("    The solar energy recieved on every square metre surface of the");
 delay(15);
 gotoxy(5,9);
 printf("earth is 1.36 kWh.Of these some energy is reflected in space while some");
 delay(15);
 gotoxy(5,10);
 printf("is absorbed by the atmosphere.Thus,47 percent of solar energy remains on");
 delay(15);
 gotoxy(5,11);
 printf("Earth. According to these figures - INDIA recieves 60 *1000000000000 kWh" );
 delay(15);
 gotoxy(5,12);
 printf("solar energy every year. ");
 delay(15);
 gotoxy(5,13);
 printf("Solar energy is converted into chemical energy  by  the process of photo");
 delay(15);
 gotoxy(5,14);
 printf("- synthesis in plants. Besides water risen high above the ground due  to");
 delay(15);
 gotoxy(5,15);
 printf("evaporation of water and is stored there cointains solar energy  in  the");
 delay(15);
 gotoxy(5,16);
 printf("form of potential mechanical energy,which is used in hydro power stations");
 delay(15);
 gotoxy(5,17);
 printf("for generation of electricity.");

 getch();
 for(a=18,qwe=623;a<257,qwe>257;a++,qwe--)
{
 setcolor(0);
 rectangle(a,33,qwe,460);
 delay(2);
}
//sun
   setcolor(11);
   settextstyle(7,HORIZ_DIR,5);
   outtextxy(80,30,"   SOLAR COOKER");

 setcolor(14);
 circle(70+200,70+80,20);
 setfillstyle(SOLID_FILL,14);
 floodfill(70+200,70+80,14);
    line(70+200,70+80,70+200,23+80);
    line(70+200,70+80,84+200,31+80);
    line(70+200,70+80,98+200,33+80);
    line(70+200,70+80,104+200,47+80);
    line(70+200,70+80,115+200,56+80);
    line(70+200,70+80,111+200,69+80);
  line(70+200,70+80,117+200,82+80);
  line(70+200,70+80,105+200,90+80);
  line(70+200,70+80,103+200,105+80);
  line(70+200,70+80,87+200,109+80);
  line(70+200,70+80,70+200,118+80);
line(70+200,70+80,55+200,110+80);
line(70+200,70+80,40+200,109+80);
line(70+200,70+80,36+200,91+80);
line(70+200,70+80,24+200,82+80);
line(70+200,70+80,28+200,70+80);
   line(70+200,70+80,25+200,58+80);
   line(70+200,70+80,35+200,46+80);
   line(70+200,70+80,39+200,35+80);
   line(70+200,70+80,52+200,32+80);
      //sloar cooker //
  setcolor(15);
  line(150,250,150,400);
  line(150,400,390,400);
  line(390,400,390,250);
  line(390,250,350,250);
  line(350,250,340,360);
  line(340,360,200,360);
  line(200,360,190,250);
  line(190,250,150,250);
  line(150,270,192,270);
  line(348,270,390,270);
  line(150,271,192,271);
  line(348,271,390,271);
  line(191,256,349,256);
  line(191,257,349,257);
  line(191,266,349,266);
  //bhandara
  ellipse(270,320,0,360,25,8);
  ellipse(270,325,180,360,25,8);
  ellipse(270,345,180,360,25,8);
  line(245,320,245,345);
  line(295,320,295,345);
  //color//
  setfillstyle(INTERLEAVE_FILL,7);
  floodfill(280,380,15);
  setfillstyle(SOLID_FILL,7);
  floodfill(180,260,15);
  floodfill(380,260,15);
  floodfill(280,325,15);
  floodfill(280,330,15);
  floodfill(280,335,15);

 setcolor(10);
 rectangle(400,85,630,470);
 rectangle(405,90,625,465);
 setfillstyle(SOLID_FILL,9);
  floodfill(402,87,10);
 //label
 setcolor(10);
 line(100,300,170,300);
 line(170,300,165,305);
 line(170,300,165,295);
 gotoxy(3,19);
 printf("Insulated");
 gotoxy(4,20);
 printf("Material");
 gotoxy(30,16);
 printf("Glass Lid");
 gotoxy(32,19);
 printf("Vessel");

 //FACTO
 setcolor(10);
    rectangle(400,85,630,470);
    rectangle(405,90,625,465);
    setfillstyle(SOLID_FILL,9);
    floodfill(402,87,10);
    //
    settextstyle(8,HORIZ_DIR,3);
    outtextxy(425,90,"*FACTOMETER*");
    //
    delay(15);
    gotoxy(53,9);
    printf("      The world's largest");
    delay(15);
    gotoxy(53,10);
    printf("SOLAR MASS COOKING SYSTEM");
    delay(15);
    gotoxy(53,11);
    printf("was established in Andra-");
    delay(15);
    gotoxy(53,12);
    printf("Pradesh's Tirupati temple,");
    delay(15);
    gotoxy(53,13);
    printf("in year 2002 . Here about");
    delay(15);
    gotoxy(53,14);
    printf("30,000 meals  are  served");
    delay(15);
    gotoxy(53,15);
    printf("daily to pilgrims. It has");
    delay(15);
    gotoxy(53,16);
    printf("106 parabolic reflectors, ");
    delay(15);
    gotoxy(53,17);
    printf("each 9.2 sq metre in area.");
    delay(15);
    gotoxy(53,18);
    printf("these rotate automatically");
    delay(15);
    gotoxy(53,19);
    printf("to  follow  the  sun  and");
    delay(15);
    gotoxy(53,20);
    printf("focus  its  rays  on  the");
    delay(15);
    gotoxy(53,21);
    printf("recievers placed  on  the");
    delay(15);
    gotoxy(53,22);
    printf("focii of the dishes.These");
    delay(15);
    gotoxy(53,23);
    printf("may be heated as much  as");
    delay(15);
    gotoxy(53,24);
    printf("550 - 650 degrees celcius.");
    getch();
    for(a=406,qwe=624;a<510,qwe>510;a++,qwe--)
    {
     setcolor(0);
     rectangle(a,125,qwe,465);
     delay(18);
    }
    delay(15);
    gotoxy(53,9);
    printf("The water in these vessels");
     delay(15);
    gotoxy(53,10);
    printf("gets converted into  steam");
    delay(15);
    gotoxy(53,11);
    printf("which is  sent in  kitchen");
    delay(15);
    gotoxy(53,12);
    printf("through an insulated pipe-");
    delay(15);
    gotoxy(53,13);
    printf("line.A boiler system using");
    delay(15);
    gotoxy(53,14);
    printf("diesel  oil  is  used   on");
    delay(15);
    gotoxy(53,15);
    printf("cloudy days. The  use  of ");
    delay(15);
    gotoxy(53,16);
    printf("this system has saved  400");
    delay(15);
    gotoxy(53,17);
    printf("litres  diesel oil per day");
    delay(15);
    gotoxy(53,18);
    printf("&  reduced carbon emmision");
    delay(15);
    gotoxy(53,19);
    printf("enormously.");



 //ANIMAX
 gotoxy(16,14);
 printf("Sun rays");
 qwe=0;
 while(qwe!=8)
 {
  for(a=0;a<31;a++)
  {
   rays(200,200,a,14);
   rays(230,200,a,14);
   rays(260,200,a,14);
   rays(290,200,a,14);
   rays(320,200,a,14);
   rays(350,200,a,14);
   delay(20);
   rays(200,200,a,0);
   rays(230,200,a,0);
   rays(260,200,a,0);
   rays(290,200,a,0);
   rays(320,200,a,0);
   rays(350,200,a,0);

  }

  qwe+=1;
 }
   rays(200,200,a,14);
   rays(230,200,a,14);
   rays(260,200,a,14);
   rays(290,200,a,14);
   rays(320,200,a,14);
   rays(350,200,a,14);


 getch();
}
