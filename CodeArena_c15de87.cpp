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
	ll n; 
	vc v;
	str s;
	cin>>n;
	
	
		char x;
        cin>>x;
		v.pb(x);
        cin>>x;
        v.pb(x);
	
	cin>>s;
	ll count=0;
	
	for(ll i=0;i<v.si;i++)
	{
		
		for(ll j=0;j<s.si;j++)
		{
			if((s[j]!=v[i]))
			{
                cout<<s[j];
                   
			}
            else if(s[j]==v[i])
            {
                cout<<v[1-i];
                break;
            }
           // cout<<s[j]<<" "<<v[i]<<endl;
			
			

		}
	}


    //solve()
    return 0;
}