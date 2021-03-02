#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,sum=0,max=0;
        cin>>n>>x;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>y;
            v.push_back(y);

        }
        for(int i=0;i<n;i++)
        {
            sum=sum+v[i];
            if(v[i]%x!=0)
                max+=(v[i]/x)+1;
            else if (v[i]%x==0)
                max+=v[i]/x;


        }
        cout<<sum/x<<" "<<max<<endl;
    }
    return 0;
}