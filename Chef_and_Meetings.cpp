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
str hours_clock(str s)
{
    if(s[6]=='P')
    {
        s[0]=static_cast<char>(s[1]+1);
        s[1]=static_cast<char>(s[1]+2);
        if(s[1]==':')
        {
            s[0]='2';
            s[1]='0';

        }
        else if (s[1]==';')
        {
            s[0]='2';
            s[1]='1';
        }
    }
    else if (s[15]=='P')
    {
        s[9]=static_cast<char>(s[9]+1);
        s[10]=static_cast<char>(s[10]+2);
        if(s[10]==':')
        {
            s[9]='2';
            s[10]='0';

        }
        else if (s[10]==';')
        {
            s[9]='2';
            s[10]='1';
        }
    }
    return s;
}

int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        str s;
        getline(cin,s);
        s=hours_clock(s);
        // while(n--)
        // {
        //     str s1;
        //     getline(cin,s1);
        //     s1=hours_clock(s1);

        // }
        cout<<s<<endl;
    }


    //solve()
    return 0;
}