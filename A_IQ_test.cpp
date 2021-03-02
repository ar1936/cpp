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

    ll n,m=0,c_e=0,c_o=0;
    cin>>n;
    vll v;
    for(ll i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%2==0)
        c_e++;
        else 
        c_o++;
        v.pb(x);
    }
    for(ll i=0;i<v.si;i++)
    {
        if(c_o>c_e)
        {
            if(v[i]%2==0)
            m=v[i];
        }
        else 
        {
            if(v[i]%2!=0)
            m=v[i];
        }
        

    }
    cout<<m;

    //solve()
    return 0;
}