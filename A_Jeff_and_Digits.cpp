#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,count1(0),count2(0),m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==5)
        count1++;
        else
        count2++;
  
    }
    // if(count1<9&&count2!=0)
    // cout<<0;
    // else if (count1>=9&&count2!=0)
    // {
    //     m=count1-count1%9;
    //     for(int i=0;i<m;i++)
    //         cout<<5;
    //     for(int i=0;i<count2;i++)
    //         cout<<0;

    // }
    // else if (count1>=9&&count2==0)
    // {
    //      m=count1-count1%9;
    //     for(int i=0;i<m;i++)
    //     cout<<5;

    // }
    // else 
    // cout<<-1;
    // return 0;

    if(count1>=9)
    {
        if(count2==0)
        {
            cout<<-1;
        }
        else 
        {
            m=count1-count1%9;
            for(int i=0;i<m;i++)
            cout<<5;
            for(int i=0;i<count2;i++)
            cout<<0;
        }
    }
    else 
    {
         if(count2==0)
        {
            cout<<-1;
        }
        else 
        {
            
            //for(int i=0;i<count2;i++)
            cout<<0;
        }

    }

}