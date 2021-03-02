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
    ll i;
    str s,s1,s2;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        
        if(s[i]=='0')
        break;
        s1.push_back(s[i]);

    }
    if(s1==s)
    s1.pop_back();

    cout<<s1;
   // s2.substr(i+1,s.size()-1);
   for(int j=i+1;j<s.size();j++)
   {
       cout<<s[j];
   }
    

  //  solve()
    return 0;
}