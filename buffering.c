#include<stdio.h>
#include<time.h>

void delay(float s)
{
    float ms = 1000*s;
    clock_t st = clock();
    while(clock()<st+ms);
}

//nice and sexy version
void main()
{
    char *progress = "-\\|/";
    float t=0.09;
    printf("[  ");
    for(int i=0;;i++)
        if(i%100 == 0)
        {
            printf("%c%c%c]",8,8,progress[(i/100)%4]);
            delay(t);
        }
}
/*
//my approach
void main()
{
    const char *progress = "-\\|/";
    char a='-';
    char b='\\';
    char c='|';
    char d='/';

    float t=0.09;
    printf("[-]");
    for(int i=0;;i++)
    {/*
        delay(t);
        printf("Loading...[%c]",a);
        delay(t);
        system("CLS");

        printf("Loading...[%c]",b);
        delay(t);
        system("CLS");

        printf("Loading...[%c]",c);
        delay(t);
        system("CLS");
        
        printf("Loading...[%c]",d);
        delay(t);
        system("CLS");
        if(i % 100 == 0)
        {
            printf("%c%c%c]", 8, 8, progress[(i/100)%4] );
            delay(t);
        }
    }
        if(i % 100 == 0)
        {
            printf("%c%c%c", 8, 8, progress[(i/100)%4] );
            fflush(stdout);
        }
}
*/






