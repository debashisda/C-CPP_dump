//WAP that will draw points on the screen with different colors at random.
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int gd=0,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

for(int x=0;x<getmaxx();x++)
{
 for(int y=0;y<getmaxy();y++)
  {
    putpixel(random(x),random(y),random(255));
  }
}
getch();

}