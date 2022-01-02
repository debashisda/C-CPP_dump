#include<bits/stdc++.h>
using namespace std;

/*
method for counting zeros or ones, without recurssion
time complexity is O(log n)
version 1
*/

int countZeroes(int a[],int n)
{
    if(a[0]==0)
        return n;

    if(a[n-1]==1)
        return 0;

    int l=0;
    int r=n-1;

    while(l<=r)
    {
        int m=l+(r-l)/2;

        if(a[m]==1)
            if(a[m+1]==1)
                l=m+1;
            else
                return n-m-1;

        if(a[m]==0)
            if(a[m-1]==0)
                r=m-1;
            else
                return n-m;
    }

}

int main()
{
    int a[]={1,1,1,1,1,1,0,0,0,0,0};
    int n=sizeof(a)/sizeof(int);
    cout<<countZeroes(a,n);
}
