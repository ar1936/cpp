#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef double db;
#define pb push_back
#define ppb pop_back
#define mpll map<ll, ll>
#define vll vector<ll>
#define str string
#define vs vector<string>
#define vc vector<char>
#define sll set<ll>
#define pi 3.14159265358979323846264338327
#define nope string::npos
void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
    fast();
    int n,x,y,count1(0),count2(0),sum(0),sum1(0),sum2(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum1+=x;
        if(x%2==1)
            count1++;
        cin>>y;
        sum2+=y;
        if(y%2==1)
            count2++;
        sum=sum+x+y;

    }
    if(sum%2==1)
    cout<<-1;
    else 
    cout<<min(count1,count2)%2;
    //solve()
    return 0;
}