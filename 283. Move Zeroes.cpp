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
void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
    fast();
    ll n;
    cin>>n;
    ll left=0,right=n-1;
    int arr[n];
    loop(i,n)
    cin>>arr[i];
    for(ll i=0;i<n;i++)
    {
        // if(arr[left]==0)
        // {

        // }
        if(arr[i]==0)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
               {
                    swap(arr[i],arr[j]);
                    break;
               }
            }
        }
    }
    loop(i,n)
    cout<<arr[i]<<" ";


    //solve()
    return 0;
}