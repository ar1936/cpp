#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p<q-1)
        count++;
    }
    cout<<count;
    return 0;
}