#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, key , count=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    key=v[k-1];
    for(int i=0;i<v.size();i++)
    {
        if((key<=v[i])&&(v[i]>0))
        count++;
    }
    cout<<count<<endl;
    return 0;
}