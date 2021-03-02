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
    ll m,n,curr,prev,ans;
    cin>>n>>m;
    cin>>prev;
    for(int i=0;i<m;i++)
    {
        cin>>curr;
        if(prev<=curr)
            ans=abs(prev-curr);
        else if (prev>curr)
        {
            ans=abs(n-prev+curr);
        }
        prev=curr;



    }
    cout<<ans;
    
    return 0;
}