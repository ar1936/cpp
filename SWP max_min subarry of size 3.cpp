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
vll preffix_sum(vll &v)
{
    int sum=0;
   
    for(ll i=0;i<v.si;i++)
    {
        sum+=v[i];
        v[i]=sum;
    }
    return v;
}
int main()
{
    fast();
    ll n,max_value=INT_MIN,min_value=INT_MAX,k;
    cin>>n;
    vll v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    preffix_sum(v);
    cin>>k;
    v[0]=0;
    for(ll i=k;i<v.si;i++)
    {
        // cout<<v[i]<<" ";
        max_value=max(max_value,v[i-1]-v[i-k]);
        min_value=min(min_value,v[i-1]-v[i-k]);
        
    }
    cout<<min_value<<" "<<max_value;

    //solve()
    return 0;
}