#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    int c=0;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            c++;
    if(c>0)
        return false;
    else
        return true;
}
int main()
{
   set<int>pl;
   auto n=45;

   for(int i=2;i<=n;i++)
    if(prime(i))
        pl.insert(i);
   auto sum=0;
   for(auto i=pl.begin();i!=pl.end();++i)
    {
        sum+=*i;
        if(prime(sum) && sum<= n)
           cout<<sum<<" ";
    }
}

   /*
   for(auto i=pl.begin();i!=pl.end();++i)
   {
       auto sum=0;
       for(auto j=pl.begin();j!=i;++j)
       {
           sum+=*j;
           if(prime(sum) && sum <= *i)
            tt.insert(sum);
       }
    }
    tt.erase(2);
    cout<<tt.size()<<"\n";
    for(auto i=tt.begin();i!=tt.end();++i)cout<<*i<<" ";
    */




