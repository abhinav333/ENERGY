void closerty()
{
int bl,bz;
for(bl=0,bz=640;bl<640,bz>0;bl++,bz--)
{
 delay(1);
 setcolor(0);
 line(bl,0,bl,119);
 line(bl,240,bl,359);
 setcolor(0);
 line(bz,120,bz,239);
 line(bz,360,bz,480);


}
}
void zx(int q,char *far string)
 {
   setcolor(10);
   settextstyle(3,HORIZ_DIR,1);
   outtextxy(98, q,string);
 }

void fd(int r,int y,char* rtd)
 {
  settextstyle(2,HORIZ_DIR,7);
  outtextxy(r,y,rtd);
  }

void lb(int x,int y,char *text)
{
 int c;
 for(c=0;c<1;c++)
 {
  setcolor(5);
  settextstyle(2,HORIZ_DIR,5);
  outtextxy(x,y,text);
  delay(50);
  setcolor(11);
  settextstyle(2,HORIZ_DIR,5);
  outtextxy(x,y,text);
 }
}
void rha(int x,int y,int s,int c)
{
 setcolor(c);
 line(x,y,x+s,y);
 line(x+s,y,x+s-10,y-7);
 line(x+s,y,x+s-10,y+7);
}
void dva(int x,int y,int s,int c)
{
 setcolor(c);
 line(x,y,x,y+s);
 line(x,y+s,x+7,y+s-10);
 line(x,y+s,x-7,y+s-10);
}
void uva(int x,int y,int s,int c)
{
 setcolor(c);
 line(x,y,x,y-s);
 line(x,y-s,x+7,y-s+10);
 line(x,y-s,x-7,y-s+10);
}

void lha(int x,int y,int s,int c)
{
 setcolor(c);
 line(x,y,x-s,y);
 line(x-s,y,x-s+10,y-7);
 line(x-s,y,x-s+10,y+7);
}


void vvapour(int x,int y)
{
 int l;
 setcolor(15);
 for(l=90;l<275;l++)
 {
  arc(x,y,90,l,3);
  delay(1);
 }
 arc(x,y-6,270,105,3);

}
void hvapour(int x,int y)
{
 int l;
 setcolor(15);

 for(l=170;l<361;l++)
 {
  arc(x,y,170,l,3);
  delay(1);
 }
 arc(x+6,y,360,180,3);

}
void endbox()
{
int i1,i2,i3,i4,o1,o2,o3,o4;
  for (i1=187,i2=197,i3=583,i4=423;i1<387,i2<307,i3>383,i4>303;i1++,i2++,i3--,i4--)
{
  setcolor(4);
  rectangle(i1,i2,i3,i4);
  delay(1);
 }
 for (o1=187,o2=197,o3=583,o4=423;o1<387,o2<307,o3>383,o4>303;o1++,o2++,o3--,o4--)
{
  setcolor(0);
rectangle(o1,o2,o3,o4);
 delay(1);
 }
}
void wave(int x,int y,int s,int c)
{
 setcolor(c);
 ellipse(x,y,180,0,s,5);
 ellipse(x+2*s,y,0,180,s,5);
 ellipse(x+4*s,y,180,0,s,5);



}
void close()
{
 int c1,c2;
  for(c1=72;c1<557;c1++)
 {
  delay(5);
  setcolor(4);
  line(c1,171,c1,428);
 }

}




void blast(int x,int y,int c)
{
setcolor(c);
    line(x,y,x,y-47);
    line(x,y,x+14,y+39);
    line(x,y,x+28,y+37);
    line(x,y,x+34,y-23);
    line(x,y,x+45,y-14);
    line(x,y,x+41,y-11);
  line(x,y,x+47,y+12);
  line(x,y,x+35,y+20);
  line(x,y,x+33,y+35);
  line(x,y,x+17,y+3);
  line(x,y,x,y+48);
line(x,y,x-15,y+40);
line(x,y,x-30,y+39);
line(x,y,x-34,y+21);
line(x,y,x-46,y+12);
line(x,y,x-42,y);
   line(x,y,x-45,y-12);
   line(x,y,x-35,y-24);
   line(x,y,x-31,y-35);
   line(x,y,x-18,y-38);
 }

