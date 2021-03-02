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
    ll n;
    cin>>n;
    ll arr[n+10];
    ll brr[n+10];
    
    for(int i=0;i<n;i++)
    {
       
        cin>>arr[i];
        brr[i]=2;
    }  
    if(n==1)
    cout<<"1";
    else{  
    ll ans=2;
    for(int i=2;i<n;i++)
    {
        if(arr[i]==arr[i-1]+arr[i-2])
        {
            brr[i]=brr[i-1]+1;
            ans=max(ans,brr[i]);
        }
    }
    cout<<ans;
    }
    

    //solve()
    return 0;
}