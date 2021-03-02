#include <bits/stdc++.h>
using namespace std;
struct MAP{
    int key;
    int data;
};

int main()
{
    int n;
    cin>>n;
    struct MAP m [n];
    for(int i=0;i<n;i++)
    {
        m[i].key=i;
        m[i].data=n-i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<m[i].key<<" "<<m[i].data<<endl;
    }
    return 0;
}