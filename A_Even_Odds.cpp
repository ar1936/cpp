#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int n, k,ans(0);
    cin>>n>>k;
    if(n%2==0)    //even 
    {
        if(k>n/2) //even 
        {
            ans=2*abs((k-n/2));
        }
        else 
            ans=2*k-1;
    }
    else if (n%2!=0)
    {
        if(k>(n+1)/2)
        {
            ans=2*abs(k-(n+1)/2);
        }
        else 
            ans=2*k-1;
    }
    cout<<ans;
    return 0;

}