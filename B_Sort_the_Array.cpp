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
#define si size()

#define be begin()
#define en end()
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
        ll i,j,k;
        ll n,count=0;
        ll seg=0;
        ll l,r;

        cin>>n;
        ll a[n],s[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s[i]=a[i];
        }

        sort(s,s+n);
        for(i=0;i<n;i++)
        {
            if(s[i]==a[i])
                count++;
        }

        if(count==n)
        {
            cout<<"yes\n1 1";
            return 0;
        }

        for(i=0;i<n-1,seg<1;)
        {
            if(a[i]<a[i+1])
            {
                i++;
            }

            else
            {
                l=i;
                r=i;
               while(a[i]>a[i+1] && i<n-1)
               {
                   i++;
                   r++;
               }

               sort(a+l,a+r+1);
               seg++;
            }
        }

        /*for(i=0;i<n;i++)
            cout<<a[i]<<" ";*/

        for(i=0;i<n;i++)
        {
            if(s[i]!=a[i])
            {
                cout<<"no";
                return 0;
            }
        }

        cout<<"yes\n"<<l+1<<" "<<r+1;

        return 0;
}
