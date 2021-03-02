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

    ll p,q,l,r,ans=0;
    cin>>p>>q>>l>>r;
    vector<pair<int,int> >vp1,vp2;
    loop(i,p)
    {
        int x,y;
        cin>>x>>y;
        vp1.pb(make_pair(x,y));
    }
    loop(i,q)
    {
        int x,y;
        cin>>x>>y;
        vp2.pb(make_pair(x,y));
    }
    bool flag=false;
    for(ll i=l;i<=r;i++)
    {
        loop(j,p)
        {
            loop(k,q)
            {
                if((vp1[j].first>=vp2[k].first+i)&&(vp1[j].first<=vp2[k].second+i))
                flag=true;
                if((vp1[j].first<=(vp2[k].first+i))&&(vp1[j].second>=(vp2[k].first+i)))
                flag=true;
            }
        }
        if(flag)
        ans++;
    }
    cout<<ans;

    //solve()
    return 0;
}