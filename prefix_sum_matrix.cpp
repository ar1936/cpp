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
    vector<vector<int> > v;
    ll n,m,x,y,sum_row(0),sum_column(0);
    for(ll i=0;i<n;i++)
    {
         vector<int>vi;
        for(ll j=0;j<m;j++)
        {
            cin>>x;
           
            vi.pb(x);
        }
        v[i].push_back(vi);
    }


    //solve()
    //return 0;

for(ll i=0;i<v.si;i++)
{
    for(ll j=0;j<v[0].si;j++)
    cout<<v[i][j]<<" ";
    cout<<endl;
}

}


// void prefixSum2D(int a[][C]) 
// { 
//     int psa[R][C]; 
//     psa[0][0] = a[0][0]; 
  
//     // Filling first row and first column 
//     for (int i = 1; i < C; i++) 
//         psa[0][i] = psa[0][i - 1] + a[0][i]; 
//     for (int i = 0; i < R; i++) 
//         psa[i][0] = psa[i - 1][0] + a[i][0]; 
  
//     // updating the values in the cells 
//     // as per the general formula 
//     for (int i = 1; i < R; i++) { 
//         for (int j = 1; j < C; j++) 
  
//             // values in the cells of new 
//             // array are updated 
//             psa[i][j] = psa[i - 1][j] + psa[i][j - 1] 
//                         - psa[i - 1][j - 1] + a[i][j]; 
//     } 
  
//     // displaying the values of the new array 
//     for (int i = 0; i < R; i++) { 
//         for (int j = 0; j < C; j++) 
//             cout << psa[i][j] << " "; 
//         cout << "\n"; 
//     } 
// } 