#include <bits/stdc++.h>
using namespace std;
int count_subset(int v[],int n,int sum)
{

    int t[n+1][sum+1];
    for(int j=0;j<sum+1;j++)
    {
        t[0][j]=0;
    }
    for(int i=0;i<n+1;i++)
    {
        t[i][0]=1;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(j<v[i-1])
            t[i][j]=t[i-1][j];
            else if (j>=v[i-1])
            t[i][j]=t[i-1][j]+t[i-1][j-v[i-1]];
        }
    }
    return t[n][sum];
}
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>sum;
    cout<<count_subset(arr,n,sum);

    return 0;
}