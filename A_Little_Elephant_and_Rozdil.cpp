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
    ll n, min_time(1000000001),min_index(0),time,count(1);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>time;
        if(time<min_time)
        {
            min_time=time;
            min_index=i;
            count=1;
        }
        else if(min_time==time)
        count++;
    }
    if(count==1)
        cout<<min_index;
    else
    {
        cout<<"Still Rozdil";
    }
    
    return 0;
}