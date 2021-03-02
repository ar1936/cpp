#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y , z, n , k,l,c,d,p,nl,np,ans=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=k*l/nl;
    y=c*d;
    z=p/np;
    vector<int>v {x,y,z};
    sort(v.begin(),v.end());
    cout<<v[0]/n;
    return 0;
    

}