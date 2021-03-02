#include <bits/stdc++.h>
using namespace std;
int solve(int n,int k)
{
    if(n==1||k==1)
    return 0;
    int m=pow(2,n-1)/2;
    if(m>=k)
    return solve(n-1,k);
    else
    return !solve(n-1,k-m);
    return 0;

    
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k);
    return 0;
}