#include"D:\KCTSCH~1\HFILES~1\BIOMASS.H"
#include"D:\KCTSCH~1\HFILES~1\HYDRO.H"
#include"D:\KCTSCH~1\HFILES~1\GEOTHERMAL.H"
#include"D:\KCTSCH~1\HFILES~1\NUCLEAR.H"
#include"D:\KCTSCH~1\HFILES~1\SOLAR.H"
#include"D:\KCTSCH~1\HFILES~1\WIND.H"
#include"D:\KCTSCH~1\HFILES~1\ELECTRIC.H"

void types()
{
 auto int k1,k2,k3,k4,v1,v2,v3,v4,x1,a,s;





 setcolor(5);
 rectangle(0,0,639,479);
 rectangle(20,20,619,459);
 setfillstyle(SOLID_FILL,13);
 floodfill(13,13,5);
 setcolor(14);
 settextstyle(7,HORIZ_DIR,5);
 outtextxy(115,30,"TYPES OF ENERGY");
 setcolor(11);
 settextstyle(3,HORIZ_DIR,5);
 outtextxy(105,55,"~~~~~ ~~ ~~~~~~");
// diagram
  setcolor(8);
  line(60,380,60,174);
  line(80,380,80,189);
  line(60,380,80,380);
line(105,200,185,200);
line(30,140,110,140);
    line(105,200,30,140);
    line(185,200,110,140);
 rectangle(105,200,185,210);
 line(30,140,30,150);
 line(30,150,105,210);
 rectangle(40,390,120,410);
 line(120,390,100,370);
 line(100,370,80,370);
 line(60,370,25,370);
 line(25,370,40,390);
 line(25,370,25,390);
 line(25,390,40,410);
 line(145,200,70,140);
 line(125,200,50,140);
 line(165,200,90,140);
 line(47,155,128,155);
 line(67,170,147,170);
 line(87,185,166 ,185);
 setfillstyle(SOLID_FILL,8);
 floodfill(120,205,8);
floodfill(50,160,8);
//drfh
 setfillstyle(SOLID_FILL,7);
floodfill(70,160,8);
floodfill(90,160,8);
floodfill(120,160,8);
floodfill(110,160,8);
//dg
floodfill (40,145,8 );
floodfill (60,145,8 );
floodfill (80,145,8 );
floodfill (109,145,8 );
//fdg
floodfill (85,180, 8);
floodfill (110,180, 8);
floodfill (125,180, 8);
floodfill (145,180, 8);
//fdg
floodfill (105,195,8 );
floodfill (125,196,8 );
floodfill (145,195,8 );
floodfill(165,195,8 );
//ewjirfkes
setfillstyle(SOLID_FILL,8);
floodfill(50,400,8);
floodfill(30,390,8);
setfillstyle(SOLID_FILL,7);
floodfill(50,375,8);
floodfill(70,350,8);
setcolor(2);
rectangle(200,150,600,440);
rectangle(215,165,585,425);
setfillstyle(SOLID_FILL,10);
floodfill(210,155,2);
//writtin.dkglbbsllznh.,dos
setcolor(11);
settextstyle(7,HORIZ_DIR,3);
outtextxy(260,165,"All the sources of energy ");
outtextxy(230,190,"that we use can be divided");
outtextxy(230,215,"into two groups :-");
outtextxy(225,245,"i] Renewable sources :- ");
outtextxy(220,270,"These are sources that we can");
outtextxy(220,295,"use over & over again.");
outtextxy(220,320,"ii] Non-Renewable sources :-");
outtextxy(220,345,"these are sources which can't");
outtextxy(220,370,"be used again and again.");

getch();
setcolor(12);

 setcolor(11);
 settextstyle(7,HORIZ_DIR,3);
 outtextxy(220,165,"Since non renewable sources  ");
 outtextxy(220,190,"don't last forever non-conven");
 outtextxy(220,215,"tional sources like biomass, ");
 outtextxy(220,245,"use of sun's energy through ");
 outtextxy(220,270,"solar cells & solar heating,");
 outtextxy(220,295,"wind energy, tidal energy, ");
 outtextxy(220,320,"geo thetmal energy & nuclear ");
 outtextxy(220,345,"are being explored by scientist");
 getch();
 for (k1=0,k2=0,k3=639,k4=479;k1<322,k2<242,k3>318,k4>238;k1++,k2++,k3--,k4--)
{

  setcolor(10);
  rectangle(k1,k2,k3,k4);
  delay(10);

}

for (v1=320,v2=240,v3=320,v4=240;v1>0-100,v2>0-100,v3<639+100,v4<479+100;v1--,v2--,v3++,v4++)
{

  setcolor(12);
  rectangle(v1,v2,v3,v4);
  delay(10);


}

//chart
setcolor(14);
setfillstyle(SOLID_FILL,12);
floodfill(35,35,14);
rectangle(0,0,639,479);
rectangle(10,10,629,469);
setfillstyle(SOLID_FILL,10);
floodfill(5,5,14);
setcolor(1);
settextstyle(7,HORIZ_DIR,4);
outtextxy(65,10,"SUN-Major Source Of Energy" );
setcolor(11);
outtextxy(65,40,"~~~ ~~~~~ ~~~~~~ ~~ ~~~~~~" );
settextstyle(3,HORIZ_DIR,3);
setcolor(15);
outtextxy(18,50," The chart shows how different kinds of energy are" );
outtextxy(18,68,"          linked to energy from the SUN");
//chart
setcolor(14);
circle(300,123,20);
setfillstyle(SOLID_FILL,14);
floodfill(300,123,14);
setcolor(0);
settextstyle(2,HORIZ_DIR,6);
outtextxy(286,113,"SUN");
//energy in plants
line(275,123,90,123);
line(90,123,90,136);
rectangle(67,136,163,156);
settextstyle(2,HORIZ_DIR,4);
outtextxy(70,138,"energy in plants");
//food for humans
line(72,156,72,176);
rectangle(20,176,115,205);
settextstyle(2,HORIZ_DIR,4);
outtextxy(23,178,"food for humans ");
outtextxy(23,190,"& other animals.");
//biomass
line(128,156,128,210);
rectangle(100,210,155,225);
settextstyle(2,HORIZ_DIR,4);
outtextxy(101,212," BIOMASS");
//wood buenr
line(115,225,115,280);
line(115,280,55,280);
line(55,280,55,290);
rectangle(20,290,100,320);
settextstyle(2,HORIZ_DIR,4);
outtextxy(22,290,"wood burnt as");
outtextxy(22,305,"fuel.");
//household agiculture
line(128,225,128,350);
rectangle(89,350,174,425);
settextstyle(2,HORIZ_DIR,4);
outtextxy(94,350,"household and");
outtextxy(94,365,"agricultural ");
outtextxy(94,380," waste burnt ");
outtextxy(94,395," or used to  ");
outtextxy(91,410,"produce biogas");
//fermented
line(145,225,145,245);
line(145,245,180,245);
line(180,245,180,260);
rectangle(140,260,220,310);
outtextxy(144,260,"fermented to ");
outtextxy(144,272,"  produce ");
outtextxy(144,284,"  alcohol ");
outtextxy(144,296," (ethanol)");
//non renewable
line(150,156,150,180);
line(150,180,320,180);
line(320,180,320,300);
rectangle(280,300,360,397);
outtextxy(283,300,"Non-renewable");
outtextxy(282,312," fossil fuels");
outtextxy(282,324,"eg.petrol/LPG");
outtextxy(282,336,"CNG are used ");
outtextxy(282,348,"for transport");
outtextxy(282,360,"  generating ");
outtextxy(282,372,"electricity &");
outtextxy(282,384,"domestic use.");
//direct use '
line(325,125,500,125);
line(500,125,500,135);
rectangle(470,135,550,183);
outtextxy(473,135,"Direct use in");
outtextxy(473,147,"solar photov-");
outtextxy(473,159,"oltaic ,solar");
outtextxy(473,171,"   thermal.  ");
//ews
line(300,148,300,155);
line(300,155,450,155);
line(450,155,450,195);
rectangle(396,195,532,210);
outtextxy(400,195,"Earth's Weather system.");
//wawe and wimnd
line(415,210,415,225);
rectangle(358,225,436,263);
outtextxy(365,225,"Wawe Energy");
outtextxy(362,237,"Wind & tides");
outtextxy(362,249,"from waves.");
//wind energy
line(456,210,456,285);
line(456,285,425,285);
line(425,285,425,310);
rectangle(369,310,496,363);
outtextxy(372,310,"    Wind Energy");
outtextxy(372,322," moves ships, pumps");
outtextxy(372,337," pumps,grinds corn,");
outtextxy(372,349,"generates electricity.");
//rainfall
line(510,210,510,375);
line(510,375,450,375);
line(450,375,450,390);
rectangle(380,390,502,427);
outtextxy(382,390,"Rainfall > Dams >");
outtextxy(382,402,"Hydroelectric energy");
outtextxy(382,414,"for generating power.");
getch();
//DIADIAGRAMS__________________

for (x1=0;x1<640;x1=x1+2)
{
setcolor(0);
line(x1,0,x1,480);
delay(2);
}

for (x1=639;x1>0;x1=x1-2)
{
setcolor(0);
line(x1,0,x1,479);
delay(3);
}
setcolor(12);
rectangle(0,0,639,50);
setfillstyle(SOLID_FILL,15);
floodfill(10,10,12);
rectangle(0,50,639,60);
setfillstyle(SOLID_FILL,12);
floodfill(40,55,12);

setcolor(9);
rectangle(0,60,639,479);
setfillstyle(SOLID_FILL,9);
floodfill(10,61,9);

setcolor(14);
setfillstyle(SOLID_FILL,14);
bar(90,60,540,479);

setcolor(1);
settextstyle(7,HORIZ_DIR,3);
outtextxy(65,8,"PRODUCTION OF ELECTRICITY IN INDIA");

//pie chart

setcolor(0);
sector(300,150,180,90,150,60);
sector(300,150,80,90,150,60);
sector(300,150,72,80,150,60);
ellipse(300,150,180,72,150,60);
setfillstyle(SOLID_FILL,10);
floodfill(200,140,0);
setfillstyle(SOLID_FILL,9);
floodfill(200,180,0);
setfillstyle(SOLID_FILL,12);
floodfill(310,100,0);
setfillstyle(SOLID_FILL,7);
floodfill(337,100,0);
line(150,155,150,175);
line(450,155,450,175);
ellipse(300,175,180,0,150,60);
setfillstyle(SOLID_FILL,1);
floodfill(300,230,0);
//label
rectangle(100,260,150,280);
rectangle(100,320,150,340);
rectangle(100,380,150,400);
rectangle(100,440,150,460);
setfillstyle(SOLID_FILL,9);
floodfill(110,265,0);
setfillstyle(SOLID_FILL,10);
floodfill(110,325,0);
setfillstyle(SOLID_FILL,12);
floodfill(110,385,0);
setfillstyle(SOLID_FILL,7);
floodfill(110,445,0);
setcolor(4);
settextstyle(7,HORIZ_DIR,2);
outtextxy(160,255,"THERMAL POWER - 70.6% ");
outtextxy(160,315,"HYDEL POWER - 23.7%");
outtextxy(160,375,"RENEWABLE ENERGY - 3%");
outtextxy(160,435,"NUCLEAR POWER - 2.7% ");
setcolor(15);
settextstyle(2,HORIZ_DIR,5);
outtextxy(544,20+100,"*FACTOMETER*");
setcolor(14);
outtextxy(544,60+100,"In India only");
outtextxy(544,75+100,"2.7% of the");
outtextxy(544,90+100,"electricity ");
outtextxy(544,105+100,"generated is");
outtextxy(544,120+100,"through ");
outtextxy(544,135+100,"nuclear ");
outtextxy(544,150+100,"energy while ");
outtextxy(544,165+100,"it is as high ");
outtextxy(544,180+100,"as 1/5 of the ");
outtextxy(544,195+100,"total");
outtextxy(544,210+100,"electricity ");
outtextxy(544,225+100,"produced ");
outtextxy(544,240+100,"in U.S.A.");


setcolor(15);
settextstyle(2,HORIZ_DIR,5);
outtextxy(4,20+100,"INFORMATION");
outtextxy(4,35+100,"   BAR");

setcolor(14);
settextstyle(2,HORIZ_DIR,5);
outtextxy(4,60+100,"In India ");
outtextxy(4,75+100,"electrity ");
outtextxy(4,90+100,"is largely ");
outtextxy(4,105+100,"obtained ");
outtextxy(4,120+100,"from ");
outtextxy(4,135+100,"thermal ");
outtextxy(4,150+100,"power");
outtextxy(4,165+100,"station");
outtextxy(4,180+100,"(70.06% &");
outtextxy(4,195+100,"hydel power");
outtextxy(4,210+100,"(23.7%)");
outtextxy(4,225+100,"Nuclear ");
outtextxy(4,240+100,"power(2.7%)");
outtextxy(4,255+100,"& 3% from ");
outtextxy(4,270+100,"renewable ");
outtextxy(4,285+100,"sources");
//menu
getch();
for (a=50,s=60;a<580,s<580;a++,s++)
{
 setcolor(15);
 rectangle(a,10,a,40);
 bar(90,s,540,s);
 delay(1);
 setcolor(12);
 rectangle(90,60,540,479);
 setfillstyle(SOLID_FILL,14);
 floodfill(100,70,12);
}
 getch();
 cleardevice();
 solar();
 cleardevice();
 nuclear();
 cleardevice();
 biomass();
 cleardevice();
 hydro();
 cleardevice();
 geothermal();
 cleardevice();
 wind();
 getch();



}
