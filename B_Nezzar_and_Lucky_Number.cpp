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
int digit_sum(int n)
{
    if(n<=9&&n>=0)
    return n;
    int sum=0,m=n;
    for(int i=0;m   >9;i++)
    {
        sum+=m%10;
        m=m/10;

    }
    return sum;
}

int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        vll v;
        ll n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.pb(x);
           
        }
        for(ll i=0;i<v.si;i++)
        {
            int x=v[i];
            if(x%10==7)
            cout<<"YES";
            else if ()
        }

    }


    //solve()
    return 0;
}