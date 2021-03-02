#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , m,sum1=0,sum2=0 ,count=0;
        cin>>n>>m;
        vector<int> v1,v2;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum1+=x;
            v1.push_back(x);
        
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            sum2+=x;
            v2.push_back(x);
        }
        
       while(sum1<sum2)
       {
           sort(v1.begin(),v1.end());
           sort(v2.begin(),v2.end());
           int i=0,j=m-1;
           sum1=sum1-v1[i]+v2[j];
           sum2=sum2-v2[j]+v1[i];
           int temp=v1[i];
           v1[i]=v2[j];
           v2[j]=temp;
           i++;
           j--;
           count++;
            if((i>n)||j<=1)
            break;
           
       }
       if(sum1>sum2)
       cout<<count<<endl;
       else 
       cout<<-1<<endl;
    
    }
       return 0;
       
}