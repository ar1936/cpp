#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n , k , d,sum=0;
		cin>>n>>k>>d;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			sum+=x;
			v.push_back(x);

		}
		if(sum/k>d)
		cout<<d<<endl;
		else 
		cout<<sum/k<<endl;
	}
return 0;
}