void name()
{
 int d,m,in,de,area1,area2,area3,area4;
 void *uty1,*uty2,*uty3,*uty4;

// getch();

 setcolor(5);

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
  if(dfg==1)
  {
  for(de=0;de<20;de++)
  {
   delay(15);
   setcolor(random(15));
   settextstyle(6,HORIZ_DIR,6);
   outtextxy(120,170,"Introduction");
  }
  }

  if(dfg==2)
  {
  for(de=0;de<20;de++)
  {
   delay(15);
   setcolor(random(15));
   settextstyle(6,HORIZ_DIR,6);
   outtextxy(120,205,"TYPES OF ENERGY");
  }
  }


 if(dfg==3)
 {
  for(de=0;de<20;de++)
  {
   delay(15);
   setcolor(random(15));
   settextstyle(5,HORIZ_DIR,6);
   outtextxy(140,165,"Conservation of");
   outtextxy(140,225,"   Energy");
  }
 }
 if(dfg==4)
 {
  for(de=0;de<20;de++)
  {
   delay(15);
   setcolor(random(15));
   settextstyle(6,HORIZ_DIR,6);
   outtextxy(150,205," ENERGY  QUIZ");

  }
 }

 delay(1000);

}

