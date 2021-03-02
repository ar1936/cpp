#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    cout<<"I hate ";
    else 
    cout<<"I hate that ";
    for(int i=2;i<=n;i++)
    {   
       // cout<<n<<"             ";
        if(i%2==0)
        cout<<"I love ";
        else if (i%2!=0)
        cout<<"I hate ";
        if(i<n)
        cout<<"that ";
    }
        cout<<"it ";
        return 0;
}