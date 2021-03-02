#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);


        }
       int count1=0 , count2=0,sum=0;
       for(int i=0;i<v.size();i++)
       {
           sum=sum+v[i];

           if(v[i]==1)
           count1++;
           if(v[i]==2)
           count2++;
        
       }
       if((count1%2==0)&&(sum%2==0))
       cout<<"YES"<<endl;
       else if ((count2%2!=0)&&(sum%2==0))
       cout<<"YES"<<endl;
       else 
       cout<<"NO"<<endl;

    }
    return 0;
}