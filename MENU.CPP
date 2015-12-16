#include"graphics.h"
#include"dos.h"
#include"conio.h"
#include"alloc.h"
#include"stdio.h"
#include"stdlib.h"
#include"math.h"

#include"D:\KCTSCH~1\HFILES~1\FUNCTIONS.H"
#include"D:\KCTSCH~1~2\HFILES~1\KEY.H"

//#include"D:\KCTSCH~1~2\HFILES~1\WELCOM.H"
//#include"D:\KCTSCH~1~2\HFILES~1\PASS.H"
//#include"D:\KCTSCH~1~2\HFILES~1\SCBAN.H"
//#include"D:\KCTSCH~1~2\HFILES~1\BANNER.H"



//#include"D:\KCTSCH~1~2\HFILES~1\INTRO.H"
#include"D:\KCTSCH~1~2\HFILES~1\NTYPES.H"
#include"D:\KCTSCH~1~2\HFILES~1\VILLAGE.H"


//#include"D:\KCTSCH~1~2\HFILES~1\PRESENT.H"
//#include"D:\KCTSCH~1~2\HFILES~1\THANK.H"







void font(int x,int y,int s,int si,char *text)
{
 settextstyle(s,HORIZ_DIR,si);
 outtextxy(x,y,text);
}


void blink(int df)
{
 int lo=0;
 if(df==1)
 {
  while(lo!=20)
  {

   delay(25);
   setcolor(1);
   settextstyle(7,HORIZ_DIR,3);
   outtextxy(185,181,"WHAT IS ENERGY ?");
   delay(25);
   setcolor(11);
   settextstyle(7,HORIZ_DIR,3);
   outtextxy(185,181,"WHAT IS ENERGY ?");
   lo+=1;
  }
 }
 if(df==2)
 {
  while(lo!=20)
  {
   delay(25);
   setcolor(1);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(180,240,"TYPES OF ENERGY");
  delay(25);
  setcolor(11);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(180,240,"TYPES OF ENERGY");



   lo+=1;
  }
 }
 if(df==4)

 {
  while(lo!=20)
  {

   delay(25);
   setcolor(1);
  settextstyle(7,HORIZ_DIR,3);
   outtextxy(200,370,"     QUIZ");
     delay(25);
   setcolor(11);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(200,370,"     QUIZ");

   lo+=1;
  }
 }
 if(df==3)
 {
  while(lo!=20)
  {

   delay(25);
   setcolor(1);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(130,305,"CONSERVATION OF ENERGY");
  delay(25);
  setcolor(11);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(130,305,"CONSERVATION OF ENERGY");


   lo+=1;
  }

 }




}





void highlight(int ch)
{
 if(ch==1)
 {
  setcolor(10);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(185,181,"WHAT IS ENERGY ?");
 }
 if(ch==2)
 {
  setcolor(10);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(180,240,"TYPES OF ENERGY");
 }
 if(ch==4)
 {
  setcolor(10);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(200,370,"     QUIZ");

 }
 if(ch==3)
 {
  setcolor(10);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(130,305,"CONSERVATION OF ENERGY");
 }

}
void dehighlight(int j1)
{
 auto int j=j1;
 if(j==1)
 {
  setcolor(12);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(185,181,"WHAT IS ENERGY ?");
 }
 if(j==2)
 {
  setcolor(12);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(180,240,"TYPES OF ENERGY");
 }
 if(j==4)
 {
  setcolor(12);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(200,370,"     QUIZ");

 }
 if(j==3)
 {
  setcolor(12);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(130,305,"CONSERVATION OF ENERGY");
 }
}



int getmenuchoice()
{

 int rep,choice,key,v,t1;

 setcolor(10);
 rectangle(0,0,639,479);
 rectangle(20,20,619,459);
 setfillstyle(SOLID_FILL,1);
 floodfill(12,12,10);
 ellipse(300,88,0,360,201,57);
 setfillstyle(SOLID_FILL,9);
 floodfill(300,40,10);
 setcolor(14);
 settextstyle(10,HORIZ_DIR,6);
 outtextxy(120,21,"< MENU >");
 delay(350);
 setfillstyle(SOLID_FILL,6);
 floodfill(125,88,14);
 floodfill(204,88,14);
 floodfill(275,88,14);
 floodfill(345,88,14);
 floodfill(397,88,14);
 floodfill(478,88,14);
//main---------------------------------------------------------------------









//exit//------------------------------------------------------------------===
 setcolor(14);



 rectangle(40,415,600,445);
 rectangle(35,410,605,450);
 setfillstyle(SOLID_FILL,14);
 floodfill(36,413,14);
 setcolor(9);
 font(50,420,1,1,"%%%%%%%%%%% Press    ESC    to    exit %%%%%%%%%%%%%");
//-------------------------------------------------


 //------------------------------------------------

 setcolor(12);
 settextstyle(7,HORIZ_DIR,3);
 outtextxy(185,181,"WHAT IS ENERGY ?");

 outtextxy(180,240,"TYPES OF ENERGY");
 outtextxy(200,370,"     QUIZ");
 outtextxy(130,305,"CONSERVATION OF ENERGY");

 choice=1;
 highlight(1);
 while(rep!=1)
 {
   key=getkey();

   switch(key)
   {
    case DOWN_ARROW:
     if(choice!=4)
     {
      choice+=1;
      highlight(choice);
      dehighlight(choice-1);
     }
     break;
    case UP_ARROW:
     if(choice!=1)
     {
      choice-=1;
      highlight(choice);
      dehighlight(choice+1);
     }
     break;
    case ESC:
	return (5);
   case ENTER:
     blink(choice);
     if(choice==1)
     {

       return(1);

     }
     if(choice==3)
     {

       return(3);

     }

     if(choice==2)
     {

       return(2);

     }
      if(choice==4)
     {
      return(4);
     }

     break;







   }//swit_case loop


  }//while loop





}
void main()
{
 int d=DETECT,m;
 initgraph(&d,&m,"C:\\TC\\BGI");
 int far *b;
 /*
 welcome();
 cleardevice();
 pass();
 cleardevice();
 scbanner();
 cleardevice();
 banner();
 cleardevice();
 */

 while(*b!=5)
 {
  *b=getmenuchoice();
  cleardevice();
  if(*b==1)
  {
   intro();
  }
  /*
  if(*b==3)
  {
   conserve();
  }
    */
  if(*b==2)
  {
   types();
   }
  cleardevice();
 }
 //present();
 cleardevice();
 //thank();

}




