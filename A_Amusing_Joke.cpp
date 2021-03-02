#include <bits/stdc++.h>
using namespace std;
string solve (string s1,string s3)
{
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s1.size()!=s3.size())
    return "NO";
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s3[i])
        return "NO";
    }
    return "YES";
}
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=0;i<s2.size();i++){
        s1.push_back(s2[i]);
    }
    cout<<solve (s1,s3);
    return 0;
}