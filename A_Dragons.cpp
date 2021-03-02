#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mpll map<ll, ll>
#define vll vector<ll>
#define vpp vector<pair<int,int>>
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
    ll s,n;
    cin>>s>>n;
    vpp v;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.pb(mp(x,y));

    }
    sort(v.be,v.en);
    str x="NO";
    ll count=0;
    for(ll i=0;i<v.si;i++)
    {
       
        if(s>v[i].first)
       {
            s+=v[i].second;
            count++;
            //cout<<count;
            if(count==v.si)
           {
               x="YES";
                break;
           }
       }
    }

    cout<<x;
    //solve()
    return 0;
}