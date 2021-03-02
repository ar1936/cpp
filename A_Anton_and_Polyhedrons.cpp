#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cin>>n;
    vector <string>v;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]=="Icosahedron")
        sum+=20;
        else if(v[i]=="Dodecahedron")
        sum+=12;
        else if (v[i]=="Tetrahedron")
        sum+=4;
        else if (v[i]=="Octahedron")
        sum+=8;
        else if (v[i]=="Cube")
        sum+=6;
    }
    cout<<sum;
    return 0;
    
}