#include"conio.h"
#include"stdio.h"
#include"graphics.h"
#include"dos.h"
#include"alloc.h"
#include"stdlib.h"

#include"D:\KCTSCH~1\HFILES~1\MOUSE.H"
#include"D:\KCTSCH~1\HFILES~1\NAME.H"
#include"D:\KCTSCH~1\HFILES~1\FUNCTION.H"
int question_1()
 {
    int *button,*x,*y,o=0,fo=0,exit=0,value;
    initmouse();
    setcolor(1);
     rectangle(0,0,638,479);
     rectangle(1,1,638,479);
     rectangle(20,20,618,459);
     rectangle(21,21,617,458);
     setfillstyle(SOLID_FILL,4);
     floodfill(12,12,1);
     setcolor(14);
     settextstyle(7,HORIZ_DIR,6);

     ellipse(325,70,0,360,99,37);
     setfillstyle(SOLID_FILL,12);
     floodfill(326,74,14);
     setcolor(4);
     outtextxy(265,37,"QUIZ");
     outtextxy(266,38,"QUIZ");
     setcolor(4);
     rectangle(50,140,590,190);
     rectangle(40,130,600,200);
     rectangle(51,141,591,191);
     rectangle(41,131,601,201);

     setfillstyle(SOLID_FILL,14);
     floodfill(45,135,4);


    rectangle(520,40,608,80);
    rectangle(50,40,128,80);
    setfillstyle(SOLID_FILL,1);
    floodfill(67,43,4);
    floodfill(524,43,4);

    settextstyle(7,HORIZ_DIR,1);
    outtextxy(60,50,"NEXT");
    outtextxy(525,50,"FREEZE");
    //question
    setcolor(11);;
    settextstyle(7,HORIZ_DIR,1);
    outtextxy(100,150,"Q1: WHAT SHOULD YOU DO WITH ENERGY ?");
    settextstyle(2,HORIZ_DIR,6);
    //OPTIONS
    outtextxy(135,225,"WASTE IT ON OUR WILL ");
    outtextxy(135,285,"USE IT AS REQUIRED");
    outtextxy(135,345,"USE IT RECKLESSLY ");
    outtextxy(135,405,"NONE OF THESE ");
    setcolor(11);
    outtextxy(135,245,"---------------------");
    outtextxy(135,305,"---------------------");
    outtextxy(135,365,"--------------------- ");
    outtextxy(135,425,"--------------------- ");
	 //RATIO BUTTONS
    setcolor(14);
    circle(100,240,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,240,14);
    circle(100,300,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,300,14);
    circle(100,360,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,360,14);
    circle(100,420,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,420,14);
    setcolor(13);
    rectangle(90,230,110,250);
    rectangle(90,290,110,310);
    rectangle(90,350,110,370);
    rectangle(90,410,110,430);
    setfillstyle(CLOSE_DOT_FILL,1);
    rectangle(30,230,80,250);
    floodfill(31,231,13);
    rectangle(30,290,80,310);
    floodfill(31,291,13);
    rectangle(30,350,80,370);
    floodfill(31,351,13);
    rectangle(30,410,80,430);
    floodfill(31,411,13);
    setcolor(14);
    settextstyle(2,HORIZ_DIR,4);
    outtextxy(32,230,"CLICK ");
    outtextxy(56,238,"HERE ");
    outtextxy(32,291,"CLICK");
    outtextxy(56,299,"HERE ");
    outtextxy(32,351,"CLICK ");
    outtextxy(56,359,"HERE ");
    outtextxy(32,411,"CLICK ");
    outtextxy(56,419,"HERE ");
    settextstyle(7,HORIZ_DIR,1);/*
    setcolor(10);
   rectangle(520,400,600,440);
   setfillstyle(SOLID_FILL,1);
   floodfill(521,401,10);
   outtextxy(535,407,"EXIT");
      */

    while(exit!=1)
     {
      showmouseptr();



      getmousepos(button,x,y);
      restrictmouseptr(89,229,111,431);

      if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	highlight2(5);

       }
      if(*x>520 && *y>40 && *x<608 && *y<80)
      {
	highlight2(6);
      }

      dehighlight2(5);
      dehighlight2(6);

      if((*button & 1)==1)
      {
       if(*x>30 && *y>230 && *x<80 && *y<250)
       {
	highlight2(1);
	dehighlight2(1);
	o=1;
       }
       if(*x>30 && *y>290 && *x<80 && *y<310)
       {
	highlight2(2);
	dehighlight2(2);
	o=2;
       }
       if(*x>30 && *y>350 && *x<80 && *y<370)
       {
	highlight2(3);
	dehighlight2(3);
	o=3;
       }
       if(*x>30 && *y>410 && *x<80 && *y<430)
       {
	highlight2(4);
	dehighlight2(4);
	o=4;
       }
       if(*x>520 && *y>400 && *x<600 && *y<440)
      {
       value=3;
       exit=1;
      }

       if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	fo=0;
	exit=1;
       }
       if(*x>520 && *y>40 && *x<608 && *y<80)
       {
	fo=o;
	exit=1;
       }
      }//butt
     }//while

     hidemouseptr();
     //erase options
     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     setcolor(9);
     if(fo!=0)
     {
      if(fo==2)
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(150,260,"CORRECT ANSWER !GOOD!");
       value=2;
      }
      else
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(170,260,"SORRY!! WRONG ANSWER!");
       outtextxy(170,290,"CORRECT ANSWER WAS B!");

       value=1;
      }

     }
     if(fo==0)
     {

       settextstyle(8,HORIZ_DIR,3);
       outtextxy(100,260,"DID NOT EVEN TRY TO ANSWER");
       value=0;

     }
     delay(1000);
     dehighlight2(5);
     dehighlight2(6);
     dehighlight2(7);
     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     return(value);

}
int question_2()
{
   int *button,*x,*y,o=0,fo=0,exit=0,value;
   dehighlight2(5);
   dehighlight2(6);
   setcolor(1);
     rectangle(0,0,638,479);
     rectangle(1,1,638,479);
     rectangle(20,20,618,459);
     rectangle(21,21,617,458);
     setfillstyle(SOLID_FILL,4);
     floodfill(12,12,1);
     setcolor(14);
     settextstyle(7,HORIZ_DIR,6);

     ellipse(325,70,0,360,99,37);
     setfillstyle(SOLID_FILL,12);
     floodfill(326,74,14);
     setcolor(4);
     outtextxy(265,37,"QUIZ");
     outtextxy(266,38,"QUIZ");
     setcolor(4);
     rectangle(50,140,590,190);
     rectangle(40,130,600,200);
     rectangle(51,141,591,191);
     rectangle(41,131,601,201);

     setfillstyle(SOLID_FILL,14);
     floodfill(45,135,4);



    initmouse();

    setcolor(4);
    rectangle(520,40,608,80);
    rectangle(50,40,128,80);
    setfillstyle(SOLID_FILL,1);
    floodfill(67,43,4);
    floodfill(524,43,4);

    settextstyle(7,HORIZ_DIR,1);
    outtextxy(60,50,"NEXT");
    outtextxy(525,50,"FREEZE");
    //question
    setcolor(11);
    settextstyle(7,HORIZ_DIR,1);
    outtextxy(80,150,"Q2: WHAT IS THE ULTIMATE SOURCE OF ENERGY ?");
    settextstyle(2,HORIZ_DIR,6);
    //OPTIONS
    outtextxy(135,225,"SUN ");
    outtextxy(135,285,"KEROSENE");
    outtextxy(135,345,"PETROL ");
    outtextxy(135,405,"SOLAR ENENGY ");
    setcolor(11);
    outtextxy(135,245,"------------");
    outtextxy(135,305,"------------");
    outtextxy(135,365,"------------ ");
    outtextxy(135,425,"------------ ");
	 //RATIO BUTTONS
    setcolor(14);
    circle(100,240,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,240,14);
    circle(100,300,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,300,14);
    circle(100,360,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,360,14);
    circle(100,420,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,420,14);
    setcolor(13);
    rectangle(90,230,110,250);
    rectangle(90,290,110,310);
    rectangle(90,350,110,370);
    rectangle(90,410,110,430);
    setfillstyle(CLOSE_DOT_FILL,1);
    rectangle(30,230,80,250);
    floodfill(31,231,13);
    rectangle(30,290,80,310);
    floodfill(31,291,13);
    rectangle(30,350,80,370);
    floodfill(31,351,13);
    rectangle(30,410,80,430);
    floodfill(31,411,13);
    setcolor(14);
    settextstyle(2,HORIZ_DIR,4);
    outtextxy(32,230,"CLICK ");
    outtextxy(56,238,"HERE ");
    outtextxy(32,291,"CLICK");
    outtextxy(56,299,"HERE ");
    outtextxy(32,351,"CLICK ");
    outtextxy(56,359,"HERE ");
    outtextxy(32,411,"CLICK ");
    outtextxy(56,419,"HERE ");
    settextstyle(7,HORIZ_DIR,1);
    /*setcolor(10);
  rectangle(520,400,600,440);
  setfillstyle(SOLID_FILL,1);
  floodfill(521,401,10);
    outtextxy(535,407,"EXIT");
  */
    while(exit!=1)
     {
      showmouseptr();



      getmousepos(button,x,y);
      restrictmouseptr(89,229,111,431);

      if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	highlight2(5);

       }
      if(*x>520 && *y>40 && *x<608 && *y<80)
      {
	highlight2(6);
      }
	 dehighlight2(5);
      dehighlight2(6);
      if((*button & 1)==1)
      {
	if(*x>520 && *y>400 && *x<600 && *y<440)
      {
       value=3;
       exit=1;
      }

       if(*x>30 && *y>230 && *x<80 && *y<250)
       {
	highlight2(1);
	dehighlight2(1);
	o=1;
       }
       if(*x>30 && *y>290 && *x<80 && *y<310)
       {
	highlight2(2);
	dehighlight2(2);
	o=2;
       }
       if(*x>30 && *y>350 && *x<80 && *y<370)
       {
	highlight2(3);
	dehighlight2(3);
	o=3;
       }
       if(*x>30 && *y>410 && *x<80 && *y<430)
       {
	highlight2(4);
	dehighlight2(4);
	o=4;
       }
       if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	fo=0;
	exit=1;
       }
       if(*x>520 && *y>40 && *x<608 && *y<80)
       {
	fo=o;
	exit=1;
       }
      }//butt
     }//while

     hidemouseptr();
     //erase options
     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     setcolor(9);
     if(fo!=0)
     {
      if(fo==1)
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(150,260,"CORRECT ANSWER !GOOD!");
       value=2;
      }
      else
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(170,260,"SORRY!! WRONG ANSWER!");
       outtextxy(170,290,"CORRECT ANSWER WAS A!");
       value=1;
      }

     }
     if(fo==0)
     {

       settextstyle(8,HORIZ_DIR,3);
       outtextxy(100,260,"DID NOT EVEN TRY TO ANSWER");
       value=0;

     }
     delay(1000);
     dehighlight2(5);
     dehighlight2(6);
     dehighlight2(7);
     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     return(value);
}
int question_3()
{
   int *button,*x,*y,o=0,fo=0,exit=0,value;
   dehighlight2(5);
   dehighlight2(6);
   setcolor(1);
     rectangle(0,0,638,479);
     rectangle(1,1,638,479);
     rectangle(20,20,618,459);
     rectangle(21,21,617,458);
     setfillstyle(SOLID_FILL,4);
     floodfill(12,12,1);
     setcolor(14);
     settextstyle(7,HORIZ_DIR,6);

     ellipse(325,70,0,360,99,37);
     setfillstyle(SOLID_FILL,12);
     floodfill(326,74,14);
     setcolor(4);
     outtextxy(265,37,"QUIZ");
     outtextxy(266,38,"QUIZ");
     setcolor(4);
     rectangle(50,140,590,190);
     rectangle(40,130,600,200);
     rectangle(51,141,591,191);
     rectangle(41,131,601,201);

     setfillstyle(SOLID_FILL,14);
     floodfill(45,135,4);



    initmouse();

    setcolor(4);
    rectangle(520,40,608,80);
    rectangle(50,40,128,80);
    setfillstyle(SOLID_FILL,1);
    floodfill(67,43,4);
    floodfill(524,43,4);

    settextstyle(7,HORIZ_DIR,1);
    outtextxy(60,50,"NEXT");
    outtextxy(525,50,"FREEZE");
    //question
    setcolor(11);
    settextstyle(7,HORIZ_DIR,1);
    outtextxy(60,140,"Q3: IN WHICH OF THE FOLLOWING ENERGY USED THE ");
    outtextxy(60,160,"    MOST ? ");
    settextstyle(2,HORIZ_DIR,6);
    //OPTIONS
    outtextxy(135,225,"AGRICULTURE ");
    outtextxy(135,285,"INDUSTRILIZATION");
    outtextxy(135,345,"PHYSIOLOGICAL PROCESS ");
    outtextxy(135,405," ALL OF THE ABOVE");
    setcolor(11);
    outtextxy(135,245,"---------------------");
    outtextxy(135,305,"---------------------");
    outtextxy(135,365,"---------------------");
    outtextxy(135,425,"---------------------");
	 //RATIO BUTTONS
    setcolor(14);
    circle(100,240,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,240,14);
    circle(100,300,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,300,14);
    circle(100,360,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,360,14);
    circle(100,420,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,420,14);
    setcolor(13);
    rectangle(90,230,110,250);
    rectangle(90,290,110,310);
    rectangle(90,350,110,370);
    rectangle(90,410,110,430);
    setfillstyle(CLOSE_DOT_FILL,1);
    rectangle(30,230,80,250);
    floodfill(31,231,13);
    rectangle(30,290,80,310);
    floodfill(31,291,13);
    rectangle(30,350,80,370);
    floodfill(31,351,13);
    rectangle(30,410,80,430);
    floodfill(31,411,13);
    setcolor(14);
    settextstyle(2,HORIZ_DIR,4);
    outtextxy(32,230,"CLICK ");
    outtextxy(56,238,"HERE ");
    outtextxy(32,291,"CLICK");
    outtextxy(56,299,"HERE ");
    outtextxy(32,351,"CLICK ");
    outtextxy(56,359,"HERE ");
    outtextxy(32,411,"CLICK ");
    outtextxy(56,419,"HERE ");
    settextstyle(7,HORIZ_DIR,1);                       /*
    setcolor(10);
  rectangle(520,400,600,440);
  setfillstyle(SOLID_FILL,1);
  floodfill(521,401,10);
  outtextxy(535,407,"EXIT");

						     */
    while(exit!=1)
     {
      showmouseptr();


      getmousepos(button,x,y);
      restrictmouseptr(89,229,111,431);
      if(*x>520 && *y>400 && *x<600 && *y<440)
      {
       highlight2(7);
      }

      if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	highlight2(5);

       }
      if(*x>520 && *y>40 && *x<608 && *y<80)
      {
	highlight2(6);
      }
      dehighlight2(7);
      dehighlight2(5);
      dehighlight2(6);
      if((*button & 1)==1)
      {
	if(*x>520 && *y>400 && *x<600 && *y<440)
      {
       value=3;
       exit=1;
      }

       if(*x>30 && *y>230 && *x<80 && *y<250)
       {
	highlight2(1);
	dehighlight2(1);
	o=1;
       }
       if(*x>30 && *y>290 && *x<80 && *y<310)
       {
	highlight2(2);
	dehighlight2(2);
	o=2;
       }
       if(*x>30 && *y>350 && *x<80 && *y<370)
       {
	highlight2(3);
	dehighlight2(3);
	o=3;
       }
       if(*x>30 && *y>410 && *x<80 && *y<430)
       {
	highlight2(4);
	dehighlight2(4);
	o=4;
       }
       if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	fo=0;
	exit=1;
       }
       if(*x>520 && *y>40 && *x<608 && *y<80)
       {
	fo=o;
	exit=1;
       }
      }//butt
     }//while

     hidemouseptr();
     //erase options
     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     setcolor(9);
     if(fo!=0)
     {
      if(fo==3)
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(150,260,"CORRECT ANSWER !GOOD!");
       value=2;
      }
      else
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(170,260,"SORRY!! WRONG ANSWER!");
       outtextxy(170,290,"CORRECT ANSWER WAS C!");
       value=1;
      }

     }
     if(fo==0)
     {

       settextstyle(8,HORIZ_DIR,3);
       outtextxy(100,260,"DID NOT EVEN TRY TO ANSWER");
       value=0;

     }
     delay(1000);
     dehighlight2(5);
     dehighlight2(6);
     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     return(value);
}
int question_4()
{
   int *button,*x,*y,o=0,fo=0,exit=0,value;
   dehighlight2(5);
   dehighlight2(6);
   setcolor(1);
     rectangle(0,0,638,479);
     rectangle(1,1,638,479);
     rectangle(20,20,618,459);
     rectangle(21,21,617,458);
     setfillstyle(SOLID_FILL,4);
     floodfill(12,12,1);
     setcolor(14);
     settextstyle(7,HORIZ_DIR,6);

     ellipse(325,70,0,360,99,37);
     setfillstyle(SOLID_FILL,12);
     floodfill(326,74,14);
     setcolor(4);
     outtextxy(265,37,"QUIZ");
     outtextxy(266,38,"QUIZ");
     setcolor(4);
     rectangle(50,140,590,190);
     rectangle(40,130,600,200);
     rectangle(51,141,591,191);
     rectangle(41,131,601,201);

     setfillstyle(SOLID_FILL,14);
     floodfill(45,135,4);



    initmouse();

    setcolor(4);
    rectangle(520,40,608,80);
    rectangle(50,40,128,80);
    setfillstyle(SOLID_FILL,1);
    floodfill(67,43,4);
    floodfill(524,43,4);

    settextstyle(7,HORIZ_DIR,1);
    outtextxy(60,50,"NEXT");
    outtextxy(525,50,"FREEZE");
    //question
    setcolor(11);
    settextstyle(7,HORIZ_DIR,1);
    outtextxy(60,140,"Q4: WHERE IS NUCLEAR POWER STATION SET UP IN ");
    outtextxy(60,160,"    MAHARASHTRA  ? ");
    settextstyle(2,HORIZ_DIR,6);
    //OPTIONS
    outtextxy(135,225,"KOYNANAGAR IN SATARA DISTRICT ");
    outtextxy(135,285,"KHADAKVASLA IN PUNE DISTRICT");
    outtextxy(135,345,"TARAPUR IN THANE DISTRICT ");
    outtextxy(135,405,"TADGOEN IN MUMBAI DISTRICT");
    setcolor(11);
    outtextxy(135,245,"----------------------------");
    outtextxy(135,305,"----------------------------");
    outtextxy(135,365,"----------------------------");
    outtextxy(135,425,"----------------------------");
	 //RATIO BUTTONS
    setcolor(14);
    circle(100,240,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,240,14);
    circle(100,300,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,300,14);
    circle(100,360,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,360,14);
    circle(100,420,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,420,14);
    setcolor(13);
    rectangle(90,230,110,250);
    rectangle(90,290,110,310);
    rectangle(90,350,110,370);
    rectangle(90,410,110,430);
    setfillstyle(CLOSE_DOT_FILL,1);
    rectangle(30,230,80,250);
    floodfill(31,231,13);
    rectangle(30,290,80,310);
    floodfill(31,291,13);
    rectangle(30,350,80,370);
    floodfill(31,351,13);
    rectangle(30,410,80,430);
    floodfill(31,411,13);
    setcolor(14);
    settextstyle(2,HORIZ_DIR,4);
    outtextxy(32,230,"CLICK ");
    outtextxy(56,238,"HERE ");
    outtextxy(32,291,"CLICK");
    outtextxy(56,299,"HERE ");
    outtextxy(32,351,"CLICK ");
    outtextxy(56,359,"HERE ");
    outtextxy(32,411,"CLICK ");
    outtextxy(56,419,"HERE ");
    settextstyle(7,HORIZ_DIR,1);                    /*
  setcolor(10);
  rectangle(520,400,600,440);
  setfillstyle(SOLID_FILL,1);
  floodfill(521,401,10);
  outtextxy(535,407,"EXIT");
						   */

    while(exit!=1)
     {
      showmouseptr();



      getmousepos(button,x,y);
      restrictmouseptr(89,229,111,431);

      if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	highlight2(5);

       }
      if(*x>520 && *y>40 && *x<608 && *y<80)
      {
	highlight2(6);
      }
	    dehighlight2(5);
      dehighlight2(6);
      if((*button & 1)==1)
      {
	if(*x>520 && *y>400 && *x<600 && *y<440)
      {
       value=3;
       exit=1;
      }

       if(*x>30 && *y>230 && *x<80 && *y<250)
       {
	highlight2(1);
	dehighlight2(1);
	o=1;
       }
       if(*x>30 && *y>290 && *x<80 && *y<310)
       {
	highlight2(2);
	dehighlight2(2);
	o=2;
       }
       if(*x>30 && *y>350 && *x<80 && *y<370)
       {
	highlight2(3);
	dehighlight2(3);
	o=3;
       }
       if(*x>30 && *y>410 && *x<80 && *y<430)
       {
	highlight2(4);
	dehighlight2(4);
	o=4;
       }
       if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	fo=0;
	exit=1;
       }
       if(*x>520 && *y>40 && *x<608 && *y<80)
       {
	fo=o;
	exit=1;
       }
      }//butt
     }//while

	 // getch();
     hidemouseptr();
     //erase options

     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     setcolor(14);
     if(fo!=0)
     {
      if(fo==3)
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(150,260,"CORRECT ANSWER !GOOD!");
       value=2;
      }

       else
      {

       settextstyle(8,HORIZ_DIR,3);
       outtextxy(170,260,"SORRY!! WRONG ANSWER!");
       outtextxy(170,350,"CORRECT ANSWER WAS B.");
       value=1;
	  }

     }
     if(fo==0)
     {

       settextstyle(8,HORIZ_DIR,3);
       outtextxy(100,260,"DID NOT EVEN TRY TO ANSWER");
       value=0;

     }
     delay(1000);
     dehighlight2(5);
     dehighlight2(6);

     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     return(value);
}
int question_5()
{
   int *button,*x,*y,o=0,fo=0,exit=0,value;
   dehighlight2(5);
   dehighlight2(6);
   setcolor(1);
     rectangle(0,0,638,479);
     rectangle(1,1,638,479);
     rectangle(20,20,618,459);
     rectangle(21,21,617,458);
     setfillstyle(SOLID_FILL,4);
     floodfill(12,12,1);
     setcolor(14);
     settextstyle(7,HORIZ_DIR,6);

     ellipse(325,70,0,360,99,37);
     setfillstyle(SOLID_FILL,12);
     floodfill(326,74,14);
     setcolor(4);
     outtextxy(265,37,"QUIZ");
     outtextxy(266,38,"QUIZ");
     setcolor(4);
     rectangle(50,140,590,190);
     rectangle(40,130,600,200);
     rectangle(51,141,591,191);
     rectangle(41,131,601,201);

     setfillstyle(SOLID_FILL,14);
     floodfill(45,135,4);



    initmouse();

    setcolor(4);
    rectangle(520,40,608,80);
    rectangle(50,40,128,80);
    setfillstyle(SOLID_FILL,1);
    floodfill(67,43,4);
    floodfill(524,43,4);

    settextstyle(7,HORIZ_DIR,1);
    outtextxy(60,50,"NEXT");
    outtextxy(525,50,"FREEZE");
    //question
    setcolor(11);
    settextstyle(7,HORIZ_DIR,1);
    outtextxy(60,140,"Q5: WE CAN USE SOLAR ENERGY IN .... ");
    settextstyle(2,HORIZ_DIR,6);
    //OPTIONS
    outtextxy(135,225,"IN SOLAR COOKER");
    outtextxy(135,285,"IN BIKES");
    outtextxy(135,345,"IN HOSPITALS");
    outtextxy(135,405,"BOTH A & C");
    setcolor(11);
    outtextxy(135,245,"---------------");
    outtextxy(135,305,"---------------");
    outtextxy(135,365,"---------------");
    outtextxy(135,425,"---------------");
	 //RATIO BUTTONS
    setcolor(14);
    circle(100,240,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,240,14);
    circle(100,300,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,300,14);
    circle(100,360,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,360,14);
    circle(100,420,9);
    setfillstyle(SOLID_FILL,14);
    floodfill(100,420,14);
    setcolor(13);
    rectangle(90,230,110,250);
    rectangle(90,290,110,310);
    rectangle(90,350,110,370);
    rectangle(90,410,110,430);
    setfillstyle(CLOSE_DOT_FILL,1);
    rectangle(30,230,80,250);
    floodfill(31,231,13);
    rectangle(30,290,80,310);
    floodfill(31,291,13);
    rectangle(30,350,80,370);
    floodfill(31,351,13);
    rectangle(30,410,80,430);
    floodfill(31,411,13);
    setcolor(14);
    settextstyle(2,HORIZ_DIR,4);
    outtextxy(32,230,"CLICK ");
    outtextxy(56,238,"HERE ");
    outtextxy(32,291,"CLICK");
    outtextxy(56,299,"HERE ");
    outtextxy(32,351,"CLICK ");
    outtextxy(56,359,"HERE ");
    outtextxy(32,411,"CLICK ");
    outtextxy(56,419,"HERE ");
					       /*
    setcolor(10);
   rectangle(520,400,600,440);
   setfillstyle(SOLID_FILL,1);
   floodfill(521,401,10);
   settextstyle(7,HORIZ_DIR,1);
   outtextxy(535,407,"EXIT");
						 */

    while(exit!=1)
     {
      showmouseptr();



      getmousepos(button,x,y);
      restrictmouseptr(89,229,111,431);


      if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	highlight2(5);

       }
      if(*x>520 && *y>40 && *x<608 && *y<80)
      {
	highlight2(6);
      }

      dehighlight2(5);
      dehighlight2(6);

      if((*button & 1)==1)
      {
	if(*x>520 && *y>400 && *x<600 && *y<440)
      {
       value=3;
       exit=1;
      }

       if(*x>30 && *y>230 && *x<80 && *y<250)
       {
	highlight2(1);
	dehighlight2(1);
	o=1;
       }
       if(*x>30 && *y>290 && *x<80 && *y<310)
       {
	highlight2(2);
	dehighlight2(2);
	o=2;
       }
       if(*x>30 && *y>350 && *x<80 && *y<370)
       {
	highlight2(3);
	dehighlight2(3);
	o=3;
       }
       if(*x>30 && *y>410 && *x<80 && *y<430)
       {
	highlight2(4);
	dehighlight2(4);
	o=4;
       }
       if(*x>50 && *y>40 && *x<128 && *y<80)
       {
	fo=0;
	exit=1;
       }
       if(*x>520 && *y>40 && *x<608 && *y<80)
       {
	fo=o;
	exit=1;
       }
      }//butt
     }//while

     hidemouseptr();
     //erase options
     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     setcolor(9);
     if(fo!=0)
     {
      if(fo==4)
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(150,260,"CORRECT ANSWER !GOOD!");
       value=2;
      }
      else
      {
       settextstyle(8,HORIZ_DIR,3);
       outtextxy(170,260,"SORRY!! WRONG ANSWER!");
       outtextxy(170,290,"CORRECT ANSWER WAS D!");
       value=1;
      }

     }
     if(fo==0)
     {

       settextstyle(8,HORIZ_DIR,3);
       outtextxy(100,260,"DID NOT EVEN TRY TO ANSWER");
       value=0;

     }
     delay(1000);
     dehighlight2(5);
     dehighlight2(6);

     setcolor(0);
     setfillstyle(SOLID_FILL,0);
     bar(25,110,610,440);

     return(value);
}



