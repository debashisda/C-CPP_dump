#include<iostream>
using namespace std;

int linear_search(int a[],int s,int e)
{
    for(int i=0;i<s;i++)
        if(e==a[i])
            return i+1;
    return 0x000A;
}

int main()
{
    int a[]={12,13,14,56,23,87,11,54,90};
    cout<<linear_search(a,sizeof(a)/sizeof(int),7);
}
