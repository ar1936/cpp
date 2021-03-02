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

int main()
{
    fast();
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    ll max_ending_here=0;
    ll max_so_far=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        max_ending_here+=a[i];
        if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;
        if(max_ending_here<0)
            max_ending_here=0;
    }
    cout<< max_so_far;

    //solve()
    return 0;
}





// ll max_ending_here = int_max;
// ll max_so_far=0;
// for(ll i=0;i<n;i++)
// {
//     max_ending_here+=a[i];
//     if(max_so_far<max_ending_here)
//     max_so_far=max_ending_here;
//     if(max_so_far<0)
//     max_so_far=0;
// }
// reeturn max_so_far;



// ll meh=0;
// ll msf=0;
// for(ll i=0;i<n;i++)
// {
//     meh+=a[i];
//     if(msf<meh)
//     msf=meh;
//     if(msf<0)
//     msf=0
// }
// return msf;






// ll meh=0;
// ll msf=INT_MAX;
// for(ll i=0;i<n;i++)
// {
//     meh+=a[i];
//     if(meh>msf)
//     msf=meh;
//     if(meh<0)
//     meh=0;
// }
// return mso;



// Initialize:
//     max_so_far = 0
//     max_ending_here = 0

// Loop for each element of the array
//   (a) max_ending_here = max_ending_here + a[i]
//   (b) if(max_so_far < max_ending_here)
//             max_so_far = max_ending_here
//   (c) if(max_ending_here < 0)
//             max_ending_here = 0
// return max_so_far


