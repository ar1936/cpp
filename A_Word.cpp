#include <bits/stdc++.h>
using namespace std;
string  solve(string s)
{
    int n=0,m=0;
 
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='a')&&(s[i]<='z'))
            n++;
        else if((s[i]>='A')&&(s[i])<='Z')
            m++;
    }
  
    if(m>n)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<='z'&&s[i]>='a')
                s[i]-=32;
        }
    }
    if(n>m)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<='Z'&&s[i]>='A')
                s[i]+=32;
        }
    }
    if(m==n)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<='Z'&&s[i]>='A')
                s[i]+=32;
        }
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    cout<<solve (s);
    
}