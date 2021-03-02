#include <bits/stdc++.h>
using namespace std;

int isPrimeNumber(int);
int solve (vector<int>v,int d)
{
    int ans=1,sum=1;
    for(int i=0;i<=d+1;i++)
    {

        if((v[i]-v[i-1])>=d)
        sum=sum*v[i];
        ans=ans*v[i];
        
    }
    return ans*sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
    vector<int>v;
   bool isPrime;
   for(int n = 2; n < 10000; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);

      if(isPrime == true)
         v.push_back(n);
        
   }
   cout<<solve (v,d)<<endl;

    }
   // cout<<v.size();

   return 0;
}

// Function that checks whether n is prime or not
int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }  
   return isPrime;
}