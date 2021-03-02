#include  <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if((v[i]>k)&&(v[i]<=2*k))
            count=count+2;
        else if(v[i]<=k)
        count++;
    }
    cout<<count;
    return 0;

}