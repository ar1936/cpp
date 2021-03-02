#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum(0),sum1(0),sum2(0),n1(0),n2(0);
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    // while(sum1<sum)
    // {
    //     int x=v.size()-1;
    //     sum1+=v[x];
    //     sum-=v[x];
    //     n1++;
    //     n2++;
    //     x--;
    // }
    for(int i=v.size()-1;i>=0;i--)
    {
        sum1+=v[i];
        sum-=v[i];
        n1++; 
        if(sum1>sum)
        break;
        

    }
    cout<<n1;
    return 0;
}