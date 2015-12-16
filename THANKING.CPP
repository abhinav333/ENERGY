#include"graphics.h"
#include"dos.h"
#include"conio.h"
#include"stdio.h"
#include"alloc.h"
#include"stdlib.h"
#include"D:\KCTSCH~1\HFILES~1\FUNCTION.H"
#include"D:\KCTSCH~1\HFILES~1\THANK.H"
#include"D:\KCTSCH~1\HFILES~1\PRESENT.H"
void main()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC");
 present();
 close6();
 cleardevice();
 thank();
 getch();
 getch();
 getch();
 getch();
 getch();


}