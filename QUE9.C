//WAP to draw the figure(soft toy face)
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm,x,y;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    x=getmaxx()/2;
    y=getmaxy()/2;

    circle(x,y,100);//main face circle

    circle(x-40,y-30,10);//left eye
    circle(x+40,y-30,10);//right eye

    circle(x,y+20,20);//nose

    line(x-40,y+60,x+40,y+60);//mouth

    circle(x-105,y-90,40);//left outer ear
    circle(x-95,y-85,30);//left inner ear


    circle(x+105,y-90,40);//right outer ear
    circle(x+95,y-85,30);//right inner ear

    getch();

}
