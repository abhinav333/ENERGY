void biomass()
{
 int gdriver,gmode,bl,bz;
 setcolor(12);
   rectangle(0,0,639,479);
    rectangle(20,20,639-20,479-20);
  setfillstyle(BKSLASH_FILL,9);
  floodfill(10,10,12);
  int pie,r,x,y;
       pie=3.14;
       for(r=0;r<9150+324;r++)
 {
  delay(1);
  x=320+260*sin(pie+r);
  y=240+140*cos(pie-r);
  setcolor(random(15));
  ellipse(x,y,0,361,random(25),random(45));
}
 settextstyle(7,HORIZ_DIR,6);
r=0;
   while(r!=145)
 {
  r+=1;
 delay(14);
 setcolor(14);
 outtextxy(190,200,"BIOMASS");
 setcolor(4);
 outtextxy(190,200,"BIOMASS");
}
 setcolor(14);
 outtextxy(190,200,"BIOMASS");

  getch();
 cleardevice();
 setfillstyle(SOLID_FILL,0);
 floodfill(9,9,0);
//biomass
setcolor(14);
rectangle(0,0,630,479);
rectangle(11,20,619,457);
setfillstyle(LINE_FILL,12);
floodfill(15,15,14);
//setfillstyle(SOLID_FILL,14);
//floodfill(33,33,14);
setcolor(14);
settextstyle(7,HORIZ_DIR,5);
outtextxy(75,20,"      BIOMASS");
setcolor(10);

settextstyle(6,HORIZ_DIR,2);
outtextxy(47,70,"The term BIOMASS is applied to all plant products which are used");
delay(50);
outtextxy(25,90,"to produce energy. Wood, crops, and grass are primary sources of");
delay(50);
outtextxy(25,110,"BIOMASS. Agriculture & food manufacturing wastes & garbage are ");
delay(50);
outtextxy(25,130,"secondary sources . Biomass is used to generate electricity, fuel");
delay(50);
outtextxy(25,150,"vehicles & produce heat for industry & domestic use. Someways in  ");
delay(50);
outtextxy(25,170,"BIOMASS is used to provide ENERGY :- ");
delay(50);
setcolor(10);
outtextxy(25,190," * Wood & other agricultural waste such as ` BAGASSE ' left after ");
delay(50);
outtextxy(25,210,"   extracting juice from sugarcane are used for heating.");
delay(50);
outtextxy(25,230," * Fermentation of grains produces ETHANOL which is mixed with  ");
delay(50);
outtextxy(25,250,"   petrol and used to run vehicles. " );
delay(50);
outtextxy(25,270," * Gassification converts decaying biomass in land fills and biogas  ");
delay(50);
outtextxy(25,290,"   digesters into methane, which is the main ingredient in natural   ");
delay(50);
outtextxy(25,310,"   gas. In India cowdung is also used to produce biogas. Not only is ");
delay(50);
outtextxy(25,330,"    biogas non polluting, the residue left behind after the  gas is ");
delay(50);
outtextxy(25,350,"    produced is used as fertilizer.");
delay(50);
setcolor(4);
outtextxy(13,380," The following diagram will give better idea of working of a biomass plant " );
setcolor(5);
delay(50);
outtextxy(300,410,"Press any key to continue..... ");
getch();
//animax ---------------------------------------------------------
for(bl=0,bz=640;bl<640,bz>0;bl++,bz--)
{
 delay(1);
 setcolor(15);
 line(bl,0,bl,119);
 line(bl,240,bl,359);
 setcolor(15);
 line(bz,120,bz,239);
 line(bz,360,bz,480);


}

//-------------------------------------------------------------------------
setcolor(1);
rectangle(0,0,639,479);
rectangle(15,15,624,464);
setfillstyle(SOLID_FILL,1);
floodfill(10,10,1);
setfillstyle(SOLID_FILL,15);
floodfill(20,20,1);
setcolor(4);
settextstyle(7,HORIZ_DIR,5);
outtextxy(75,20,"       BIOGAS");
//diadgeiashgf
setcolor(0);
rectangle(150,420,430,440);
line(170+20,420,170+20,400);
line(170+20,400,130+20,400);
line(130+20,400,100,200);
line(100,200,30,200);
line(30,200,30,130);
line(30,130,50,130);
line(50,130,50,200);
line(50,165,120,180);
line(120,180,150+20,380);
line(150+20,380,190+20,380);
line(190+20,380,190+20,420);
//right
line(390,420,390,400);
line(390,400,480,400);
line(480,400,480,300);
line(480,300,560,300);
line(560,300,560,200);
line(540,200,610,200);
line(540,200,540,280);
line(540,280,460,280);
line(460,280,460,380);
line(460,380,370,380);
line(370,380,370,420);
//left
rectangle(190,350,210,190);
rectangle(140,185,210,190);
rectangle(140,185,160,130);
//right
rectangle(190+180,350,210+180,190);
rectangle(190+180,185,210+270,190);
rectangle(210+270,190,210+250,210);
rectangle(210+250,225,210+270,280);
line(210,190,210+170,190);
ellipse(290,290,0,180,100.5,100);
ellipse(290,290+20,0,180,80.5,100);
//vwre bad
setcolor(15);
line(210,290,210,231);
line(210+160,290,210+160,231);
//outlet
setcolor(0);
rectangle(282,240,297,173);
rectangle(280,173,299,157);
rectangle(282,157,297,140);
rectangle(282,140,360,125);
rectangle(280,162,277,167);
rectangle(299,162,310,167);
rectangle(310,157,314,171);
//wrey bad
setcolor(15);
line(283,240,296,240);
line(283,140,296,140);
line(283,210,296,210);
line(283,190,296,190);
line(360,140,360,125);
//sdjhs;4f coloring
setcolor(0);
setfillstyle(SOLID_FILL,12);
floodfill(40,190,0);
floodfill(100,190,0);
floodfill(150,160,0);
floodfill(200,290,0);
floodfill(200,230,0);
floodfill(380,290,0);
floodfill(380,230,0);
floodfill(470,200,0);
floodfill(470,260,0);
floodfill(470,290,0);
setfillstyle(SOLID_FILL,8);
floodfill(152,188,0);
floodfill(452,188,0);
floodfill(155,425,0);
/// all matter cska
setcolor(0);
line(50,150,70,154);
line(70,154,77,152);
line(77,152,80,160);
line(80,160,100,167);
line(100,167,110,165);
line(110,165,132,188);
line(132,188,130,190);
line(130,190,142,240);
line(142,240,152,280);
line(152,280,180,300);
line(180,300,190,293);
line(210,295,240,310);
line(240,310,300,305);
line(300,305,350,312);
line(350,312,360,300);
line(360,300,370,310);
line(390,315,430,300);
line(430,300,450,295);
line(450,295,460,303);
line(480,250,495,247);
line(495,247,510,253);
line(510,253,520,250);
line(520,250,530,255);
line(530,255,540,253);
//vdjsc
setfillstyle(SOLID_FILL,6);
floodfill(160,300,0);
floodfill(520,259,0);
//arrows1
setcolor(9);
ellipse(210,330,200,320,45,30);
ellipse(210,330+1,200,320,45,30);
//uiy2
ellipse(210+180,335,210,330,45,30);
ellipse(210+180,335+1,210,330,45,30);
//dwad3
ellipse(470,245,40,160,45,30);
ellipse(470,245+1,40,160,45,30);
//li
line(150,230,160,260);
line(150+1,230,160+1,260);
line(160,260,163,250);
line(160,259,152,255);
//labaellodui
setcolor(0);
settextstyle(2,HORIZ_DIR,4);
outtextxy(20,405,"Underground Digester Tank");
outtextxy(20,320,"Dung and water ");
outtextxy(20,330,"Mixture");
outtextxy(20,280,"Inlet chamber");
outtextxy(20,205,"Ground level");
outtextxy(20,110,"Mixing tank");
outtextxy(100,100,"Slury of cattle waste");
outtextxy(100,110,"and water");
outtextxy(168,170,"Slab cover");
outtextxy(215,190,"Dome");
outtextxy(400,170,"Slab cover");
outtextxy(270,250,"Biogas");
outtextxy(320,158,"Gas valve");
outtextxy(280,110,"Outlet for biogas");
outtextxy(510,360,"Outlet chamber");
outtextxy(490,300,"Spent Slury ");
outtextxy(550,220,"   Overflow");
outtextxy(550,230,"   Tank");
rha(171,410,90,0);
rha(110,327,130,0);
rha(350,132,50,0);
rha(100,285,40,0);
dva(120,130,40,0);
lha(500,365,60,0);


getch();
}