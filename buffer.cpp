#include<stdio.h>
#include<time.h>

void delay(int ms)
{
    clock_t st = clock();
    while(clock()< st + ms);
}

int main()
{
    char a[]="-\\|/";
    printf("[");
    for(int i=0;;i++)
    {
        printf("%c]",a[i%4]);
        delay(200);
        printf("%c%c",8,8);
    }
}
