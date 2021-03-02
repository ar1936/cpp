#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    if(n<=9&&n>=0)
    return n;
    int sum=0,m=n;
    for(int i=0;m>0;i++)
    {
        sum+=m%10;
        m=m/10;

    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        cout<<digit_sum(x)<<" ";
    }
    return 0;
}