void ask(int x,int y,int c)   //pass
{
 setcolor(c);
 outtextxy(x,y,"^");
 delay(50);

}

void p1(int x,int y)//thanks
{
 setfillstyle(SOLID_FILL,0);
 floodfill(x,y,7);//1
 floodfill(x+20,y+20,7);
 floodfill(x+50,y,7);//1
 floodfill(x+70,y+20,7);//4

 setfillstyle(SOLID_FILL,8);
 floodfill(x+20,y,7);//2
 floodfill(x,y+20,7);//3
 floodfill(x+70,y,7);//2
 floodfill(x+50,y+20,7);//3


}
void p2(int x,int y)
{
 setfillstyle(SOLID_FILL,8);
 floodfill(x,y,7);//1
 floodfill(x+20,y+20,7);
 floodfill(x+50,y,7);//1
 floodfill(x+70,y+20,7);//4

 setfillstyle(SOLID_FILL,0);
 floodfill(x+20,y,7);//2
 floodfill(x,y+20,7);//3
 floodfill(x+70,y,7);//2
 floodfill(x+50,y+20,7);//3
}
void closer()//present
{
  int r1,r2,r3,r4;
 for(r1=320,r2=321,r3=240,r4=241;r1>0,r2<640,r3>-90,r4<580;r1--,r2++,r3--,r4++)
 {

  delay(6);
  setcolor(0);
  line(r1,0,r1,240);
  line(r2,241,r2,480);
  line(321,r3,640,r3);
  line(0,r4,320,r4);


 }
}
void dis_sta(int x,int y,int ch)//quiz
{
 if(ch==0)
 {
  gotoxy(x-3,y);
  printf("UNATTEMPTED");
  gotoxy(x+15,y);
  printf("0");

 }
 if(ch==1)
 {
  gotoxy(x,y);
  printf("WRONG");
  gotoxy(x+15,y);
  printf("0");

 }
 if(ch==2)
 {
  gotoxy(x,y);
  printf("RIGHT");
  gotoxy(x+15,y);
  printf("10");

 }
}

void highlight2(int c)
{
 if(c==1)
 {
  setcolor(1);
  circle(100,240,5);
  setfillstyle(SOLID_FILL,1);
  floodfill(100,240,1);

 }
 if(c==2)
 {
  setcolor(1);
  circle(100,300,5);
  setfillstyle(SOLID_FILL,1);
  floodfill(100,300,1);
 }
 if(c==3)
 {
  setcolor(1);
  circle(100,360,5);
  setfillstyle(SOLID_FILL,1);
  floodfill(100,360,1);

 }
 if(c==4)
 {
  setcolor(1);
  circle(100,420,5);
  setfillstyle(SOLID_FILL,1);
  floodfill(100,420,1);


 }
 if(c==5)
 {
  setcolor(14);
  settextstyle(7,HORIZ_DIR,1);
  outtextxy(60,50,"NEXT");

 }
 if(c==6)
 {
  setcolor(14);
  settextstyle(7,HORIZ_DIR,1);
  outtextxy(525,50,"FREEZE");
 }

}
void dehighlight2(int c)
{
 if(c==1)
 {
     setcolor(14);
     circle(100,300,9);
     setfillstyle(SOLID_FILL,14);
     floodfill(100,300,14);

     circle(100,360,9);
     setfillstyle(SOLID_FILL,14);
     floodfill(100,360,14);

     circle(100,420,9);
     setfillstyle(SOLID_FILL,14);
     floodfill(100,420,14);

 }
 if(c==2)
 {
   setcolor(14);
   circle(100,240,9);
   setfillstyle(SOLID_FILL,14);
   floodfill(100,240,14);

   circle(100,360,9);
   setfillstyle(SOLID_FILL,14);
   floodfill(100,360,14);

   circle(100,420,9);
   setfillstyle(SOLID_FILL,14);
   floodfill(100,420,14);



 }


 if(c==3)
 {
  setcolor(14);
  circle(100,240,9);
  setfillstyle(SOLID_FILL,14);
  floodfill(100,240,14);

  circle(100,300,9);
  setfillstyle(SOLID_FILL,14);
  floodfill(100,300,14);

  circle(100,420,9);
  setfillstyle(SOLID_FILL,14);
  floodfill(100,420,14);

 }
 if(c==4)
 {
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

 }
 if(c==5)
 {
  setcolor(4);
  settextstyle(7,HORIZ_DIR,1);
  outtextxy(60,50,"NEXT");

 }
 if(c==6)
 {
  setcolor(4);
  settextstyle(7,HORIZ_DIR,1);
  outtextxy(525,50,"FREEZE");
 }


}

