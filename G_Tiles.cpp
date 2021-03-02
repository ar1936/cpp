#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    { 
        
        if(s[i]=='h')
        {
                if(s[i+1]=='e')
                {
                        if(s[i+1]=='l')
                        {
                                    if(s[i+1]=='o')
                                    {
                                        m=1;
                                    }
                                
                            
                        }
                    
                }
            
        }
    }
    if(m==1)
    cout<<"YES";
    else if (m==0)
    cout<<"NO";
    return 0;
}