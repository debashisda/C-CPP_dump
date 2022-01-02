#include<bits/stdc++.h>
using namespace std;

int smallest(int a[],int s,int i)
{
    int k=i;
    for(int j=i+1;j<s;j++)
        if(a[j]<a[k])
            k=j;
    return k;
}

void selection_sort(int a[],int s)
{
    for(int i=0;i<s-1;i++)
        swap(a[smallest(a,s,i)],a[i]);
}

int main()
{
    int a[]={3,4,5,2,7,3,6,9,0};
    int s=sizeof(a)/sizeof(int);
    selection_sort(a,s);
    for(int i=0;i<s;i++)
       cout<<a[i]<<" ";
}
