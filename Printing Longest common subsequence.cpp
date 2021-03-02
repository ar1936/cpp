#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
typedef char ch;
#define pb push_back
#define ppb pop_back
#define mpll map<ll, ll>
#define mpch map<ch, ll>
#define vll vector<ll>
#define str string
#define si size()
typedef char ch;
#define be begin()
#define en end()
#define vs vector<string>
#define vc vector<char>
#define ppi pair<int,pair<int,int>
#define minh  priority_queue <int, vector<int>, greater<int> >
#define min_pair  priority_queue <ppi, vector<ppi>, greater<ppi> >
#define maxh  priority_queue <int>
#define max_pair  priority_queue <ppi>
#define sll set<ll>
#define loop(i,n) for(int i = 0; i < n; ++i)
#define pi 3.14159265358979323846264338327
#define nope string::npos
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
string Printing_Longest_common_subsequence(string s1,string s2,int m , int  n)
{
    int t[m+1][n+1];
    memset(t,0,sizeof(t));
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(s1[i-1]==s2[j-1])
                t[i][j]=1+t[i-1][j-1];
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    string s="";
    int i=m,j=n;
    while(i>0||j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            s.push_back(s1[i-1]);
            i--;
            j--;
            
        }
        else 
        {
            if(t[i-1][j]>t[i][j-1])
            i--;
            else 
            j--;

        }
    }
    reverse(s.begin(),s.end());
    return s;

}

int main()
{
    fast();
    str s1,s2;
    cin>>s1>>s2;
    cout<<Printing_Longest_common_subsequence(s1,s2,s1.si,s2.si);

    //solve()
    return 0;
}




class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.length();
        int n = str2.length();
        int t[m+1][n+1];
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j] = 0;
                }
            }
        }
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(str1.at(i-1) == str2.at(j-1))
                {                                                                                     //finding lcs
                    t[i][j] = 1+t[i-1][j-1];
                }
                else
                {
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        int i=m,j=n;
        string lcs = "";
        while(i>0 && j>0)
        {
            if(str1.at(i-1) == str2.at(j-1))
            {
                lcs.push_back(str1.at(i-1));
                i--;
                j--;
            }
            else
            {
                if(t[i-1][j] > t[i][j-1])                 //finding the lcs string
                {
                    i--;
                }
                else
                {
                    j--;
                }
            }
        }
        reverse(lcs.begin(),lcs.end());
        string res = "";
        int u=0,v=0;
        
        for(int c=0;c<lcs.length();c++)
        {
            while(str1.at(u) != lcs[c])
            {
                res.push_back(str1.at(u));
                u++;
            }
            while(str2.at(v) != lcs[c])
            {
                 res.push_back(str2.at(v));                   // printing the desired string with lcs in it only once..
                v++;
            }
            res.push_back(lcs[c]);
            u++;
            v++;
        }
        
        
        while(u!=str1.length())
        {
            res.push_back(str1.at(u));
            u++;
        }
        while(v!=str2.length())
        {
            res.push_back(str2.at(v));
            v++;
        }
        return res;
    }
};
