#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>c;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
    }
    for(int i=0;i<s.size();i++)
    {
        c.insert(s[i]);
    }
    if(c.size()==26)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;

}