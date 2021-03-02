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





// void reverse_str(string &s,ll start,ll end)
// {
//     if(start>=end)
//     return;
//     char temp=s[start];
//     s[start]=s[end];
//     s[end]=temp;
//     reverse_str(s,start+1,end-1);
  
// }


void reverse_array(int arr[],int start,int end)
{
    if(start>=end)
    return ;
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse_array(arr,start+1,end-1);
}



int main()
{
    fast();
    ll n;
    cin>>n;
    ll start=0,end=n-1;

    // str s;
    // cin>>s;
    // reverse_str(s,start,end);
    // cout<<s;

    int arr[n];
    for(ll i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    reverse_array(arr,start,end);
    for(ll i=0;i<n;i++)
    cout<<arr[i]<<" ";

    //solve()
    return 0;
}

