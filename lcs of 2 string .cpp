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

int lcs_recursion(string &x,string &y,int m , int n )
{
    if(m==0||n==0)
    return 0;
    int left=0,right=0;
    if(x[m-1]==y[n-1])
        left=1+lcs_recursion(x,y,m-1,n-1);
    else
        right=max(lcs_recursion(x,y,m-1,n),lcs_recursion(x,y,m,n-1));

        return max(left,right);

}



int lcs_memoization(string &x,string &y,int m , int n )
{
    int t[m+1][n+1];
    memset(t,0,sizeof(t));
    
    
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(x[i-1]==y[j-1])
                t[i][j]=1+lcs_memoization(x,y,i-1,j-1);
            else
                t[i][j]=max(lcs_memoization(x,y,i-1,j),lcs_memoization(x,y,i,j-1));
        }
    }
    

        return t[m][n];

}

int lcs_tabulation(string &x,string &y,int m , int n )
{
    

    int t[m+1][n+1];
    memset(t,0,sizeof(t));


    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(x[i-1]==y[j-1])
                t[i][j]=t[i-1][j-1]+1;
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    

        return t[m][n];

}




int main()
{
    fast();

    string x,y;
    cin>>x>>y;
    cout<<lcs_recursion(x,y,x.si,y.si);
    cout<<lcs_memoization(x,y,x.si,y.si);
    cout<<lcs_tabulation(x,y,x.si,y.si);

    //solve()
    return 0;
}