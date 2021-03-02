#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    long long k;
    for(int i=1;i<n;i++)
    {   
        for(int j=i;(i*i+j*j)<=(n*n);j++)
        {
             k=i*i+j*j;
            if(int(sqrt(k))*int(sqrt(k)==k))
            count++;    
        }
        
    }
    cout<<count;
    return 0;
}