void rays(int x,int y,int sid,int color)
{
 setcolor(color);
 line(x,y,x,y+sid);
 line(x,y+sid,x+5,y+sid-5);
 line(x,y+sid,x-5,y+sid-5);

}
//closing functions
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
void close6()
{
 int x,y,x1,y1;
 for(x=0,y=0,x1=639,y1=479;x<323,y<242,x1>318,y1>238; x++,y++,x1--,y1--)
  {
   setcolor(0);
   rectangle(x,y,x1,y1);
   delay(10);
  }
}
void closert()
{
 int r1,r2,r3,r4;
for(r1=320,r2=321,r3=240,r4=241;r1>0,r2<640,r3>-90,r4<580;r1--,r2++,r3--,r4++)
 {

  delay(6);
  setcolor(0);
  line(r1,0,r1,240);
  line(r2,241,r2,480);
  line(321,r3,640,r3);
  line(0,r4,320,r4);


 }
}
void close99() //intro
{
 int c1,c2;
  for(c1=72;c1<557;c1++)
 {
  delay(5);
  setcolor(4);
  line(c1,171,c1,428);
 }

}
void spokes()//CLOSE FUNCTION
{
int in,de,m,sa;

  for(in=0,de=90,m=180,sa=270;in<95,de<185,m<275,sa<365;in++,de++,m++,sa++)
 {
  setcolor(0);
  setfillstyle(SOLID_FILL,0);
  pieslice(320,240,0,in,401);
  pieslice(320,240,90,de,401);
  pieslice(320,240,180,m,401);
  pieslice(320,240,270,sa,401);
  delay(10);
 }
}
void closep()
{
 int m;
 for (m=0;m<362;m++)
  {
   setcolor(0);
   setfillstyle(SOLID_FILL,0);
   pieslice(320,240,0,m,401);
   delay(2);
  }

}
 //oikyh//CLOSIND G FUNCTION
void close128()
{
  getch();
  int f,g;
 for (g=0,f=0;g<3010,f<4620;g++,f--)
  {

  setcolor(random(1));
 rectangle(random(g),random(f),random(220),random(480));
  }

 }
void closedfg()
{
 int k1,k2,k3,k4;
for (k1=0,k2=0,k3=639,k4=479;k1<322,k2<242,k3>318,k4>238;k1++,k2++,k3--,k4--)
{

  setcolor(0);
  rectangle(k1,k2,k3,k4);
  delay(10);

}
}
void closeghj()
{
int v1,v2,v3,v4;
for (v1=320,v2=240,v3=320,v4=240;v1>0-100,v2>0-100,v3<639+100,v4<479+100;v1--,v2--,v3++,v4++)
{

  setcolor(0);
  rectangle(v1,v2,v3,v4);
  delay(10);


}
}

