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

int main()
{
    fast();
    ll n,k;
    cin>>n>>k;
    vll v;
    loop(i,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    int i=0;
    int j=0;
    queue<ll>q;
    while(j<v.si)
    {
        if(v[j]<0)
        q.push(v[j]);
        if(j-i+1==k)
        {
            if(!q.empty())
            {
                cout<<q.front()<<" ";
                if(v[i]==q.front())
                q.pop();
            }
            else 
            cout<<0<<" ";
            j++;
            i++;
        }
        else if (j-i+1<k)
        j++;
        
    }

    //solve()
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main()
//  {
// 	//code
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,k;
// 	    cin>>n;
// 	    vector<int>arr(n),ans;
// 	    for(int i=0;i<n;i++) cin>>arr[i];
	    
// 	    cin>>k;
// 	    deque<int>list;
	    
// 	    int j(0),i(0);
// 	    while(j<arr.size()){
// 	        if(arr[j]<0) list.push_back(arr[j]);
	        
	        
// 	        if(j-i+1<k){
// 	            j++;
// 	            continue;
// 	        }
// 	        else if(j-i+1==k){
// 	            if(!list.empty())
// 	                ans.push_back(list.front());
// 	            else ans.push_back(0);
	            
// 	            if(arr[i]<0) list.pop_front();
// 	            i++; 
// 	        }
// 	        j++;
// 	    }
// 	    for(int item:ans) cout<<item<<" ";
// 	    cout<<endl;
// 	}
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    vector<int>a(n);
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        cin>>a[i];
// 	    }
// 	    int k;
// 	    cin>>k;
// 	    int i=0;
// 	    int j=0;
// 	    queue<int>q;
// 	    while(j<n)
// 	    {
// 	        if(a[j]<0)
// 	        {
// 	            q.push(a[j]);
// 	        }
// 	        if(j-i+1==k)
// 	        {
// 	            if(!q.empty())
// 	            {
// 	                cout<<q.front()<<" ";
// 	                if(a[i]==q.front())
// 	                {
// 	                    q.pop();
// 	                }
// 	            }
// 	            else
// 	            {
// 	                cout<<0<<" ";
	                
// 	            }
// 	            i++;
// 	            j++;
	            
// 	        }
// 	        if(j-i+1<k)
// 	        {
// 	            j++;
// 	        }
// 	    }
// 	    cout<<endl;
// 	}
// 	return 0;
// }