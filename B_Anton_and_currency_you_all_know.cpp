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
    char m;
    ll ans=0,j=-1;
    for(ll i=0;i<s.si;i++)
    {
        if((s[i]-'b')%2==0)
        {
            if(s[i]>s[s.si-1])
            {
                m=s[i];
                j=i;
            }
            else if(s[i]<s[s.si-1])
            {
               swap(s[i],s[s.si-1]);
               break;
            }
            
        }
        else if(i==s.si-1)
            {
                if(j==-1)
                ans=-1;
                else {
                s[j]=s[s.si-1];
                s[s.si-1]=m;
                }

                
            }
       
    }
        if(ans==0)
        cout<<s;
        else 
        cout<<ans;

    //solve()
    return 0;
}

// if last character is less than that even number then just replace now 
// if there is not any even number then print -1;
// if last number is greater than that even number then just replace those number who is nearest to taht numbers
