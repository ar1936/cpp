#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int min_index=0,max_index=0,max_val=0,min_val=10000;
    int x;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        if(x>max_val)
        {
            max_val=x;
            max_index=i;
        }
        else if(x<=min_val)
        {
            min_index=i;
            min_val=x;
        }
    }
        if(max_index>min_index)
        cout<<max_index+n-min_index-2;
        else 
        cout<<(max_index-1)+(n-min_index);

    return 0;
}