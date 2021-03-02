#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
     int n; cin>>n; int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     int dp[n+1][n+1], l[n];
     memset(dp,0,sizeof(dp));
     
     for(int i=0;i<n;i++) l[i]=i+1;
     
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if(l[i-1]<=j) dp[i][j]=max(a[i-1]+dp[i][j-l[i-1]],dp[i-1][j]);
             
             else dp[i][j]=dp[i-1][j];
         }
     }
     cout<<dp[n][n]<<endl;
    }
	return 0;
}