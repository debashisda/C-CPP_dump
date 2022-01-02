//WAP that will move a circle like a wheel through the inner edges of the screen
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm, "C:\\TC\\BGI");
while(!kbhit())
{
for(int i=50;i<getmaxx()-50;i++)
{
     circle(i,50,50);
     delay(10);
     cleardevice();
}

for(int i=50;i<430;i++)
{
    circle(590,i,50);
    delay(10);
    cleardevice();
}
for(int i=590;i>50;i--)
{
    circle(i,430,50);
    delay(10);
    cleardevice();
}
for(int i=430;i>50;i--)
{
    circle(50,i,50);
    delay(10);
    cleardevice();
}
}
getch();
}
