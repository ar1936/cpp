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
    str s;
    cin>>s;
    bool m=true;
    for(ll i=0;i<s.si;)
    {
      if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
        i+=3;//
      else if (s[i]=='1'&&s[i+1]=='4')
        i+=2; //case 1 if i=1,then after i+=2 become i=3; 
      else if (s[i]=='1')
        i++;
      else 
      {
        m=false;
        break;
      }
    }
    if(m==true)
      cout<<"YES";
    else 
      cout<<"NO";

    //solve()
    return 0;
}