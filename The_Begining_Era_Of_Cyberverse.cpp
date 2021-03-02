#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,m;
    vector <int>v;
    while(cin>>x)
    v.push_back(x);
    for(int i=v.size()-1;i>0;i--)
    {
        for(int j=v.size()-1;j>0;j--)
        {   
            m=0;
            if(v[i]>v[j])
            {
               m=-1;
               break;
            }
            else if(v[i]<v[j])
            {
                 m=min(m,v[j]);
                 break;
            }
            m=-1;
            
        }
        cout<<m<<" ";
    }
    // for(int i=0;i<v.size();i++)
    // cout<<v[i]<<" ";
    return 0;
}