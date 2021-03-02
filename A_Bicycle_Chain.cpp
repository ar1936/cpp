#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
#define pb push_back
#define ppb pop_back
#define mpll map<ll, ll>
#define vll vector<ll>
#define si size()
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

    ll n,m,count(0);
    db x,y,max_e(0);
    cin>>n;
    vector <db>v1,v2;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v1.pb(x);

    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        v2.pb(x);
    }
    for(int i=0;i<v1.si;i++){
        for(int j=0;j<v2.si;j++)
        {
            x=v2[j]/v1[i];
            if((floor(x)-x)==0)
            {

                max_e=max(max_e,x);
                //cout<<max_e<<" "<<x<<endl;
            }

        }
    }

    for(int i=0;i<v1.si;i++){
        for(int j=0;j<v2.si;j++)
        {
            if(max_e==(v2[j]/v1[i]))
                count++;
            

        }
    }
    cout<<count;
    
    //solve()
    return 0;
}