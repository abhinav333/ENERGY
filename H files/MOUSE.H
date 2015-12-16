union REGS i,o;
void initmouse()
{
 i.x.ax=0;
 int86(0x33,&i,&o);
}

void showmouseptr()
{
 i.x.ax=1;
 int86(0x33,&i,&o);
}
void restrictmouseptr(int x1,int y1,int x2,int y2)
{
 i.x.ax=16;
 i.x.cx=x1;
 i.x.dx=y1;


 i.x.si=x2;
 i.x.di=y2;
 int86(0x33,&i,&o);
}
void hidemouseptr()
{
 i.x.ax=2;
 int86(0x33,&i,&o);
}
void getmousepos(int *button,int *x,int *y)
{
 i.x.ax=3;
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
}
