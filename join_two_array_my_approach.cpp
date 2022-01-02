///Union of two Arrays
#include<bits/stdc++.h>
using namespace std;

int doUnion(int[],int,int[],int);
int main()
{
    int a[]={1,3,5,6,7,2,4,11,11,23};
    int b[]={1,5,66,9};

    int soa=sizeof(a)/sizeof(a[0]);
    int sob=sizeof(b)/sizeof(b[0]);

    cout<<doUnion(a,soa,b,sob);

}

int doUnion(int a[], int n, int b[], int m)
{
    ///logic: combine two array
    int x=n+m;
    int c[x];
    for(int i=0;i<n;i++)
        c[i]=a[i];
    for(int i=n;i<x;i++)
        c[i]=b[i-n];
    sort(c,c+x);
    int d[x];
    int f=0;
    for(int i=0;i<x;)
    {
        if(d[f]==c[i])
            i++;

        else if(d[f]!=c[i])
        {
            //cout<<c[i]<<" ";
            f++;
            d[f]=c[i];
            i++;
        }
    }
    return f;
}
