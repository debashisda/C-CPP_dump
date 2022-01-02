//WAP that will draw a rectangle taking necessary inputs from user. Now draw a circle of maximum size inside the rectangle.
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int gd=DETECT,gm,x,y,l,b,r;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    x=getmaxx()/2;
    y=getmaxy()/2;
    printf("Enter Length & Breadth(in pixels): ");
    scanf("%d %d",&l,&b);

    rectangle(x-b/2,y-l/2,x+b/2,y+l/2);

    if(l>b)
        r=b/2;
    else
        r=l/2;

    circle(x,y,r);

    getch();

}
