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
    ll k;
    str s;
    cin>>k;
    cin>>s;
    map<char,int>m;
       ll d=0;
    set<char>st;
    for(ll i=0;i<s.si;i++)
    {
        st.insert(s[i]);
        m[s[i]]++;
        d=m[s[0]]/k;

    }
    ll x=0;
 
    for(ll i=0;i<s.si;i++)
    {

        if(m[s[i]]%k!=0)
            {
                x=-1;
                break;

            }
        else 
            {
                x=0;
            }  
        
    }
        if(x==0)
        {
                    
                    for(auto j=st.begin();j!=st.end();j++)
                    {
                         
                        cout<<*j;
                    }
                
        }
        else 
        cout<<x;
    //solve()
    return 0;
}