#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    vector <double>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    double sum=0,ans=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
    }
    ans=sum/n;
     printf("%.12lf",ans);
     return 0;

}