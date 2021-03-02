// this is wrong code on TC:-   3 3 3 
                             // 3 3 3
                             // 3 3 3
                             // 3 3 3


#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
typedef char ch;
#define pb push_back
#define ppb pop_back
#define mpll map<ll, ll>
#define mpch map<ch, ll>
#define vll vector<ll>
#define str string
#define si size()
typedef char ch;
#define be begin()
#define en end()
#define vs vector<string>
#define vc vector<char>
#define ppi pair<int,pair<int,int>
#define minh  priority_queue <int, vector<int>, greater<int> >
#define min_pair  priority_queue <ppi, vector<ppi>, greater<ppi> >
#define maxh  priority_queue <int>
#define max_pair  priority_queue <ppi>
#define sll set<ll>
#define loop(i,n) for(int i = 0; i < n; ++i)
#define pi 3.14159265358979323846264338327
#define nope string::npos
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
    fast();
    ll l,m,n;
    cin>>l>>m>>n;
    vll v1,v2,v3;
    loop(i,l)
    {
        ll x;
        cin>>x;
        v1.pb(x);
    }
    loop(i,m)
    {
        ll x;
        cin>>x;
        v2.pb(x);
    }
    loop(i,n)
    {
        ll x;
        cin>>x;
        v3.pb(x);
    }
    vll v;
    mpll mp;
    for(ll i=0;i<v1.si;i++)
    {
     
        mp[v1[i]]++;
        
        
    }
    for(ll i=0;i<v2.si;i++)
    {
       
        mp[v2[i]]++;
        
        
    }
    for(ll i=0;i<v3.si;i++)
    {
       
        mp[v3[i]]++;
        
        
    }
    for(int i=0;i<l;i++)
    {
        if(mp[v1[i]]>=3)
        v.pb(v1[i]);
    }
    for(auto x:v)
    cout<<x<<" ";



    //solve()
    return 0;
}