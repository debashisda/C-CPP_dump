#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
    int max = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>max)
            max = arr[i];
    return max;
}
int smallest(int arr[], int n){
    int min = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]<min)
            min = arr[i];
    return min;
}

int main()
{
    int a[]={3, 9, 12, 16, 20};
    //int a[]={2, 6, 3, 4, 7, 2, 10, 3, 2, 1}; ///7
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);

    int m=largest(a,n);

    for(int i=0;i<n;i++)
    {
        if(a[i+1] - a[i]>=k && a[i]-k>0)
            a[i]=a[i]+k;

        else if(a[i+1]-a[i] <k && a[i]-k>0)
            a[i]=a[i]-k;
    }

    int x=largest(a,n);
    int y=smallest(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<endl<<x-y;

}
