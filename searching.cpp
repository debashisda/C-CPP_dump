#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int N, int X)
{
    int start = 0;
    int end = N;
    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        if (X == arr[mid])
            return mid;

        else if (X < arr[mid])
            start = mid + 1;

        else
            end = mid - 1;

    }

    return -1;
}
int Binary_Search(int a[],int l,int r,int e)
{
    while(l<=r)
    {
        int mid = l + (r-l)/ 2;
        if(a[mid]==e)
            return mid;

        else if(a[mid]>e)
            l=mid+1;

        else
            r=mid-1;
    }
    return -1;
}
int main()
{
    int a[] = {9,9,9,9,9};
	int n = sizeof(a) / sizeof(int);
    cout<<binarySearch(a,n,9);
}
