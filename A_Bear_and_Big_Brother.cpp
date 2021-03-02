#include <bits/stdc++.h>
using namespace std;
int solve(int a, int b )
{
    int m=0;
    for(int i=1;i<1000000;i++)
    {
        a=a*3;
        b=b*2;
        if(b<a)
        {
            m=i;
            break;
        }
    }
    return m;
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<solve (a,b);
    
}