#include <bits/stdc++.h>
using namespace std;
string solve(int n)
{
    int a,b,c, sum1=0,sum2=0,sum3=0;
    while(n--)
    {
        cin>>a>>b>>c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
      
        
    }
    if(sum1==0&&sum2==0&&sum3==0)
        return "YES";
    


    return "NO";

    
}
int main()
{
    int n;
    cin>>n;
    cout<<solve (n);
    
}