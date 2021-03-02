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
    ll t;
    cin>>t;
    while(t--)
    {

    ll n,count=1,m;
    cin>>n;
    ll i=n%10;
    for(int i=0;i<4;i++)
    {
        if(n>=1&&n<=9)
        break;
        n=n/10;
        count++;
        
    }
    if(count==1)
    cout<<10*(i-1)+1<<endl;
    
    else if(count==2)
    cout<<10*(i-1)+3<<endl;
    else if(count==3)
    cout<<10*(i-1)+6<<endl;
    else if(count==4)
    cout<<10*(i-1)+10<<endl;
    }

    //solve()
    return 0;
}