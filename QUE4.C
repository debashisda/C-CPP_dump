//WAP that will paint the background with all possible colors in regular interval.
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
void main()
{
    int gd=DETECT,gm,x,y,c;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    while(!kbhit())
    {
		c=random(256);
		for(x=0;x<getmaxy();x++)
		{
			for(y=0;y<getmaxx();y++)
			{
				putpixel(y,x,c);
			}
		}
		delay(5000);
    }
    getch();
}