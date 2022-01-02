#include<bits/stdc++.h>
using namespace std;

int BasicDataType(string s)
{
    if(s.length()==1 and !isdigit(s[0]))
    {
        return sizeof(char);
    }
    else if(isdigit(s[0]) or s[0]=='.')
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='.')
            {
                if(s.length()-(i+1) >= 6)
                    return sizeof(double);
                else
                    return sizeof(float);
            }
        }
        return sizeof(int);
    }
}

int main()
{
    string s;


    //s="0061.38934";
    s=".142322168";
    //s="a";
    //s="12";
    cout<<s.length()<<endl;

}