void result(int q1,int q2,int q3,int q4,int q5)
{
 int a=0,m=0,tq=0,rua=0;

 if(q1==0)
 {
  rua=rua+1;
 }
 if(q1==1)
 {
  a=a+1;
 }
 if(q1==2)
 {
  m=m+1;
  a=a+1;
 }

 if(q2==0)
 {
  rua=rua+1;
 }
 if(q2==1)
 {
  a=a+1;
 }
 if(q2==2)
 {
  m=m+1;
  a=a+1;
 }

 if(q3==0)
 {
  rua=rua+1;
 }
 if(q3==1)
 {
  a=a+1;
 }
 if(q3==2)
 {
  m=m+1;
  a=a+1;
 }

 if(q4==0)
 {
  rua=rua+1;
 }
 if(q4==1)
 {
  a=a+1;
 }
 if(q4==2)
 {
  m=m+1;
  a=a+1;
 }

 if(q5==0)
 {
  rua=rua+1;
 }
 if(q5==1)
 {
  a=a+1;
 }
 if(q5==2)
 {
  m=m+1;
  a=a+1;
 }



  setcolor(14);
  rectangle(200,30,450,115);
  line(200,105-20,450,95-10);
  settextstyle(7,HORIZ_DIR,3);
  setcolor(13);


  outtextxy(270,10-8,"RESULT");
  gotoxy(27,3);
  printf("Question's Attempted :");

  gotoxy(52,3);
  printf("%d",a);

  gotoxy(27,5);
  printf("Question's Not Attempted :");
  gotoxy(55,5);
  printf("%d",rua);

  gotoxy(27,7);
  printf("Total Questions :");
  tq=rua+a;
  gotoxy(53,7);
  printf("%d",tq);




  gotoxy(58-12,12);
  printf("Marks");
  gotoxy(44-12,12);
  printf("Status");

  setcolor(11);
  rectangle(130-90,120+50,520-90,314+50);
  rectangle(135-90,125+50,515-90,310+50);
  line(425-90,125+50,425-90,310+50);
  line(420-90,125+50,420-90,310+50);
  line(300-90,125+50,300-90,310+50);
  line(305-90,125+50,305-90,310+50);
  line(45,145+50,425,145+50);
  line(45,150+50,425,150+50);

  gotoxy(23-12,14);
  printf("Question 1:");

  gotoxy(23-12,16);
  printf("Question 2:");

 gotoxy(23-12,18);
 printf("Question 3:");

 gotoxy(23-12,20);
 printf("Question 4:");

 gotoxy(23-12,22);
 printf("Question 5:");


 rectangle(560-90,120+50,720-90,479-50);
 rectangle(565-90,125+50,715-90,474-50);
 line(565-90,120+180,715-90,120+180);
  line(565-90,120+185,715-90,120+185);
 gotoxy(64,15-2);
 printf("Total Marks");
 m=m*10;
 gotoxy(65,17-2);
 printf("%d / 50",m);
 gotoxy(66,23-2);
 printf("Remark");
 if(m>40)
 {
  gotoxy(65,24);
  printf("EXCELLENT");

 }
 if(m>30 && m<=40)
 {
  gotoxy(65,24);
  printf("VERY GOOD");

 }

 if(m>=20 && m<=30)
 {
  gotoxy(64,24);
  printf("GOOD");

 }

 if(m>=10 && m<20)
 {
  gotoxy(64,24);
  printf("POOR");

 }
 if(m<10)
 {
  gotoxy(63,24);
  printf("VERY POOR");

 }


 line(45,185+50,425,185+50);
 line(45,215+50,425,215+50);
 line(45,245+50,425,245+50);

 line(45,275+50,425,275+50);
 line(45,275+35+50,425,275+35+50);
 setcolor(6);
 line(500,208,595,208);
 line(500,212,595,212);

 line(510,335,575,335);
 line(510,339,575,339);
 dis_sta(33,14,q1);
 dis_sta(33,16,q2);
 dis_sta(33,18,q3);
 dis_sta(33,20,q4);
 dis_sta(33,22,q5);

}


void main()
{
 int gdriver=DETECT,gmode,q1,q2,q3,q4,q5,mnb;
 void *fds;
 initgraph(&gdriver, &gmode,"C:\\TC");

 name(4);
 getch();
 closedfg();
 q1=question_1();


  q2=question_2();


  q3=question_3();

  q4=question_4();

  q5=question_5();

    setcolor(0);
  setfillstyle(SOLID_FILL,0);
  bar(0,0,639,479);
  result(q1,q2,q3,q4,q5);
  getch();
  getch();
  closerty();

}
