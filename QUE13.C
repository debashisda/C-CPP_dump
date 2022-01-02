//WAP that will generate bubbles of arbitrary radius (<100) at arbitrary locations of the screen.
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int gd=DETECT,gm,x,y,i;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    x=getmaxx();
    y=getmaxy();

	for(i=0;i<100;i++)
    {
        setcolor(random(256));
        circle(random(x),random(y),random(i));
    }
    getch();
}
