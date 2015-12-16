void welcome()
{
 int d,m,wre;

 //wel
 setcolor(15);
 rectangle(120,1,490,165);
 setfillstyle(SOLID_FILL,6);
 floodfill(122,3,15);
 //come
 rectangle(70,250,550,418);
 floodfill(72,252,15);
 //W
 circle(150,20,9);
 circle(155,45,9);
 circle(160,70,9);
 circle(165,95,9);
 circle(170,120,9);
 circle(175,145,9);

 circle(190,125,9);
 circle(200,105,9);
 circle(210,85,9);
 circle(220,105,9);
 circle(230,125,9);

 circle(245,145,9);
 circle(250,120,9);
 circle(255,95,9);
 circle(260,70,9);
 circle(265,45,9);
 circle(270,20,9);
 //e
 circle(300,20,9);
 circle(300,45,9);
 circle(300,70,9);
 circle(300,95,9);
 circle(300,120,9);
 circle(300,145,9);

 circle(320,145,9);
 circle(340,145,9);
 circle(360,145,9);

 circle(320,80,9);
 circle(340,80,9);
 circle(360,80,9);

 circle(320,20,9);
 circle(340,20,9);
 circle(360,20,9);
 //l
 circle(400,20,9);
 circle(400,45,9);
 circle(400,70,9);
 circle(400,95,9);
 circle(400,120,9);
 circle(400,145,9);

 circle(420,145,9);
 circle(440,145,9);
 circle(460,145,9);
 //c
 circle(60+30,320-50,9);
 circle(60+30,345-50,9);
 circle(60+30,370-50,9);
 circle(60+30,395-50,9);
 circle(60+30,420-50,9);
 circle(60+30,445-50,9);

 circle(80+30,445-50,9);
 circle(100+30,445-50,9);
 circle(120+30,445-50,9);

 circle(80+30,320-50,9);
 circle(100+30,320-50,9);
 circle(120+30,320-50,9);
//o
 circle(160+30,320-50,9);
 circle(160+30,345-50,9);
 circle(160+30,370-50,9);
 circle(160+30,395-50,9);
 circle(160+30,420-50,9);
 circle(160+30,445-50,9);

 circle(180+30,320-50,9);
 circle(200+30,320-50,9);
 circle(220+30,320-50,9);
 circle(240+30,320-50,9);

 circle(180+30,445-50,9);
 circle(200+30,445-50,9);
 circle(220+30,445-50,9);
 circle(240+30,445-50,9);

 circle(240+30,345-50,9);
 circle(240+30,370-50,9);
 circle(240+30,395-50,9);
 circle(240+30,420-50,9);


 //m
 circle(280+30,320-50,9);
 circle(280+30,345-50,9);
 circle(280+30,370-50,9);
 circle(280+30,395-50,9);
 circle(280+30,420-50,9);
 circle(280+30,445-50,9);

 circle(295+30,285,9);

 circle(310+30,300,9);
 circle(325+30,315,9);
 circle(340+30,330,9);

 circle(355+30,315,9);
 circle(370+30,300,9);
 circle(385+30,285,9);

 circle(400+30,320-50,9);
 circle(400+30,345-50,9);
 circle(400+30,370-50,9);
 circle(400+30,395-50,9);
 circle(400+30,420-50,9);
 circle(400+30,445-50,9);
 //e
 circle(440+30,320-50,9);
 circle(440+30,345-50,9);
 circle(440+30,370-50,9);
 circle(440+30,395-50,9);
 circle(440+30,420-50,9);
 circle(440+30,445-50,9);
 circle(460+30,445-50,9);
 circle(480+30,445-50,9);
 circle(500+30,445-50,9);

 circle(460+30,333,9);
 circle(480+30,333,9);
 circle(500+30,333,9);

 circle(460+30,270,9);
 circle(480+30,270,9);
 circle(500+30,270,9);
 getch();
 m=0;
 while(m!=20)
 {
  m+=1;
 for(wre=0;wre<8;wre++)
 {
 setcolor(random(15));
 delay(10);
 //W
 circle(150,20,wre);
 circle(155,45,wre);
 circle(160,70,wre);
 circle(165,95,wre);
 circle(170,120,wre);
 circle(175,145,wre);

 circle(190,125,wre);
 circle(200,105,wre);
 circle(210,85,wre);
 circle(220,105,wre);
 circle(230,125,wre);

 circle(245,145,wre);
 circle(250,120,wre);
 circle(255,95,wre);
 circle(260,70,wre);
 circle(265,45,wre);
 circle(270,20,wre);
 //e
 circle(300,20,wre);
 circle(300,45,wre);
 circle(300,70,wre);
 circle(300,95,wre);
 circle(300,120,wre);
 circle(300,145,wre);

 circle(320,145,wre);
 circle(340,145,wre);
 circle(360,145,wre);

 circle(320,80,wre);
 circle(340,80,wre);
 circle(360,80,wre);

 circle(320,20,wre);
 circle(340,20,wre);
 circle(360,20,wre);
 //l
 circle(400,20,wre);
 circle(400,45,wre);
 circle(400,70,wre);
 circle(400,95,wre);
 circle(400,120,wre);
 circle(400,145,wre);

 circle(420,145,wre);
 circle(440,145,wre);
 circle(460,145,wre);

 //c
 circle(60+30,320-50,wre);
 circle(60+30,345-50,wre);
 circle(60+30,370-50,wre);
 circle(60+30,395-50,wre);
 circle(60+30,420-50,wre);
 circle(60+30,445-50,wre);

 circle(80+30,445-50,wre);
 circle(100+30,445-50,wre);
 circle(120+30,445-50,wre);

 circle(80+30,320-50,wre);
 circle(100+30,320-50,wre);
 circle(120+30,320-50,wre);
//o
 circle(160+30,320-50,wre);
 circle(160+30,345-50,wre);
 circle(160+30,370-50,wre);
 circle(160+30,395-50,wre);
 circle(160+30,420-50,wre);
 circle(160+30,445-50,wre);

 circle(180+30,320-50,wre);
 circle(200+30,320-50,wre);
 circle(220+30,320-50,wre);
 circle(240+30,320-50,wre);

 circle(180+30,445-50,wre);
 circle(200+30,445-50,wre);
 circle(220+30,445-50,wre);
 circle(240+30,445-50,wre);

 circle(240+30,345-50,wre);
 circle(240+30,370-50,wre);
 circle(240+30,395-50,wre);
 circle(240+30,420-50,wre);


 //m
 circle(280+30,320-50,wre);
 circle(280+30,345-50,wre);
 circle(280+30,370-50,wre);
 circle(280+30,395-50,wre);
 circle(280+30,420-50,wre);
 circle(280+30,445-50,wre);

 circle(295+30,285,wre);
 circle(310+30,300,wre);
 circle(325+30,315,wre);
 circle(340+30,330,wre);

 circle(355+30,315,wre);
 circle(370+30,300,wre);
 circle(385+30,285,wre);

 circle(400+30,320-50,wre);
 circle(400+30,345-50,wre);
 circle(400+30,370-50,wre);
 circle(400+30,395-50,wre);
 circle(400+30,420-50,wre);
 circle(400+30,445-50,wre);
 //e
 circle(440+30,320-50,wre);
 circle(440+30,345-50,wre);
 circle(440+30,370-50,wre);
 circle(440+30,395-50,wre);
 circle(440+30,420-50,wre);
 circle(440+30,445-50,wre);

 circle(460+30,445-50,wre);
 circle(480+30,445-50,wre);
 circle(500+30,445-50,wre);

 circle(460+30,333,wre);
 circle(480+30,333,wre);
 circle(500+30,333,wre);

 circle(460+30,270,wre);
 circle(480+30,270,wre);
 circle(500+30,270,wre);
 }
 for(wre=8;wre>0;wre--)
 {
  setcolor(0);
  delay(10);
  //W
  circle(150,20,wre);
  circle(155,45,wre);
  circle(160,70,wre);
  circle(165,95,wre);
  circle(170,120,wre);
  circle(175,145,wre);

  circle(190,125,wre);
  circle(200,105,wre);
  circle(210,85,wre);
  circle(220,105,wre);
  circle(230,125,wre);

  circle(245,145,wre);
  circle(250,120,wre);
  circle(255,95,wre);
  circle(260,70,wre);
  circle(265,45,wre);
  circle(270,20,wre);
  //e
  circle(300,20,wre);
  circle(300,45,wre);
  circle(300,70,wre);
  circle(300,95,wre);
  circle(300,120,wre);
  circle(300,145,wre);

  circle(320,145,wre);
  circle(340,145,wre);
  circle(360,145,wre);

  circle(320,80,wre);
  circle(340,80,wre);
  circle(360,80,wre);

  circle(320,20,wre);
  circle(340,20,wre);
  circle(360,20,wre);
  //l
  circle(400,20,wre);
   circle(400,45,wre);
  circle(400,70,wre);
  circle(400,95,wre);
  circle(400,120,wre);
  circle(400,145,wre);

  circle(420,145,wre);
  circle(440,145,wre);
  circle(460,145,wre);

 //c
  circle(60+30,320-50,wre);
  circle(60+30,345-50,wre);
  circle(60+30,370-50,wre);
  circle(60+30,395-50,wre);
  circle(60+30,420-50,wre);
  circle(60+30,445-50,wre);

 circle(80+30,445-50,wre);
 circle(100+30,445-50,wre);
 circle(120+30,445-50,wre);

 circle(80+30,320-50,wre);
 circle(100+30,320-50,wre);
 circle(120+30,320-50,wre);
//o
 circle(160+30,320-50,wre);
 circle(160+30,345-50,wre);
 circle(160+30,370-50,wre);
 circle(160+30,395-50,wre);
 circle(160+30,420-50,wre);
 circle(160+30,445-50,wre);

 circle(180+30,320-50,wre);
 circle(200+30,320-50,wre);
 circle(220+30,320-50,wre);
 circle(240+30,320-50,wre);

 circle(180+30,445-50,wre);
 circle(200+30,445-50,wre);
 circle(220+30,445-50,wre);
 circle(240+30,445-50,wre);

 circle(240+30,345-50,wre);
 circle(240+30,370-50,wre);
 circle(240+30,395-50,wre);
 circle(240+30,420-50,wre);


 //m
 circle(280+30,320-50,wre);
 circle(280+30,345-50,wre);
 circle(280+30,370-50,wre);
 circle(280+30,395-50,wre);
 circle(280+30,420-50,wre);
 circle(280+30,445-50,wre);

 circle(295+30,285,wre);
 circle(310+30,300,wre);
 circle(325+30,315,wre);
 circle(340+30,330,wre);

 circle(355+30,315,wre);
 circle(370+30,300,wre);
 circle(385+30,285,wre);

 circle(400+30,320-50,wre);
 circle(400+30,345-50,wre);
 circle(400+30,370-50,wre);
 circle(400+30,395-50,wre);
 circle(400+30,420-50,wre);
 circle(400+30,445-50,wre);
 //e
 circle(440+30,320-50,wre);
 circle(440+30,345-50,wre);
 circle(440+30,370-50,wre);
 circle(440+30,395-50,wre);
 circle(440+30,420-50,wre);
 circle(440+30,445-50,wre);

 circle(460+30,445-50,wre);
 circle(480+30,445-50,wre);
 circle(500+30,445-50,wre);

 circle(460+30,333,wre);
 circle(480+30,333,wre);
 circle(500+30,333,wre);

 circle(460+30,270,wre);
 circle(480+30,270,wre);
 circle(500+30,270,wre);
 }
 }
 getch();
}