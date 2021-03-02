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
int solve(string s,int k)
{
    string s1;
    for(int i=0;i<k;i++)
        s1+=s;;
    // cout<<s1<<" ";
    int sum=0;
    for(int i=0;i<s1.si;i++)
    {
        sum+=s1[i]-'0';
    }

    int ans=0;
    while(sum>=1)
    {
        ans+=sum%10;
        sum=sum/10;
        // if(ans>=1&&ans<=9)
        // break;
    }


    
    return ans;
}

int main()
{
    fast();
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<solve(s,k);


    //solve()
    return 0;
}