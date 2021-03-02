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
    
    // first i need to find "h" in string after that we need to find "e" if then position of "e" will be right to "h" then we find "ll" and so on if we find not just right to that letter then we just break the loop and upate m =0;
    str s,c="hello";
    ll j=0,count(0);
    cin>>s;
    for(int i=0;i<s.si;i++)
    {
        if(s[i]==c[j])
        {
            count++;
            j++;
        }
        else if (count==5)
        break;
    }
    if(count==5)
    cout<<"YES";
    else
    cout<<"NO";
}