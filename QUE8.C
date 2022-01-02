//WAP to draw the figure like a hut.
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    setfillstyle(SOLID_FILL,YELLOW);
    line(250,150,150,250);//roof line
    line(250,150,350,250);//roof line
    line(150,250,350,250);//roof line
    floodfill(256,160,WHITE);

    setfillstyle(SOLID_FILL,LIGHTRED);
    rectangle(150,250,350,400);//walls
    floodfill(300,380,WHITE);

    setfillstyle(SOLID_FILL,LIGHTGRAY);
    rectangle(230,330,270,400);//door
    floodfill(250,380,WHITE);


    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(170,280,210,320);//left window
    floodfill(175,283,WHITE);

    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(290,280,330,320);//right window
    floodfill(293,283,WHITE);

    getch();


}
