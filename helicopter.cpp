#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;

void delay(float s)
{
    float ms = 1000*s;
    clock_t st = clock();
    while(clock()<st+ms);
}

void roter()
{
    char *progress = "-\\|/";
    float t=0.1;
    printf("(  ");
    for(int i=0;;i++)
    {
        if(i%100 == 0)
        {
            printf("%c%c%c)",8,8,progress[(i/100)%4]);
            delay(t);
        }
    }
}
int main()
{
    roter();
}





