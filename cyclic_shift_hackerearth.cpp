#include<bits/stdc++.h>
using namespace std;

int bD(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

int main()
{

    int n=5;
    unsigned long int k=2;
    string b="10101";

    unsigned long int max=bD(b);
    long d,p=-1;

    for(int i=0;i<n;i++)
    {

        unsigned long int s=bD(b);
        if(s>max)
        {
            max=s;
            d=i;
        }
        else if(max==s)
        {
            p=i-d;
            break;
        }
        b.push_back(b[0]);
        b.erase(0,1);

    }
    unsigned long int f=0;
    if(p==-1)
        f=(d+(k-1)*n);
    else
        f=(d+(k-1)*p);
    cout<<f;

}
