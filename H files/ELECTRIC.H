void electric()
{
 int m;

    setcolor(12);
   rectangle(0,0,639,479);
    rectangle(20,20,639-20,479-20);
  setfillstyle(BKSLASH_FILL,9);
  floodfill(10,10,12);
  int pie,r,x,y;
       pie=3.14;
       for(r=0;r<1150;r++)
 {
  delay(3);
  x=320+260*sin(pie+r);
  y=240+140*cos(pie-r);
  setcolor(1);
  line(x,y,random(215),234);
}
 settextstyle(7,HORIZ_DIR,4);
r=0;
   while(r!=245)
 {
  r+=1;
 delay(14);
 setcolor(14);
 outtextxy(130,200,"ELECTRIC ENERGY");
 setcolor(4);
 outtextxy(130,200,"ELECTRIC ENERGY");
 }
 setcolor(14);
 outtextxy(130,200,"ELECTRIC ENERGY");
 getch();
 cleardevice();
 setfillstyle(SOLID_FILL,0);
 floodfill(2,2,0);
  //********************type & start***********************//
  pie=6.99;
      for(m=9999;m>50;m--)
   {
    x=331+640*sin(pie-m);
    y=432+45*cos(pie+m);

    setcolor(1);
   // delay(1);
    circle(random(640),random(470),pie);
    }
   setcolor(14);
   settextstyle(7,HORIZ_DIR,5);
   outtextxy(90,20,"ELECTRICAL ENERGY");
 for (m=0;m<361;m++)
 {
   setcolor(random(9));
   delay(9);
   ellipse (310,50,0,m,287,42);
}
 for (m=0;m<361;m++)
 {
   setcolor(14);
   delay(4);
   ellipse (310,50,0,m,287,42);
}

setcolor(14);
fd(0,120," Electricity plays an  important  role  in  making our");
fd(0,140,"lives easy & comfortable . It provides us with heat & ");
fd(0,160,"light . itis used at houses & factries produced at Ther-   ");
fd(0,180,"mal , Atomic ,Hydro Power Stations in a large amount ");
fd(0,200,"in various ways . Wire or cables carry these electricity");
fd(0,220,"many areas. Every source  of electricity has two ends");
fd(0,240,"known as terminals. positive (+) sign   indicates   the");
fd(0,260,"positive  terminal and negative (-) sign indicates the");
fd(0,280,"negative terminal.");
//terminals
setcolor(14);
rectangle(180,380,240,410);
  circle(195,395,5);
 circle(225,395,5);
 fd(230,385,"-->TERMINAL");
  getch();
 setcolor(14);
 rectangle(0,0,640,471);
  clrscr();
  setfillstyle(SOLID_FILL,0);
  floodfill(23,23,0);
     pie=6.99;
      for(m=8999;m>50;m--)
   {
    x=331+640*sin(pie-m);
    y=432+45*cos(pie+m);

    setcolor(1);
   // delay(1);
    circle(random(640),random(470),pie);
    }
   setcolor(14);
   settextstyle(7,HORIZ_DIR,5);
   outtextxy(90,20,"ELECTRICAL ENERGY");
 for (m=0;m<361;m++)
 {
   setcolor(random(9));
  // delay(9);
   ellipse (310,50,0,m,287,42);
}
 for (m=0;m<361;m++)
 {
   setcolor(14);
   //delay(9);
   ellipse (310,50,0,m,287,42);
}

  //cell//
  setcolor(15);
  line(275,180,275,375);
  line(275,375,450,375);
  line(450,180,450,375);
  line(285,180,285,365);
  line(285,365,440,365);
  line(440,180,440,365);
  line(285,180,345,180);
  line(285,190,345,190);
  line(285,200,345,200);
  line(345,180,345,345);
  line(345,345,370,345);
  line(370,180,370,345);
  line(370,180,345,180);
  line(370,180,440,180);
  line(370,190,440,190);
  line(370,200,440,200);
  arc(280,180,0,180,5);
  arc(445,180,0,180,5);
  arc(358,180,0,180,6);
   //color//

   setcolor(6);
   setfillstyle(CLOSE_DOT_FILL,6);
  floodfill(280,200,15);
  setfillstyle(SOLID_FILL,0);
  floodfill(358,200,15);
  setfillstyle(SOLID_FILL,4);
  floodfill(341,185,15);
   setfillstyle(SOLID_FILL,4);
  floodfill (341,195,15);
   setfillstyle(SOLID_FILL,4);
  floodfill(391,195,15);
  setfillstyle(SOLID_FILL,4);
  floodfill(391,185,15);
  setfillstyle(CLOSE_DOT_FILL,7);
  floodfill(391,230,15);
  setfillstyle(SOLID_FILL,0);
  floodfill(360,178,15);
  settextstyle(7,HORIZ_DIR,3);
  outtextxy(305,375,"DRY CELL");
  rha(265-80,280,85,3);
  setcolor(13);
  settextstyle(6,HORIZ_DIR,2);
  outtextxy(265-165,260,"zinc case");
  rha(265-40,185,85,3);
  setcolor(13);
  settextstyle(6,HORIZ_DIR,2);
  outtextxy(265-165,165,"seling wax(lac)");
  rha(245,325,100,3);
  setcolor(13);
  settextstyle(6,HORIZ_DIR,2);
  outtextxy(265-115,305,"carbon rod");
  lha(265+250,275,85,3);
  setcolor(13);
  settextstyle(6,HORIZ_DIR,2);
  outtextxy(520,255,"moist paste");
  getch();
clrscr();
floodfill(23,24,0);
  // ----------------

   pie=6.99;
      for(m=9999;m>50;m--)
   {
    x=331+640*sin(pie-m);
    y=432+45*cos(pie+m);

    setcolor(1);
   // delay(1);
    circle(random(640),random(470),pie);
    }
   setcolor(14);
   settextstyle(7,HORIZ_DIR,5);
   outtextxy(90,20,"ELECTRICAL ENERGY");
 for (m=0;m<361;m++)
 {
   setcolor(random(9));
  // delay(9);
   ellipse (310,50,0,m,287,42);
}
 for (m=0;m<361;m++)
 {
   setcolor(14);
   //delay(9);
   ellipse (310,50,0,m,287,42);
}


   setcolor(14);
  fd(20,120,"An electric circuit consists of conducting wire,");
  delay(125);
  fd(20,140,"battery,bulb,key.When the key is closed(means switched" );
    delay(125);
  fd(20,160,"on) potential difference is developed and electric   ");
    delay(125);
  fd(20,180,"current is passed in circuit. The bulb glows due  ");
    delay(125);
  fd(20,200,"to electric current. Conducting wire carries current ");
    delay(125);
  fd(20,220,"to the bulb.When the is open the bulb doesn't glow. ");
    delay(125);
  //-----------------------------------------------------------------//
 //condition 1

 line(200,280,200,390);
 line(200,390,255,390);
 line(255,378,255,399);
 line(258,380,258,396);
 line(260,390,430,390);
 line(400,380,422,390);
 setcolor(0);
 line(400,390,420,390);
 setcolor(12);
 line(450,390,420,390);
 line(450,390,450,280);
 line(450,280,200,280);
 ellipse(240,260,0,360,10,10);
 rectangle(235,280,245,270);
 //----------------------------------------------------------------//
  uva(200,320,5,14);
  dva(450,360,5,14);
  rha(130,380,65,3);
  rha(130,260,85,3);
  uva(255,415,20,3);
  uva(405,415,20,3);
  setcolor(2);
  settextstyle(6,HORIZ_DIR,1);
  outtextxy(95,245,"Bulb");
  outtextxy(5,365,"Conducting wire");
  outtextxy(195,415,"Electric source");
  outtextxy(380,415,"key (open)");

 getch();
 //condition 2
 setcolor(0);
 line(400,380,422,390);
 setcolor(12);
 line(200,280,200,390);
 line(200,390,255,390);
 line(255,378,255,399);
 line(258,380,258,396);
 line(260,390,430,390);
  line(400,389,420,389);
  line(400,388,420,388);


  line(450,390,420,390);

 line(450,390,450,280);
 line(450,280,200,280);

 setfillstyle(SOLID_FILL,6);
 floodfill(240,260,12);
 rectangle(235,280,245,270);
 //----------------------------------------------------------------//
  uva(200,320,5,14);
  dva(450,360,5,14);
  rha(130,380,65,3);
  rha(130,260,85,3);
  uva(255,415,20,3);
  uva(405,415,20,3);
  setcolor(1);
  outtextxy(380,415,"key (open)");
  setcolor(2);
  outtextxy(380,415,"key (close)");
  getch();
  //close
  closep();
     getch();
 }




