// #include <bits/stdc++.h>
// #include <iomanip>
// using namespace std;
// typedef long long ll;
// typedef double db;
// typedef char ch;
// #define pb push_back
// #define ppb pop_back
// #define mpll map<ll, ll>
// #define mpch map<ch, ll>
// #define vll vector<ll>
// #define str string
// #define si size()
// typedef char ch;
// #define be begin()
// #define en end()
// #define vs vector<string>
// #define vc vector<char>
// #define ppi pair<int,pair<int,int>
// #define minh  priority_queue <int, vector<int>, greater<int> >
// #define min_pair  priority_queue <ppi, vector<ppi>, greater<ppi> >
// #define maxh  priority_queue <int>
// #define max_pair  priority_queue <ppi>
// #define sll set<ll>
// #define loop(i,n) for(int i = 0; i < n; ++i)
// #define pi 3.14159265358979323846264338327
// #define nope string::npos
// #define max2(a,b) ((a<b)?b:a)
// #define max3(a,b,c) max2(max2(a,b),c)
// #define min2(a,b) ((a>b)?b:a)
// #define min3(a,b,c) min2(min2(a,b),c)
// void fast(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// }
// // void insert_in_stack(stack<int>&s,int val)
// // {
// //     s.push(val);
// //     return ;
// // }
// void delete_middle_element(stack<int> &s,int k)
// {
//     if(k==1)
//     {
//         s.pop();
//         return ;
//     }
//     int val=s.top();
//     s.pop();
//     delete_middle_element(s,k-1);
//     s.push(val);
//     return ;
// }

// int main()
// {
//     fast();
//     ll n;
//     cin>>n;
//     stack<int> s;
//     int k=((n%2==0)?(n/2):((n+1)/2));
//     for(ll i=0;i<n;i++)
//     {
//         ll x;
//         cin>>x;
//         s.push(x);
//     }
//     delete_middle_element(s,k);
//     for(int i=0;i<n-1;i++)
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }

//     //solve()
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
void solve (stack<int> &s,int n,int k)
{
   
    if(k==1)
    {
        s.pop();
        return ;
    }
    int temp=s.top();
    s.pop();
    solve(s,n-1,k-1);
    s.push(temp);
}


int main()
{
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
   int k=((n%2==0)?(n/2):((n+1)/2));
    solve(s,n,k);
    for(int i=0;i<n-1;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;

}