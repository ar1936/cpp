#include <bits/stdc++.h>
using namespace std;
int mian()
{
    int m=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H')
            m=1;
        else if(s[i]=='Q')
            m=1;
        else if((s[i]=='9'))
            m=1;
        else if((s[i]=='+'))
            m=1;

    }
    if(m==0)
        cout<<"NO";
    else if(m==1)
        cout<<"YES";
        return 0;

}