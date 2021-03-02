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


bool subset_sum_recursion(int v[],int sum , int size)
{
    if(sum==0)
    return true;
    if(size==0)
    return false;
    bool left=false ,right=false ;
    if(v[size-1]>sum)
    return subset_sum_recursion(v,sum,size-1);
    
    return subset_sum_recursion(v,sum-v[size-1],size-1)||subset_sum_recursion(v,sum,size-1);
    
}


bool memoization_subset_sum(int v[],int sum , int size)
{
    bool t[size+1][sum+1];
    memset(t,false,sizeof(t));
    if(t[size][sum]!=false)
    return t[size][sum];

     if(sum==0)
    return true;
    if(size==0)
    return false;
   

    if(v[size-1]>sum)
    t[size][sum]= memoization_subset_sum(v,sum,size-1);

    else
    t[size][sum]=memoization_subset_sum(v,sum-v[size-1],size-1)||memoization_subset_sum(v,sum,size-1);

    return t[size][sum];
}



bool tabulation_subset_sum(int v[],int sum,int size)
{
    bool t[size+1][sum+1];
    memset(t,false,sizeof(t));

  
    
      for(int j=1;j<sum+1;j++)
    {
        t[0][j]=false;
    }

    for(int i=0;i<size+1;i++)
    {
        t[i][0]=true;
    }


    if(t[size][sum]!=false)
    return t[size][sum];
    

    for(int i=1;i<size+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(j<v[i-1])
            {
                t[i][j]=t[i-1][j];
            }
            else if (j>=v[i-1])
            {
                t[i][j]=t[i-1][j-v[i-1]]||t[i-1][j];
            }
        }

    }
    return t[size][sum];
}


int main()
{
    fast();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;




    cout<<(subset_sum_recursion(arr,sum,n)?"true":"false");




    cout<<(memoization_subset_sum(arr,sum,n)?"true":"false");


     cout<<(tabulation_subset_sum(arr,sum,n)?"true":"false");





    // solve()
    return 0;
}