//WAP to draw the figure taking radius of the circle and the arc angles as input.
#include<conio.h>
#include<graphics.h>
#include<stdio.h>

int main()
{
    int gd=DETECT,gm,x,y,radius,angle;
    initgraph(&gd,&gm,"");

    x=getmaxx()/2;
    y=getmaxy()/2;

    printf("Enter Radius: ");
    scanf("%d",&radius);

    printf("Enter Angle: ");
    scanf("%d",&angle);

    circle(x,y,radius);
    pieslice(x, y, 0,angle, radius);

    getch();
}
