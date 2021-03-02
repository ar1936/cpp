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
int Longest_Common_Substring(string s1,string s2,int m , int n)
{
    int t[m+1][n+1];
    memset(t,0,sizeof(t));
    int ans=0;
    string s;
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(s1[i-1]==s2[j-1])
               {
                    t[i][j]=1+t[i-1][j-1];
                    ans=max(ans,t[i][j]);
               }
            else 
            t[i][j]=0;
            

        }
    }
   
    return ans;

}

int main()
{
    fast();
    string s1,s2;
    cin>>s1>>s2;
    cout<<Longest_Common_Substring(s1,s2,s1.si,s2.si);

    //solve()
    return 0;
}