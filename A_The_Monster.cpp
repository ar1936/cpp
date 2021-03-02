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
ll solve(ll a,ll b,ll c,ll d)
{
    ll ans1=0,ans2=0;
    for(ll i=0;i<=1000;i++)
    {
        ans1=b+i*a;
        for(ll j=0;j<=1000;j++)
        {
            ans2=d+j*c;
            if(ans1==ans2)
            return ans2;


        }

    }
    return -1;
    
}

int main()
{
    fast();
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    

    cout<<solve(a,b,c,d);

    return 0;
}