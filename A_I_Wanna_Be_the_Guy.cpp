#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,n;
    cin>>n;
    set<int>s;
    cin>>p;
    int x;
    for(int i=0;i<p;i++)
    {
        cin>>x;
        s.insert(x);

    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size()==n)
    cout<<"I become the guy.";
    else if (s.size()!=n)
    cout<<"Oh, my keyboard!";
    return 0;
}