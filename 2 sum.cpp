#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int n,l,r,k;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>l;
        v.push_back(l);
    }
    cin>>k;
    l=0;
    r=n-1;
    while(l<r)
    {
        if((v[l]+v[r])==k)
        {
            cout<<1;
            break;
        }
        else if((v[l]+v[r])>k)
        r--;
        else if ((v[l]+v[r])<k)
        l++;
    }
    cout<<0;
    return 0;


}