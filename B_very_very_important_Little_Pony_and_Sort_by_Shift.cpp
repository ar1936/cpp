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
    ll n;
    cin>>n;
    vll v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    if(n==2)
    {
        if(v[0]>v[1])
        cout<<1<<endl;
        else 
        cout<<0<<endl;
        return 0;
    }
    bool ans=true,flag=true;
    int pos=0;
    for(ll i=0;i<n-1;i++)
    {
        if(flag){
            if(v[i+1]<v[i])
            {
                flag=false;
                pos=i;
            }
        }
        else 
        {
            if(v[i]>v[i+1])
            {
                ans=false;
            }
        }
    }
    if(flag)
    {
        if(v[0]==v[n-1])
        {
            flag=false;
            pos=n-1;
        }
    }
    if(v[0]<v[n-1])
    ans=false;
    if(!flag&&ans)
    {
        int val=n-pos-1;
        cout<<val;
    }
    else 
    cout<<-1;
    return 0;
}