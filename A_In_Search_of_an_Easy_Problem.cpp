#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    while(n--)
    {
        for(int i=0;i<v.size();i++)
        {
                if(v[i]==1)
                {
                s="HARD";
                break;
                }
                else 
                s="EASY";
        }

    }
    cout<<s;
    return 0;
}