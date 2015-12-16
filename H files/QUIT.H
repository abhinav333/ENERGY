#define RIGHT_ARROW 77
#define LEFT_ARROW 75
#define ENTER 13

void light1(int u)
{
 if(u==2)
 {

  setcolor(14);
  settextstyle(6,HORIZ_DIR,2);
  outtextxy(360,270,"NO");

 }
 if(u==1)
 {
  setcolor(14);
  settextstyle(6,HORIZ_DIR,2);
  outtextxy(235,270,"YES");

 }

}
void dlight1(int u)
{
 if(u==2)
 {
  setcolor(0);
  settextstyle(6,HORIZ_DIR,2);
  outtextxy(360,270,"NO");

 }
 if(u==1)
 {
  setcolor(0);
  settextstyle(6,HORIZ_DIR,2);
  outtextxy(235,270,"YES");

 }



}

int image()
{

 int far *c,*r22,*k,*q,*z1;

 void far *z11;

 *z1=imagesize(159,159,471,321);

 z11=(void far *)farmalloc(*z1);
 getimage(159,159,471,321,z11);


 setcolor(1);
 rectangle(160,160,470,320);
 rectangle(165,165,465,315);
 setfillstyle(SOLID_FILL,6);
 floodfill(167,206,1);
 setfillstyle(SOLID_FILL,1);
 floodfill(161,161,1);

 line(166,200,464,200);
 line(166,205,464,205);

 setfillstyle(SOLID_FILL,1);
 floodfill(200,204,1);
 setcolor(0);
 settextstyle(1,HORIZ_DIR,2);
 outtextxy(220,170,"Q U I T  F I L E !");

 settextstyle(6,HORIZ_DIR,3);
 outtextxy(190,200,"Do you really want to quit");

 settextstyle(6,HORIZ_DIR,3);
 outtextxy(190,220,"the file ?");

 settextstyle(6,HORIZ_DIR,2);
 outtextxy(360,270,"NO");

 settextstyle(6,HORIZ_DIR,2);
 outtextxy(235,270,"YES");
 *r22=0;
 *c=1;
 light1(1);
 while(*r22!=1)
 {
   *k=getkey();
   switch(*k)
   {
    case LEFT_ARROW:
     if(*c!=1)
      {
       *c-=1;
       light1(*c);
       dlight1(*c+1);
      }
     break;
    case RIGHT_ARROW:
     if(*c!=2)
     {
       *c+=1;
       light1(*c);
       dlight1(*c-1);

     }
     break;
    case ENTER:
     if(*c==2)
     {
      *q=0;
      *r22=1;

     }
     if(*c==1)
     {
      *q=1;
      *r22=1;

     }
     break;
   }

 }
  putimage(159,159,z11,COPY_PUT);
  farfree(z11);
  return(*q);

 }






