void present()
{
 int d,m,loo,loo2,loo3,c;






 for(loo=0;loo<361;loo++)
 {
   setcolor(9);
   ellipse(320,430,0,loo,290,40);
   ellipse(320,330,0,loo,290,40);
   ellipse(320,130,0,loo,290,40);
   ellipse(320,230,0,loo,290,40);
   ellipse(50,240,0,loo,40,290);
   ellipse(590,240,0,loo,40,290);

 }

 setfillstyle(SOLID_FILL,5);
 //1st
 floodfill(50,130,9);
 floodfill(580,130,9);

 //2st
 //putpixel(50,230,15);
 floodfill(50,230,9);
 floodfill(580,230,9);
 //3
 floodfill(50,330,9);
 floodfill(580,330,9);
 //4
 floodfill(50,430,9);
 floodfill(580,430,9);

  for(loo2=1;loo2<6;loo2++)
  {
   delay(100);
   setcolor(loo2);
   settextstyle(8,HORIZ_DIR,loo2);
   outtextxy(150,10,"PRESENTED-BY");
   delay(100);
   setcolor(0);
   settextstyle(8,HORIZ_DIR,loo2);
   outtextxy(150,10,"PRESENTED-BY");

  }
 setcolor(12);
 settextstyle(8,HORIZ_DIR,loo2);
 outtextxy(110,10,"PRESENTED-BY");

 //abhinav
 setfillstyle(SOLID_FILL,4);
 floodfill(50,130,9);
 floodfill(580,130,9);

 for(loo3=1;loo3<46;loo3++)
 {

  c=random(256);
  delay(10);
  setcolor(c);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(140,115,"     ABHINAV KULKARNI");
  delay(10);

 }
 setfillstyle(SOLID_FILL,5);
 floodfill(50,130,9);
 floodfill(580,130,9);

 //AKSHAY
 setfillstyle(SOLID_FILL,4);
 floodfill(50,230,9);
 floodfill(580,230,9);
 for(loo3=1;loo3<53;loo3++)
 {

  c=random(256);
  delay(10);
  setcolor(c);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(140,215,"      AKSHAY AWTADE     ");
  delay(10);

 }
 setfillstyle(SOLID_FILL,5);
 floodfill(50,230,9);
 floodfill(580,230,9);
 //MAC
 setfillstyle(SOLID_FILL,4);
 floodfill(50,330,9);
 floodfill(580,330,9);
 for(loo3=1;loo3<63;loo3++)
 {

  c=random(256);
  delay(10);
  setcolor(c);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(140,315,"      MAKRAND LANGHE      ");
  delay(10);

 }
 setfillstyle(SOLID_FILL,5);
 floodfill(50,330,9);
 floodfill(580,330,9);
 //AKASH
 setfillstyle(SOLID_FILL,4);
 floodfill(50,430,9);
 floodfill(580,430,9);
 for(loo3=1;loo3<63;loo3++)
 {

  c=random(256);
  delay(10);
  setcolor(c);
  settextstyle(1,HORIZ_DIR,3);
  outtextxy(140,415,"        AKASH PATIL        ");
  delay(10);

 }
 setfillstyle(SOLID_FILL,5);
 floodfill(50,430,9);
 floodfill(580,430,9);
 getch();
 closer();
}
