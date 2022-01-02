#include<iostream>
using namespace std;

void bubble_sort(int a[],int s)
{
    for(int i=0;i<s-1;i++)
        for(int j=0;j<s-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}

int main()
{
    int a[]={3,4,5,2,7,3,6,9,0};
    int s=sizeof(a)/sizeof(int);
    bubble_sort(a,s);
    for(int i=0;i<s;i++)
       cout<<a[i]<<" ";
}
