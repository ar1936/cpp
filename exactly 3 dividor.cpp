#include <bits/stdc++.h>
using namespace std;

int solve (int n)
{
   int  count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%j==0)
            count++;
        }
        
    }
    if(count==3)
    return 1;
    else 
    return 0;
}
int exactly3Divisors(int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(solve(n)==1)
        count++;
        
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    exactly3Divisors(n);
    
}