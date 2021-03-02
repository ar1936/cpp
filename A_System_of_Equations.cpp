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
    ll m,n,a,b,i,count(0);
    cin>>n>>m;
    for(a=0;a*a<=n&&a<=m;a++)
    {
        b=n-a*a;
        if(m==(a+b*b))
            count++;
    }
    cout<<count;

    //solve()
    return 0;
}