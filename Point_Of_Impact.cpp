#include <bits/stdc++.h>
using namespace std;
pair<int,int> solve(int n, int k , int x, int y)
{
    int  a =x, b=y;
    if(k==0)
    return make_pair(a,b);
    if(a==b)
    return make_pair(n, n);
    if(k==1)
    {
        if(a>b)
        {
            x=a;
            y=x+n-y;

        }
        else if(b>a)
        {
            x=n+x-y;
            y=n;

        }
        // return make_pair(x,y);
    }
    //if(k==2)
    return make_pair(x,y);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, x, y;
        cin>>n>>k>>x>>y;
        pair<int,int>p = solve(n,k,x,y);
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}