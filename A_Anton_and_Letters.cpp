#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count =0;
    string s;
    getline(cin,s);
    set<char>c;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==',')
        c.insert(s[i-1]);
    }
    c.insert(s[s.size()-2]);
    //cout<<s.size();
    for(auto i=c.begin();i!=c.end();i++)
    {
        if(*i>='a'&&*i<='z')
        count++;
    }
    cout<<count;

}