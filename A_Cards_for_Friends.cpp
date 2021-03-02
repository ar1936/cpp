#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n,x;
        cin>>w>>h>>n;
        if(w%2==0)
            x=((w/2)*h)+1;
        else if (h%2==0)
            x=((h/2)*w);
    if(n==1)
    cout<<"YES"<<endl;
    else if (x>=n-1)
    cout<<"YES"<<endl;
    else if(x<n-1) 
    cout<<"NO"<<endl;
        
    }
    
    return 0;
}