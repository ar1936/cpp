#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum(0), x(0),count(0),m;
    cin>>n;
    m=n+1;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
      
 
    }
    for(int i=0;i<5;i++)
    {
        if((sum+i)%m==0)
        count++;
    }
    cout<<5-count;
    return 0;
}