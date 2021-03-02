#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
#define pb push_back
#define ppb pop_back
#define mpll map<ll, ll>
#define vll vector<ll>
#define str string
#define si size()

#define be begin()
#define en end()
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

    ll n,k;
    cin>>n>>k;
    vll v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll ans=0,j=0;
    for(ll i=0;i<v.si-k+1;i++)
    {
        for(ll j=i;j<=k-1+i;j++)
        {
            if(v[j]<0)
            {
                ans=v[i];
                break;
            }
            
        } 
        if(j==k-1+i)
            cout<<0<<" ";
            else 
            cout<<ans<<" ";      
    }
    // cout<<v.si;



    //solve()
    return 0;
}