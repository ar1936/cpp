#include <bits/stdc++.h>
using namespace std;
int main()
{   int sum=0,max_s=0,n,x;
    cin>>n;
     vector <int>v;
     for (int i=0;i<n;i++)
     {
            cin>>x;
            v.push_back(x);
     }
     for(int i=0;i<v.size();i++)
     {
         sum=sum+v[i];
         max_s=max(sum,max_s);
        //  if(sum<0)
        //  sum=0;
     }
     cout<<max_s;

    return 0;
}