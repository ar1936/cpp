#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=65&&s[i]!=69&&s[i]!=73&&s[i]!=79&&s[i]!=85&&s[i]!=97&&s[i]!=101&&s[i]!=105&&s[i]!=111&&s[i]!=117&&s[i]!=89&&s[i]!=121)
        {
            s1.push_back('.');
            s1.push_back(s[i]);
        }
    }
    for( int i=0;i<s1.size();i++)
    {
        if((s1[i]>=65)&&(s1[i]<=90))
        s1[i]=(s1[i]+32);
    }
    cout<<s1;

}