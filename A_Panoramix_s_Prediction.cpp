#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int m,n,x,y;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        if(v[i]==m)
        x=i;
        if(v[i]==n)
        y=i;

    }
    if(abs(x-y)==1)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}