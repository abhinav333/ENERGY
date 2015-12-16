void pass()
  {
   int pi1,pi2,pi3,pi4,c1,c2,c3,c4,c5,close,xr,yr;
   char f1,f2,f3,f4,f5;

   setcolor(4);

   rectangle(0,0,639,479);
   rectangle(20,20,619,459);
   setfillstyle(SOLID_FILL,8);
   floodfill(25,25,4);
   setfillstyle(XHATCH_FILL,7);
   floodfill(15,15,4);

   setcolor(11);
   settextstyle(1,HORIZ_DIR,9);
   outtextxy(90,30,"PASSWORD");
   setcolor(12);
   outtextxy(92,32,"PASSWORD");
   //*************************

   setcolor(6);
   rectangle(110,250,530,350);
   rectangle(130,270,510,330);
   setfillstyle(SOLID_FILL,1);
   floodfill(115,255,6);
   setfillstyle(SOLID_FILL,2);
   floodfill(135,275,6);
   settextstyle(1,HORIZ_DIR,6);


   ask(40,10,14);
   ask(70,10,4);
   ask(100,10,14);ask(130,10,4);
   ask(160,10,14);ask(190,10,4);
   ask(220,10,14);ask(250,10,4);
   ask(280,10,14);ask(310,10,4);
   ask(340,10,14);ask(370,10,4);
   ask(400,10,14);ask(430,10,4);
   ask(460,10,14);ask(490,10,4);
   ask(520,10,14);ask(550,10,4);
   ask(580,10,14);
   //----------------------------
   ask(580,40,4);
   ask(580,70,14);
   ask(580,100,4);
   ask(580,130,14);
   //-----------------------------
   ask(550,130,4);
   ask(520,130,14);
   ask(490,130,4);
   ask(460,130,14);
   ask(430,130,4);
   ask(400,130,14);
   ask(370,130,4);
   ask(340,130,14);
   ask(310,130,4);
   ask(280,130,14);
   ask(250,130,4);
   ask(220,130,14);
   ask(190,130,4);
   ask(160,130,14);
   ask(130,130,4);
   ask(100,130,14);
   ask(70,130,4);
   ask(40,130,14);
   //*****************************
   ask(40,100,4);
   ask(40,70,14);
   ask(40,40,4);


   setcolor(13);
   settextstyle(7,HORIZ_DIR,5);
   outtextxy(120,170,"ENTER PASSWORD");




   rtr:
    setcolor(0);
   settextstyle(1,HORIZ_DIR,8);
   f1=getch();

   //1
    if(f1=='w' || f1=='W')
    {
     outtextxy(150,260,"*");
     c1=1;

    }
    else
    {
     outtextxy(150,260,"*");

    }
    //2
    f2=getch();


    if(f2=='o' || f2=='O')
    {
     outtextxy(230,260,"*");
     c2=1;

    }
    else
    {
     outtextxy(230,260,"*");
    }

    //3
    f3=getch();
    if(f3=='r' || f3=='R')
    {
     outtextxy(310,260,"*");
     c3=1;

    }
    else
    {
     outtextxy(310,260,"*");
    }


    //4
    f4=getch();
    if(f4=='l' || f4=='L')
    {
     outtextxy(390,260,"*");
     c4=1;

    }
    else
    {
     outtextxy(390,260,"*");
    }

    //5
    f5=getch();
    if(f5=='d' || f5=='D')
    {
     outtextxy(470,260,"*");
     c5=1;

    }
    else
    {
     outtextxy(470,260,"*");
    }
     sound(2);
     delay(100);
     nosound();
   if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1)
   {
    setcolor(14);
    settextstyle(7,HORIZ_DIR,5);
    outtextxy(100,370,"PASSWORD CORRECT");

   }
   else
   {

    setcolor(14);
    settextstyle(7,HORIZ_DIR,5);
    outtextxy(50,370,"PASSWORD INCORRECT");
    getch();
    setcolor(2);
    settextstyle(1,HORIZ_DIR,8);
    outtextxy(150,260,"*");
    outtextxy(230,260,"*");
    outtextxy(310,260,"*");
    outtextxy(390,260,"*");
    outtextxy(470,260,"*");

    setcolor(8);
    settextstyle(7,HORIZ_DIR,5);
    outtextxy(50,370,"PASSWORD INCORRECT");
    goto rtr;
   }
   //close screen
   getch();
   for(close=21;close<458;close++)
   {
     setcolor(8);
     delay(5);
     line(21,close,618,close);
   }
   //loading

   getch();
    setcolor(11);
    settextstyle(7,HORIZ_DIR,7);
    outtextxy(50,30,"Loading Files. . .");
    setcolor(4);

    ellipse(320,240,0,360,250,100);

     rectangle(120,230,518,250);
     rectangle(115,225,523,255);
     setfillstyle(SOLID_FILL,4);
     floodfill(110,220,4);
     setcolor(15);
     rectangle(275,275,335,315);
     rectangle(280,280,330,310);
     setfillstyle(SOLID_FILL,12);
     floodfill(276,276,15);
     setfillstyle(SOLID_FILL,0);
     floodfill(281,281,15);



    for(xr=121,yr=1;xr<459,yr<=100;xr+=4,yr++)
    {
     delay(35);
     setcolor(14);
     line(xr,231,xr,249);
     gotoxy(37,19);
     printf("%d %",yr);


    }
     settextstyle(5,HORIZ_DIR,6);
     outtextxy(100,320,"Loading Completed!");

   getch();

}