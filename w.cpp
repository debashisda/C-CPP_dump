#include<bits/stdc++.h>
using namespace std;

int countocc(string s,char c)
{
    int ss=s.size();
    if(s[ss-1]==s[0])
    {
        int coun=0;
        for(int i=0;i<ss;i++)
        {
            if(s[i]==c)
                coun++;
        }
        return coun;
    }
    return 0;
}

int equalornot(string s1,string s2)
{
    if(s1.size()==s2.size())
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
            return 1;
    }
    else
        return 0;
}
int main()
{
    string s1="nice";
    string s2="cine";
    cout<<equalornot(s1,s2);
}
