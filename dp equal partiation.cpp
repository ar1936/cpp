 #include <bits/stdc++.h>
 using namespace std;
 int equalPartition(int n, int v[])
    {
        int ans=0,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        if(sum%2!=0)
        return 0;
        else
        ans=sum/2;
        
        int t[n+1][ans+1];

        for(int j=0;j<ans+1;j++)
        {
            t[0][j]=0;
        }


        for(int i=0;i<n+1;i++)
        {
            t[i][0]=1;
        }
       
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<ans+1;j++)
            {
                if(j<v[i-1])
                t[i][j]=t[i-1][j];
                else if(j>=v[i-1])
                t[i][j]=t[i-1][j]||t[i-1][j-v[i-1]];
            }
        }
        return t[n][ans];
    }


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<(equalPartition(n,arr)==1?"YES":"NO");
}