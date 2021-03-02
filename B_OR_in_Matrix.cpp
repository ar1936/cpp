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
    ll m,n;
    cin>>m>>n;
    int a[m][n],b[m][n],c[m][n];
    ll x,y;
    loop(i,m)
    {
        loop(j,n)
        {
            cin>>a[i][j];
            b[i][j]=1;
            c[i][j]=0;
        }
    }
    loop(i,m)
    {
        loop(j,n)
        {
            if(a[i][j]==0)
            {
                x=i;
                y=j;
                loop(i,m)
                {
                    b[i][y]=0;
                   
                }
                loop(j,n)
                b[x][j]=0;
            }
        }
    }
    loop(i,m)
    {
        loop(j,n)
        {
            if(b[i][j]==true)
            {
                loop(k,n)
                c[i][k]=1;
                loop(k,m)
                c[k][j]=1;
            }
        }
    }
    loop(i,m)
    {
        loop(j,n)
        {
            if(a[i][j]!=c[i][j])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    loop(i,m)
    {
        loop(j,n)
        cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}


