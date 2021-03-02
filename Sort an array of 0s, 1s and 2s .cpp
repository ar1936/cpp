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
#define sll set<ll>
#define loop(i,n) for(int i = 0; i < n; ++i)
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
    ll count0(0),count1(0),count2(0);
    loop(i,n){
        ll x;
        cin>>x;
        if(x==0)
        count0++;
        else if (x==1)
        count1++;
        else if (x==2)
        count2++;
    }
    while(count0--)
    cout<<0<<" ";
    while(count1--)
    cout<<1<<" ";
    while(count2--)
    cout<<2<<" ";


    //solve()
    return 0;
}