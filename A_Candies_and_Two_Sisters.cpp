#include <bits/stdc++.h>
using namespace std;\
int solve (int n)
{
    if(n==1||n==2)
    return 0;
    else if(n%2==0)
    return (n/2)-1;
    else if (n%2!=0)
    return (n-1)/2;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}