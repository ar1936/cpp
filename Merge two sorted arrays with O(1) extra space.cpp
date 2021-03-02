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
// void solve (int arr[],int brr[], int n,int m)
// {
//     int i=0,j=0;
//     while(i<n&&j<m)
//     {
//         if(arr[i]<=brr[j])
//         {
//             cout<<arr[i]<<" ";
//             i++;
//         }
//         else 
//         {
//             cout<<brr[j]<<" ";
//             j++;
//         }
//     }
//     while(i<n)
//     {
//         cout<<arr[i]<<" ";
//         i++;
//     }
//     while(j<m)
//     {
//         cout<<brr[j]<<" ";
//         j++;
//     }
// }

int main()
{
    fast();
    ll n,m;
    cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<m;i++)
    cin>>brr[i];
    solve(arr,brr,n,m);
    return 0;
    // vll v1,v2;
    // loop(i,n)
    // {
    //     ll x;
    //     cin>>x;
    //     v2.pb(x);
    //     v3.pb(x);
    // }
    // loop(j,m)
    // {
    //     ll x;
    //     cin>>x;
    //     v2.pb(x);
    //     v3.pb(x);
    // }

//    using extra space
  
  
  
    // sort(v3.be,v3.en);
    // loop(i,v1.si)
    // {
    //     v1[i]=v3[i];

    // }
    // loop(i,v2.si)
    // {
    //     v2[i]=v3[i+v1.si];
    // }

    // loop(i,v1.si)
    // cout<<v1[i]<<" ";
    // cout<<endl;
    // loop(i,v2.si)
    // cout<<v2[i]<<" ";
    //solve()

    //   int x=0,y=0;

    // for(int i=0;i<v2.si;i++)
    // {
      
    //     if(v1[x]<v2[y])
    //     {
    //         x++;
    //     }
    //     else if(v1[x]>v2[y])
    //     {
    //         swap(v1[x],v2[y]);
    //         x++;
    //         sort(v2.be,v2.en);
    //         y=0;
    //     }
    // }
     
    // loop(i,v1.si)
    // cout<<v1[i]<<" ";
    // cout<<endl;
    // loop(i,v2.si)
    // cout<<v2[i]<<" ";
    
    return 0;
}