#define UP_ARROW 72
#define DOWN_ARROW 80
#define ESC 27
#define ENTER 13
#define RIGHT_ARROW 77
#define LEFT_ARROW 75


getkey()
{

  int d;
  char ch;
  ch=getch();
  if(ch==0)
  {
   ch=getch();
   d=ch;


  }
  else
  {
   d=ch;

  }

  return(d);


}



