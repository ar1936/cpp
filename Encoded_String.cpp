#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcdefghijklmnop";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        for(int i=0;i<n;i+=4)
        {
            if(s1[i]=='0'&&s1[i+1]=='0'&&s1[i+2]=='0'&&s1[i+3]=='0')
                cout<<s[0];
            else if(s1[i]=='0'&&s1[i+1]=='0'&&s1[i+2]=='0'&&s1[i+3]=='1')
                cout<<s[1];
            else if(s1[i]=='0'&&s1[i+1]=='0'&&s1[i+2]=='1'&&s1[i+3]=='0')
                cout<<s[2];
            else if(s1[i]=='0'&&s1[i+1]=='0'&&s1[i+2]=='1'&&s1[i+3]=='1')
                cout<<s[3];
            else if(s1[i]=='0'&&s1[i+1]=='1'&&s1[i+2]=='0'&&s1[i+3]=='0')
                cout<<s[4];
            else if(s1[i]=='0'&&s1[i+1]=='1'&&s1[i+2]=='0'&&s1[i+3]=='1')
                cout<<s[5];
            else if(s1[i]=='0'&&s1[i+1]=='1'&&s1[i+2]=='1'&&s1[i+3]=='0')
                cout<<s[6];
            else if(s1[i]=='0'&&s1[i+1]=='1'&&s1[i+2]=='1'&&s1[i+3]=='1')
                cout<<s[7];
            else if(s1[i]=='1'&&s1[i+1]=='0'&&s1[i+2]=='0'&&s1[i+3]=='0')
                cout<<s[8];
            else if(s1[i]=='1'&&s1[i+1]=='0'&&s1[i+2]=='0'&&s1[i+3]=='1')
                cout<<s[9];
            else if(s1[i]=='1'&&s1[i+1]=='0'&&s1[i+2]=='1'&&s1[i+3]=='0')
                cout<<s[10];
            else if(s1[i]=='1'&&s1[i+1]=='0'&&s1[i+2]=='1'&&s1[i+3]=='1')
                cout<<s[11];
            else if(s1[i]=='1'&&s1[i+1]=='1'&&s1[i+2]=='0'&&s1[i+3]=='0')
                cout<<s[12];
            else if(s1[i]=='1'&&s1[i+1]=='1'&&s1[i+2]=='0'&&s1[i+3]=='1')
                cout<<s[13];
            else if(s1[i]=='1'&&s1[i+1]=='1'&&s1[i+2]=='1'&&s1[i+3]=='0')
                cout<<s[14];
            else if(s1[i]=='1'&&s1[i+1]=='1'&&s1[i+2]=='1'&&s1[i+3]=='1')
                cout<<s[15];
            
        }
        cout<<endl;

    }
    return 0;
}