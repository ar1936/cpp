#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    for(int i=0;i<s.size();i++)
    {
        n=n*10+s[i];
    }
    cout<<n;
    
}