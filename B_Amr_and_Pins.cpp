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
    db r,x,y,x1,y1,ans=0;
    cin>>r>>x>>y>>x1>>y1;
    db distance=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
    ans=distance/(2*r);
    if((ans-floor(ans))==0)
    cout<<ans;
    else 
    cout<<floor(ans)+1;



    //solve()
    return 0;
}