#include"graphics.h"
#include"dos.h"
#include"conio.h"
#include"stdio.h"
#include"alloc.h"
#include"stdlib.h"
#include"D:\KCTSCH~1\HFILES~1\FUNCTIONS.H"
#include"D:\KCTSCH~1\HFILES~1\WELCOM.H"
#include"D:\KCTSCH~1\HFILES~1\PASS.H"
#include"D:\KCTSCH~1\HFILES~1\SCBAN.H"
#include"D:\KCTSCH~1\HFILES~1\BANNER.H"

void main()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC");

 welcome();
 closep();
 cleardevice();
 pass();
 spokes();
 cleardevice();
 scbanner();
 closert();
 cleardevice();
 banner();
 cir();
 cleardevice();


 getch();
}