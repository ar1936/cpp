#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,first(0),second(1),ans;
    cin>>n;
    set<int>v;
    for(int i=1;i<n;i++)
    {
        if(i<=1)
        {
            v.insert(i);
        }
        else 
        {

            ans=first+second;
            first=second;
            second=ans;
            v.insert(ans);
        }
        

    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        if(n%*it==0)
        {
            cout<<*it<<" "<<*it<<" "<<*it;
        }
        else if((n-*it-5)==0)
        {
            cout<<2<<" "<<3<<" "<<n-*it-5;
        }
    }
   
    
}



