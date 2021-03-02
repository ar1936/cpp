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
#define sll set<ll>
#define loop(i,n) for(ll i = 0; i < n; ++i)
#define pi 3.14159265358979323846264338327
#define nope string::npos
void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

struct get_max_min{
    int max=INT_MIN;
    int min=INT_MAX;
};


// struct get_max_min linear_min_max(int arr[],int n)
// {
//     struct get_max_min linear_method;
//     if(n==1)
//     {
//         linear_method.max=arr[0];
//         linear_method.min=arr[0];
//         return linear_method;
//     }
//     loop(i,n){
//         if(arr[i]<linear_method.min)
//         linear_method.min=arr[i];
//         else if(arr[i]>linear_method.max)
//         linear_method.max=arr[i];
//     }
//     return linear_method;
// }







// struct get_max_min tournament_min_max(int arr[],int low,int high)
// {
//     struct get_max_min tournament_max_min,left_max_min,right_max_min;
//     if(low==high)
//     {
//         tournament_max_min.max=arr[low];
//         tournament_max_min.min=arr[low];
//         return tournament_max_min;
//     }
//     if(low==high-1)
//     {
//         if(arr[low]>arr[high])
//         {
//             tournament_max_min.max=arr[low];
//             tournament_max_min.min=arr[high];
//         }
//         else{
//             tournament_max_min.max=arr[high];
//             tournament_max_min.min=arr[low];
//         }
//          return tournament_max_min;
//     }
    
//     ll mid=(low+high)/2;
//     left_max_min=tournament_min_max(arr,low,mid);
//     right_max_min=tournament_min_max(arr,mid+1,high);
    
//     if(left_max_min.min<right_max_min.min)
//     {
//         tournament_max_min.min=left_max_min.min;
//     }
//     else 
//     {
//       tournament_max_min.min=right_max_min.min;  
//     }



//     if(left_max_min.max>right_max_min.max)
//     {
//         tournament_max_min.max=left_max_min.max;
//     }
//     else 
//     {
//         tournament_max_min.max=right_max_min.max;  
//     }


//     return tournament_max_min;
// }




struct get_max_min pair_min_max(int arr[],int n)
{
    struct get_max_min pair_ans;
    ll i=0;
    if(n%2!=0)
    {
        pair_ans.max=arr[0];
        pair_ans.min=arr[0];
        i=1;
    }
    else
    {
        pair_ans.max=max(arr[0],arr[1]);
        pair_ans.min=min(arr[0],arr[1]);
        i=2;
        
    }
    for(i;i<n;i+=2)
    {
        pair_ans.max=max(max(arr[i],arr[i+1]),pair_ans.max);
        pair_ans.min=min(min(arr[i],arr[i+1]),pair_ans.min);
        
    }
    return pair_ans;
}


int main()
{
    fast();

    ll n;
    cin>>n;
    int arr[n];
    loop(i,n){
        cin>>arr[i];
    }
    struct get_max_min ans;


    // ans=linear_min_max(arr,n);


    // ans=tournament_min_max(arr,0,n-1);


    ans=pair_min_max(arr,n);

    cout<<ans.min<<" "<<ans.max;


    //solve()
    return 0;
}




// // C++ program of above implementation 
// #include<iostream> 
// using namespace std; 
 
// // Structure is used to return 
// // two values from minMax() 
// struct Pair 
// { 
//     int min; 
//     int max; 
// }; 
 
// struct Pair getMinMax(int arr[], int n) 
// { 
//     struct Pair minmax;     
//     int i; 
     
//     // If array has even number of elements 
//     // then initialize the first two elements 
//     // as minimum and maximum 
//     if (n % 2 == 0) 
//     { 
//         if (arr[0] > arr[1])     
//         { 
//             minmax.max = arr[0]; 
//             minmax.min = arr[1]; 
//         } 
//         else
//         { 
//             minmax.min = arr[0]; 
//             minmax.max = arr[1]; 
//         } 
         
//         // Set the starting index for loop 
//         i = 2; 
//     } 
     
//     // If array has odd number of elements 
//     // then initialize the first element as 
//     // minimum and maximum 
//     else
//     { 
//         minmax.min = arr[0]; 
//         minmax.max = arr[0]; 
         
//         // Set the starting index for loop 
//         i = 1; 
//     } 
     
//     // In the while loop, pick elements in 
//     // pair and compare the pair with max 
//     // and min so far 
//     while (i < n - 1) 
//     {         
//         if (arr[i] > arr[i + 1])         
//         { 
//             if(arr[i] > minmax.max)     
//                 minmax.max = arr[i]; 
                 
//             if(arr[i + 1] < minmax.min)         
//                 minmax.min = arr[i + 1];     
//         } 
//         else       
//         { 
//             if (arr[i + 1] > minmax.max)     
//                 minmax.max = arr[i + 1]; 
                 
//             if (arr[i] < minmax.min)         
//                 minmax.min = arr[i];     
//         } 
         
//         // Increment the index by 2 as 
//         // two elements are processed in loop 
//         i += 2; 
//     }         
//     return minmax; 
// } 
 
// // Driver code 
// int main() 
// { 
   
     
//     Pair minmax = getMinMax(arr, arr_size); 
     
//     cout <<minmax.min <<" "; 
//     cout << minmax.max; 
         
//     return 0; 
// } 