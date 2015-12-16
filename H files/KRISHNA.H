
void krishna()
{
 int d=DETECT,m,vm;
 setcolor(10);
 setfillstyle(LTBKSLASH_FILL,9);
 floodfill(1,1,10);
 setfillstyle(SOLID_FILL,6);
 rectangle(20,10,165,210);
 settextstyle(10,HORIZ_DIR,10);
 outtextxy(40,-50,"K");
 settextstyle(10,HORIZ_DIR,9);
 outtextxy(511,-130,",");
 rectangle(40+145,10,185+145,210);
 settextstyle(10,HORIZ_DIR,10);
 outtextxy(201,-50,"C");

 rectangle(60+145+145,10,205+145+145,210);
 settextstyle(10,HORIZ_DIR,10);
 outtextxy(370,-50,"T");

 rectangle(80+145+145+145,75,225+145+145+95,210);
 settextstyle(10,HORIZ_DIR,8);
 outtextxy(531,42,"S");

 floodfill(50,15,10);
 floodfill(230,16,10);
 floodfill(440,15,10);
 floodfill(80+145+145+145+12,75+12,10);
 setfillstyle(SOLID_FILL,1);
 floodfill(50,70,10);
 floodfill(230,70,10);
 floodfill(445,40,10);
 floodfill(100+145+145+145+12,85+15,10);
 floodfill(525,50,10);
 getch();
 for(m=0;m<130;m++)
{
 setcolor(random(15));
 settextstyle(7,HORIZ_DIR,10);
 outtextxy(0,190,"KRISHNA");
 outtextxy(70,300,"SCHOOL");
 setcolor(random(15));
 outtextxy(2,190,"KRISHNA");
 outtextxy(72,300,"SCHOOL");
 delay(15);
}
 setcolor(13);
 settextstyle(7,HORIZ_DIR,10);
 outtextxy(0,190,"KRISHNA");
 outtextxy(70,300,"SCHOOL");
 setcolor(13);
 settextstyle(7,HORIZ_DIR,10);
 outtextxy(2,190,"KRISHNA");
 outtextxy(72,300,"SCHOOL");
 getch();

getch();
}
