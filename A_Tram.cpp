#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,m=0,count=0;
    
    while(n--)
    {
       cin>>a>>b;
       m=m+b-a; 
       count=max(m,count);
    }
    cout<<count;

}
