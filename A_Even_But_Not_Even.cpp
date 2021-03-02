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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        str s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.si;i++)
        {
            sum+=s[i]-'0';
        }
        if(sum%2==0&&(s[n-1]-'0')%2!=0)
        cout<<s<<" ";
        else if(sum%2==0)
        {
            for(int i=s.si-1;i>=0;i--)
            {
                if((s[i]-'0')%2==0)
                {
                    s.pop_back();
                    cout<<s;
                    break;
                }
            }
        }
        else if(sum%2!=0)
        {
            while((s[s.si-1]-'0')%2!=0||(s[s.si-1]-'0')==0)
            s.pop_back();
            cout<<s<<" ";
        }

        
    }


    //solve()
    return 0;
}