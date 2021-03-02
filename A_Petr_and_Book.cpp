#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
#define rep(i,n) for (i = 0; i < n; ++i) 
#define rrep(i,n) for(i=n;i!=0;i--)
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i) 
#define pb push_back
#define ppb pop_back
#define mpll map<ll, ll>
#define vll vector<ll>
#define str string
#define vs vector<string>
#define vc vector<char>
#define sll set<ll>
#define pi 3.14159265358979323846264338327
#define nope string::npos
void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
    fast();
    ll sum=0,n,x,ans=0,sum1(0);
    cin>>n;
    vll v;
    for(int i=0;i<7;i++)
    {
        cin>>x;
        sum+=x;
        v.push_back(x);
        

    }
    for(int i=0;i<7;i++)
    {
        if(sum<n)
        {
            n=n%sum;
        }
        sum1+=v[i];
        if (n==0)
        {
            if(sum==sum1)
           {
             ans=i+1;
            break;
            }
        }
        else if((n<=sum1)&&(n!=0))
        {
            ans=i+1;
            break;
        }
        
        
    }
    cout<<ans;
    return 0;
}