#include<stdio.h>

struct temp
{
    int a[10];
    char p;
};

main()
{
    struct temp a;
    printf("%d",sizeof(a));
}
