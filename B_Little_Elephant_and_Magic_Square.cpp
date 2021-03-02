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
#define pi 3.14159265358979323846264338327
#define nope string::npos
void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
    fast();

    ll arr[3][3];
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    ll x=0,y=0,z=0;
    z=(2*arr[0][1]+arr[0][2]-arr[2][0])/2;
    //cout<<arr[0][1]<<" "<<arr[0][2]<<" "<<arr[2][0];
    y=(arr[0][2]+arr[2][0])/2;
    x=arr[2][0]+arr[2][1]-y;
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            if(i==0&&j==0)
            cout<<x<<" ";
            else if(i==1&&j==1)
            cout<<y<<" ";
            else if (i==2&&j==2)
            cout<<z<<" ";
            else 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //solve()
    return 0;
}