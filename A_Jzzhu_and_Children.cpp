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

    ll m,n,ans(0); 
    db x,max_e(INT_MIN);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
     
        cin>>x;
        if(ceil(x/m)>=max_e)
        {
            ans=i+1;
            max_e=ceil(x/m);
            

        }

    }
    
   
    //solve()
    cout<<ans;
    return 0;
}


   
