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
    ll n,prev,ans=0,curr;
    cin>>n>>prev;
    ans+=prev+1;
    for(ll i=0;i<n-1;i++)
    {
        
        cin>>curr;
        ans+=abs(curr-prev)+1;

        prev=curr;
    }
    cout<<ans+n-1;


    //solve()
    return 0;
}