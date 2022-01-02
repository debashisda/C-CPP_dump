//WAP that will draw a figure like football ground. Fill the figure with colors
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm,x,y;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    x=getmaxx()/2;
    y=getmaxy()/2;

    setfillstyle(SOLID_FILL,GREEN);
    rectangle(x-400,y-300,x+400,y+300);//complete stadium
    floodfill(x+5,y+5,WHITE);

    circle(x,y,3);//center ball point
    circle(x-225,y,3);//left penalty point
    circle(x+225,y,3);//right penalty point

    circle(x-297,y-197,3);//left up flag
    circle(x-297,y+197,3);//left down flag
    circle(x+297,y-197,3);//right up flag
    circle(x+297,y+197,3);//right down flag

    rectangle(x-300,y-200,x+300,y+200);//outermost rectangle

    circle(x,y,50);//center circle

    line(x,y-200,x,y+200);//mid line

    rectangle(x-300,y-100,x-200,y+100);//left d
    rectangle(x-300,y-50,x-250,y+50);//left inner d
    rectangle(x-310,y-20,x-300,y+20);//left net

    rectangle(x+200,y-100,x+300,y+100);//right d
    rectangle(x+250,y-50,x+300,y+50);//right inner d
    rectangle(x+300,y-20,x+310,y+20);//right net

    getch();

}
