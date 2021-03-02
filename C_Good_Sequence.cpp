#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n,x,count(0);
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
        
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        int m1(it->first),m2(it->second);
        if (m1>m2 )
        {
            count+=m2;
        }
        else if (m1<m2)
        {
            count+=abs(m1-m2);
        }

    }
    cout<<count;
    return 0;


}