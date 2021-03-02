#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a1,a2,a3,m;
    cin>>a1>>a2>>a3;
    m=a1*a2*a3;
    m=sqrt(m);
    cout<<4*(m/a1+m/a2+m/a3);
    return 0;
}