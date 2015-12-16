void intro()
{
 int gdriver,gmode,x,x1,y,y1;



 setcolor(14);
 rectangle(0,0,639,479);
 rectangle(20,20,619,459);
 setfillstyle(SOLID_FILL,13);
 floodfill(13,13,14);
 setcolor(10);
 settextstyle(10,HORIZ_DIR,5);
 outtextxy(185,20,"ENERGY");
 settextstyle(3,HORIZ_DIR,5);
 outtextxy(155,80,"~~~~~~~~~~");
 setfillstyle(SOLID_FILL,1);
 floodfill(200,50,10);
 floodfill(253,50,10);
 floodfill(297,50,10);
 floodfill(330,50,10);
 floodfill(370,50,10);
 floodfill(398,50,10);
//diagrams
  setcolor(14);
  circle(70,70,20);
  setfillstyle(SOLID_FILL,14);
  floodfill(70,70,14);
    line(70,70,70,23);
    line(70,70,84,31);
    line(70,70,98,33);
    line(70,70,104,47);
    line(70,70,115,56);
    line(70,70,111,69);
  line(70,70,117,82);
  line(70,70,105,90);
  line(70,70,103,105);
  line(70,70,87,109);
  line(70,70,70,118);
line(70,70,55,110);
line(70,70,40,109);
line(70,70,36,91);
line(70,70,24,82);
line(70,70,28,70);
   line(70,70,25,58);
   line(70,70,35,46);
   line(70,70,39,35);
   line(70,70,52,32);
setcolor(11);
  settextstyle(6,HORIZ_DIR,3);
delay(100);
//windmill
setcolor(8);
line(555,140,545,50);
line(555,140,535,140);
line(535,140,545,50);
setfillstyle(SOLID_FILL,7);
floodfill(550,115,8);
setcolor(8);
line(545,50,510,63);
line(510,63,515,67);
line(515,67,545,50);
line(545,50,572,63);
line(572,63,566,67);
line(566,67,545,50);
line(545,50,550,22);
line(550,22,544,27);
line(544,27,545,50);
setfillstyle(SOLID_FILL,7);
floodfill(515,65,8);
floodfill(560,60,8);
floodfill(546,30,8);
settextstyle(6,HORIZ_DIR,3);
outtextxy(480,130,"Wind energy");
delay(100);

 delay(100);
  //human--------------------------------------------------//
 setcolor(14);
 circle(530,270,20);
 line(530,290,530,370);
 line(530,320,490,300);
 line(490,300,470,330);
 line(530,320,570,335);
 line(570,335,590,300);
 line(530,370,500,410);
 line(500,410,460,390);
 line(530,370,570,380);
 line(570,380,600,410);
 settextstyle(6,HORIZ_DIR,3);
  outtextxy(460,410,"Muscular energy");
 delay(100);
 //biomass-----------------------------------------------//
 line(90,380,30,420);
 line(30,420,50,430);
 line(50,430,100,390);
 line(100,390,80,435);
 line(80,435,105,435);
 line(105,435,110,390);
 line(110,390,130,440);
 line(130,440,150,430);
 line(150,430,120,390);

  setcolor(14);
  ellipse(100,350+10,110,240,45,35);
  ellipse(80,297+10,280,75,25,20);
  ellipse(100,340,285,105,60,52);
  setcolor(14);
  line(90,380,115,395);
  line(110,390,120,390);
  setfillstyle(SOLID_FILL,6);
  floodfill(90,390,14);

  floodfill(120,400,14);

  setfillstyle(SOLID_FILL,4);
  floodfill(100,350,14);

  settextstyle(6,HORIZ_DIR,3);
  outtextxy(70,227,"Biomass");
  delay(100);
  //names--------------------------------------------------------//
  setcolor(11);
  settextstyle(6,HORIZ_DIR,3);
  outtextxy(30,110,"Solar energy");
  settextstyle(6,HORIZ_DIR,3);
  outtextxy(480,130,"Wind energy");
  settextstyle(6,HORIZ_DIR,3);
  outtextxy(250,195,"Atomic energy");
  settextstyle(6,HORIZ_DIR,3);
  outtextxy(240,410,"Structre of atom");
  settextstyle(6,HORIZ_DIR,3);
  outtextxy(460,410,"Muscular energy");
  settextstyle(6,HORIZ_DIR,3);
  outtextxy(70,227,"Biomass");
  gmode=0;
  while(gmode!=20)
  {
  gmode+=1;
  setcolor(10);
  ellipse(310,320,0,360,15,15);
  ellipse(310,320,0,360,40,40);
  ellipse(310,320,0,360,65,65);
  ellipse(310,320,0,360,90,90);

  setcolor(14);
  ellipse(310,320,0,360,5,5);
  setfillstyle(SOLID_FILL,14);
  floodfill(310,322,14);
  setfillstyle(SOLID_FILL,7);
  sector(271,310,0,360,5,5);
  sector(350,320,0,360,5,5);
  sector(280,378,0,360,5,5);
  sector(370,345,0,360,5,5);
  sector(368,290,0,360,5,5);
  sector(335,380,0,360,5,5);
  sector(330,258,0,360,5,5);
  sector(278,262,0,360,5,5);
  sector(246,330,0,360,5,5);
  sector(236,370,0,360,5,5);
  sector(375,260,0,360,5,5);
  setcolor(4);
  sector(295,320,0,360,5,5);
  sector(310,335,0,360,5,5);
  sector(295+30,320,0,360,5,5);
  sector(310,335-30,0,360,5,5);
  setcolor(0);
  setfillstyle(SOLID_FILL,0);
  bar(217,229,412,413);
  delay(200);
  setcolor(10);
  ellipse(310,320,0,360,15,15);
  ellipse(310,320,0,360,40,40);
  ellipse(310,320,0,360,65,65);
  ellipse(310,320,0,360,90,90);
  setcolor(14);
  ellipse(310,320,0,360,5,5);
  setfillstyle(SOLID_FILL,14);
  floodfill(310,322,14);

  setfillstyle(SOLID_FILL,7);
  sector(311,360,0,360,5,5);

  sector(311,280,0,360,5,5);


  sector(308,384,0,360,5,5);

  sector(355,368,0,360,5,5);

  sector(376,315,0,360,5,5);

  sector(260,360,0,360,5,5);

  sector(352,270,0,360,5,5);

  sector(305,257,0,360,5,5);

  sector(253,290,0,360,5,5);


  sector(266,240,0,360,5,5);

  sector(362,392,0,360,5,5);

  setcolor(4);
  sector(295,320,0,360,5,5);
  sector(310,335,0,360,5,5);
  sector(295+30,320,0,360,5,5);
  sector(310,335-30,0,360,5,5);
  if(gmode%2==0)
  {
   setfillstyle(SOLID_FILL,12);
   floodfill(100,350,14);
  }
  if(gmode%2==1)
  {
   setfillstyle(SOLID_FILL,4);
   floodfill(100,350,14);
  }
   setfillstyle(SOLID_FILL,random(25));
  floodfill(200,50,10);
  floodfill(253,50,10);
  floodfill(297,50,10);
  floodfill(330,50,10);
  floodfill(370,50,10);
  floodfill(398,50,10);



  delay(200);

  }





getch();
setcolor(0);
setfillstyle(SOLID_FILL,0);
bar(21,121,618,459);

//writiin
 setcolor(9);
 rectangle(70,170,559,429);
 setfillstyle(SOLID_FILL,4);
 floodfill(75,175,9);
 setcolor(14);
 settextstyle(1,HORIZ_DIR,3);
 outtextxy(130,170," ENERGY plays a significant role");
 outtextxy(74,200,"in our life.You know that all processes ");
 outtextxy(74,230,"that take place in the living organisms ");
 outtextxy(74,260,"require energy. All movements require");
 outtextxy(74,290,"energy.Living organisms get this from");
 outtextxy(74,320,"their food.  ");
 outtextxy(130,350,"Today we live in tecnological world ");
 outtextxy(74,380,"where we use several gadgets to make   ");
 for(gmode=0;gmode<20;gmode++)
  {
   setcolor(random(15));
   rectangle(70,170,559,429);
   delay(100);

  }

 getch();
 close99();
//writtin 2
setcolor(14);
 settextstyle(1,HORIZ_DIR,3);
 outtextxy(78,170,"our lives comfortable. Many of them ");
 outtextxy(78,200,"run on electricity. Others need other ");
 outtextxy(78,230,"types of fuels - Coal, Petrol, Diesel oil");
 outtextxy(78,260,"Kerosene, LPG or CNG. On a bigger ");
 outtextxy(78,290,"scale, large amounts of energy are ");
 outtextxy(78,320,"used in agriculture and transport.");
 for(gmode=0;gmode<20;gmode++)
  {
   setcolor(random(15));
   rectangle(70,170,559,429);
   delay(100);

  }



 getch();
  close99();

  //----------------------------------------------------------//
  for(x=0,y=0,x1=639,y1=479;x<323,y<242,x1>318,y1>238; x++,y++,x1--,y1--)
  {
   setcolor(0);
   rectangle(x,y,x1,y1);
   delay(10);
  }


  getch();


 }