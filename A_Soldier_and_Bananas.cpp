#include <bits/stdc++.h>
using namespace std;
int solve(int k,int n,int w)
{
    int t_p=0;
    for(int i=1;i<=w;i++)
    {
        t_p+=i*k;
    }
    if((n-t_p)>0)
    return 0;
    return (t_p-n);
}
int main()
{
    int k, n , w;
    cin>>k>>n>>w;
    cout<<solve (k,n,w);
    
}