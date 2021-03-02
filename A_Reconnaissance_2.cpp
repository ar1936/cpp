#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,min_e(INT_MAX),j(0),x,k(0);
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        min_e=min(min_e,x);
        v.push_back(x);
    }
    int min2=INT_MAX;
    for(int i=0;i<v.size();i++)
    {

        if((v[i]>min_e)&&(v[i]<min2))
        min2=v[i];

    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==min_e)
        j=i;
        if(v[i]==min2)
        k=i;
    }
    // if(min_e==min2)
    // {
    //     cout<<max(j,k)+1<<" "<<min(j,k)+1;

    // }
    // else  
    cout<<j+1<<" "<<k+1;
    return 0;
    
}