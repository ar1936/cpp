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
    ll n , l , r;
    cin>>n>>l>>r;
    vll v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    vll v1;
    for(ll i=0;i<n;i++)
    {
        ll sum=0;
        for(ll j=i;j!=-1;j--)
        {
            sum+=v[j];
            v1.pb(sum);
        }
    }
    sort(v1.begin(),v1.end());
       ll sum=0;
    for(ll i=0;i<v1.si;i++)
    {
     
        sum+=v1[i];
        v1[i]=sum;
      //cout<<v1[i]<<" ";
    }

cout<<v1[r-1]-v1[l-1];



    //solve()
    return 0;
}

// [1, 2, 3, 3, 4, 5, 6, 7, 9, 10]
// [1,3,6,9,13,18,24,31,40,50];