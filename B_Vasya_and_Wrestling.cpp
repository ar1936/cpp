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
#define ppi pair<int,pair<int,int>
#define minh  priority_queue <int, vector<int>, greater<int> >
#define min_pair  priority_queue <ppi, vector<ppi>, greater<ppi> >
#define maxh  priority_queue <int>
#define max_pair  priority_queue <ppi>
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

    ll n,sum1=0,sum2=0;
    cin>>n;
    bool flag = true;
    vll v1,v2;
    loop(i,n)
    {
        ll x;
        cin>>x;
        if(x>0)
        {
            flag =true;
            v1.pb(x);
            sum1+=x;
        }
        else if(x<0) 
        {
            flag = false;
           x=abs(x);
            v2.pb(x);
            sum2+=x;
        }
    }
     ll count=min(v1.si,v2.si);
     //cout<<sum1<<" "<<sum2<<" ";
    str s="first";
    if(sum1>sum2)
    cout<<"first";
    else if(sum2>sum1)
    cout<<"second";
    else {
    loop(i,count)
    {
        if(v1>v2)
        {
            cout<<"first";
            return 0;
        }
        else if(v2>v1) 
        {
            cout<<"second";
            return  0;

        }
        else 
        {
            if(flag)
            {
                cout<<"first";
                return 0;
            }
            else 
            {
                cout<<"second";
                return 0;
            }
        }
      

    }
    }
    // if(s!="first")
    // cout<<s;
    // //solve()
    return 0;
}