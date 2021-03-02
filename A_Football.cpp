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
    str s;
    vs v;
    ll n,count=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        v.pb(s);
    }
    map<string,int> mp;
    for(ll i=0;i<v.size();i++)
    {
        mp[v[i]]++;
        if(count<mp[v[i]])
          { 
              count=mp[v[i]];
          }
    }
            //auto x;
        for(ll i=0;i<v.size();i++)
        {
            if(mp[v[i]]==count)
            {
               cout<<v[i];
               break;
            }
        }
    
        


    //solve()
    return 0;
}