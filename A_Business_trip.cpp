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
    ll k;
    cin>>k;
    vll v;

    for(ll i=0;i<12;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    sort(v.be,v.en);
    ll ans=0,count(0);
    if(k==0)
    {
        cout<<0;
    }
    else 
 {   for(ll i=v.si-1;i>=0;i--)
    {
        k=k-v[i];
        count++;
        if(k<=0)
        break;
        
        
          
    }
    if(k<=0)
    cout<<count;
    else if (k>0)
    cout<<-1;
}
    //solve()
    return 0;
}