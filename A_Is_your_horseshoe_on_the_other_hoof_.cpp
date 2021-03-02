#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    vector<int>v;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    int res = 0; 
    for (int i = 0; i < v.size(); i++) { 
  
        // Move the index ahead while 
        // there are duplicates 
        while (i < v.size()-1 && v[i] == v[i + 1]) 
            i++; 
  
        res++; 
    } 
  

//   if(v[3]!=v[2])
//   count++;
//   if(count==0)
//   count++;
    cout<<4-res;
    return 0;
}