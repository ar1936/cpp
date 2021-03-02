#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int a, b , c;
        cin>>a>>b>>c;
        if(a==1)
            {
                if(b==1)
                count++;
                else if (b==0)
                {
                    if(c==1)
                    count++;
                }
            }
        else if (a==0)
            {
                if(b==1)
                    {
                        if(c==1)
                            count++;
                    }   
            }
        
    }
    cout<<count;
    
}