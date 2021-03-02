#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int count=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        count++;
    }
    if(count%2!=0)
    cout<<"IGNORE HIM!";
    else 
    cout<<"CHAT WITH HER!";
    return 0;
}
