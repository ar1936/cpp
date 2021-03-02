#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0,count2=0;
    cin>>n;
    string s;
    cin>>n;
    for (int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            count1++;
    }
    count2=n-count1;
    if(count1==count2)
    cout<<"Friendship";
    if(count1>count2)
    cout<<"Anton";
    else 
    cout<<"Danik";
    return 0;
}