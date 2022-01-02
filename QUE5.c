//WAP that will draw 200 concentric circles of radius 100 to 300, each with different colors.
#include<graphics.h>


int main()
{
    int gd=DETECT,gm,x,y,i;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    x=getmaxx()/2;
    y=getmaxy()/2;

	for(i=100;i<=300;i++)
    {
        setcolor(random(256));
        circle(x,y,i);
    }
    getch();
}
