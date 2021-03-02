#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a;
    cin>>m>>n>>a;
    if(a==1)
    cout<<m*n/a;
    else if (m*n<a*a)
    cout<<1;
    else if((m%a==0)&&(n%a==0))
        cout<<(m/a)*(n/a);
    else if ((m%a!=0)&&(n%a==0))
        cout<<(m/a+1)*(n/a);
    else if ((m%a!=0)&&(n%a!=0))
    cout<<(m/a+1)*(n/a+1);
     else if ((m%a==0)&&(n%a!=0))
        cout<<(m/a)*(n/a+1);
    return 0;

}