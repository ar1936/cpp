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
int Coin_change_Maximum_number_of_ways(int arr[],int size,int sum)
{
    int t[size+1][sum+1];
    memset(t,0,sizeof(t));
    for(int i=0;i<size+1;i++)
    {
        t[i][0]=1;
    }
    for(int i=1;i<size+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(j<arr[i-1])
            {
                t[i][j]=t[i-1][j];
            }
            else 
                t[i][j]=t[i-1][j]+t[i][j-arr[i-1]];
        }
    }
    return t[size][sum];
}
int main()
{
    fast();
    int sum,size;
    cin>>sum>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<Coin_change_Maximum_number_of_ways(arr,size,sum);


    //solve()
    return 0;
}