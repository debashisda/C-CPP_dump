//WAP that will paint the screen drawing pixels row wise with arbitrary colours.
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm,x,y,c;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(x=0;x<getmaxx();x++)
{ c=random(256);
 for(y=0;y<getmaxy();y++)
  {
    putpixel(y,x,c);
  }
}
getch();
}
