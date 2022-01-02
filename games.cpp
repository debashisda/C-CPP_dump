#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>

void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
}
int main()
{
    int h=GetSystemMetrics(SM_CYSCREEN);
    int w=GetSystemMetrics(SM_CXSCREEN);
    initwindow(w/2,h/2,"Window",0,0);

    int x=25,y=515;///circle position
    int v=10; ///velocity or movement speed

    int X=0,Y=0; ///border

    int lx=0,ly=400,rx=400,ry=400;
    line(lx,ly,rx,ry);

    triangle(100,200,500,400,0,400);



    /*while(1)
    {

        //setfillstyle(SOLID_FILL,YELLOW);
        //rectangle(X,Y,X+960,Y+550);
        rectangle(X+10,Y+10,X+950,Y+530);
        //floodfill(X+8,Y+8,WHITE);
        //cleardevice();
        circle(x,y,15);
        if(GetAsyncKeyState(VK_RIGHT))
            x=x+v;
        if(GetAsyncKeyState(VK_LEFT))
            x=x-v;
        delay(7);
    }*/

getch();
}



