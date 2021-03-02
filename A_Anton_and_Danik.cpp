#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0,count2=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            count1++;
    }
    count2=s.size()-count1;
    if(count1==count2)
    cout<<"Friendship";
    if(count1>count2)
    cout<<"Anton";
    else if  (count1<count2)
    cout<<"Danik";
   
    return 0;
}