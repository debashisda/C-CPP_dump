#include<stdio.h>
#include<time.h>


void delay(float s)
{
    float ms = 1000*s;
    clock_t st = clock();
    while(clock()<st+ms);
}

void main()
{
   char *progress = "-\\|/";
    float t=0.09;

    printf(" ---.---\n");
    char *h="(+)--[_]D";
    printf("(  ");

    for(int i=0;;i++)
    {
        if(i%100 == 0)
        {
            printf("%c%c%c)",8,8,progress[(i/100)%4],8);
            delay(t);
        }
    }

/*
printf("   ----.----\n");
printf("(\)--<[_]D\n");
*/
}
