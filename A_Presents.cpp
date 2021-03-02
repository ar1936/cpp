#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        int p;
        cin>>p;
        v[p]=i;
    }
    cout<<v[1]<<" ";
    for(int i=2;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
