#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
#define pb push_back
#define si size
#define ppb pop_back
#define mpll map<ll, ll>
#define pll pair<ll, ll>
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
// point (x', y') is (x, y)'s right neighbor, if x' > x and y' = y
// point (x', y') is (x, y)'s left neighbor, if x' < x and y' = y
// point (x', y') is (x, y)'s lower neighbor, if x' = x and y' < y
// point (x', y') is (x, y)'s upper neighbor, if x' = x and y' > y

int main()
{
    fast();
    ll x,y,count(0),n;
    cin>>n;
    vll v1,v2;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cin>>y;
        v1.pb(x);
        v2.pb(y);

    }
    for(ll i=0;i<v1.si();i++)
    {
        for(ll j=i+1;j<v2.si();j++)
        {
            if((v1[i]>v1[j])&&(v2[i]==v2[j]))
                count++;
            else if ((v1[i]<v1[j])&&(v2[i]==v2[j]))
                count++;
            else if ((v1[i]==v1[j])&&(v2[i]<v2[j]))
                count++;
            else if ((v1[i]==v1[j])&&(v2[i]>v2[j]))
                count++;
        }
    }
    cout<<count;



    
    return 0;
}