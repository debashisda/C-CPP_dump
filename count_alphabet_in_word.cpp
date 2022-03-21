///count the occurrence of a alphabet in a word
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="manhatten";
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();)
    {
        int k=i;
        while(s[i]==s[k])
            k++;
        cout<<s[i]<<"-"<<k-i<<" ";
        i+=(k-i);
    }
}
