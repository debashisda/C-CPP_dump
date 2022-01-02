#include<bits/stdc++.h>
using namespace std;

int  gcd(int n,int k)
{
    if(n==0)
        return k;

    if(k==0)
        return n;

    if(n>k)
         return gcd(n-k,k);

    else
        return gcd(n,k-n);

 }

void juggle(int arr[],int n,int k)
{
    int g=gcd(n,k);
    for(int i=0;i<g;i++)
    {
        int temp=arr[i];
        int j=i;
        while(true)
        {
            int m=j+k;

            if(m>=n)
               m=m-n;

            if(m==i)
               break;

           arr[j]=arr[m];
           j=m;
        }
         arr[j]=temp;
    }
}
int main()
{
    int d = 3;
    int a[] = {2,4,6,8,10,12,14};
    int n=sizeof(a)/sizeof(int);

    juggle(a,n,d);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
