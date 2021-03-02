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
    ll n,k;
    cin>>n>>k;
    vll v;
    ll max_value=-1,min_value=1000;
    loop(i,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
        max_value=max(max_value,v[i]);
        min_value=min(min_value,v[i]);
        
    }
    if(max_value-min_value-k<=0)
    {

        cout<<"YES"<<"\n";
        loop(i,n)
        {
            int count=1;
        for(ll j=0;j<v[i];j++){
        
        if(j<=min_value)
        cout<<"1"<<" ";
        else {
            count++;
        cout<<count<<" ";
        }
        }
        cout<<"\n";
        }

    }
    else 
        cout<<"NO"<<"\n";


    //solve()
    return 0;
}