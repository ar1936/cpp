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

    ll n , m ,x, k,ans(0),count(0);
    cin>>n>>m>>k;
    bitset<32>arr[m+10];
    for(ll i=0;i<m+1;i++)
    {
      ll x;
      cin>>x;
      arr[i]=x;
    }
    for(int i=0;i<m;i++)
    {
      count=0;
      for(ll j=0;j<32;j++)
      {
        if(arr[m][j]!=arr[i][j])
        {
          count++;
        }

        
      }
      if(count<=k)
          ans++;
      
    }
    

    
      cout<<ans;

    //solve()
    return 0;
}