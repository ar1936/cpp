#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n>=1&&n<=5)
    return 1;
    int m;
    for(int i=1;i<INT_MAX;i++)
    {
        n=n-5;
        
        if(n<5&&n%5!=0)
        {
            m=i+1;
            break;
        }

        else if (n<5&&n%5==0)
        {
            m=i;
            break;
        }

    }
    return m;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<solve (n);
    
}