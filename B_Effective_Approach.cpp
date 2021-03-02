#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n(0),m(0),first(0),second(0),x ;
    map<int,int>mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]=i;
    }
    cin>>m;
    for(int j=0;j<m;j++)
    {
        cin>>x;
        first+=mp[x]+1;
        second+=n-mp[x];
    }
    cout<<first<<" "<<second;
    return 0;


}