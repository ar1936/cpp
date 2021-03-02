#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,left(0),right(0),l,r;
    cin>>n;
    for(int i(0);i<n;i++)
    {
        cin>>l>>r;
        left+=l;
        right+=r;
    }
    cout<<min(left,n-left)+min(right,n-right);
    return 0;
}