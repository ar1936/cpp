#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count =0;
    cin>>n;
    while(n--)
    {   
        string s;
        cin>>s;
        if(s[0]=='+'||s[s.size()-1]=='+')
        count++;
        if (s[0]=='-'||s[s.size()-1]=='-')
        count--;
    }
    cout<<count;
    return 0;
}