#include <bits/stdc++.h>
using namespace std;
long long solve (long long n)
{
    
    
    if(n%2==0)
    return n/2;
    else if (n%2!=0)
    return -(n+1)/2;
    return 0;
}
int main()
{
    long long n ,x,sum =0;
    cin>>n;
    cout<<solve(n);
    return 0;

}