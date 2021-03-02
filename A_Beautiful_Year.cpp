#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(true)
    {
        x++;
        int a,b,c,d;
        a=x/1000;
        b=(x/100)%10;
        c=(x/10)%10;
        d=x%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        break;
    }
    cout<<x;
    return  0;
}