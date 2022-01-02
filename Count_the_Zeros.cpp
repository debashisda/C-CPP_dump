#include<bits/stdc++.h>
using namespace std;

/*
method for counting zeros or ones
time complexity is O(log n)

version 2
*/


int countZeroes(int a[],int n,int l,int r)
{
    int m=l+(r-l)/2;

    if(a[0]==0)
        return n;

    if(a[n-1]==1)
        return 0;

    if(a[m]==1)
        if(a[m+1]==1)
            return countZeroes(a,n,m+1,r);
        else
            return n-m-1;

    if(a[m]==0)
        if(a[m-1]==0)
            return countZeroes(a,n,l,m-1);
        else
            return n-m;

}

int main()
{
    int a[]={1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0};
    int n=sizeof(a)/sizeof(int);
    cout<<countZeroes(a,n,0,n-1);
}
