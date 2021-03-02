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
    ll n;
    cin>>n;
    mpll m;
    ll arr[n][2];
    loop(i,n)
    {
        cin>>arr[i][0]>>arr[i][1];
        m[arr[i][0]]++;
    }
    
    loop(i,n)
    {
      cout<<n-1+m[arr[i][1]]<<" "<<2*(n-1)-n+1-m[arr[i][1]];
      cout<<endl;
    }

    //solve()
    return 0;
}