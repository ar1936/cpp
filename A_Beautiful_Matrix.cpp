#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    int m , n;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                m=i;
                n=j;
                break;
            }
        }
    }
    cout<<abs(2-m)+abs(2-n)<<endl;
    return 0;
}