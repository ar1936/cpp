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
void Using_temp_array(ll arr[],int n,int k)
{
    ll brr[k];
    loop(i,k)
    brr[i]=arr[i];
    for(ll i=k;i<n;i++)
    arr[i-k]=arr[i];
    loop(i,k)
    arr[n-k+i]=brr[i];

}



void Rotate_one_by_one(ll arr[],ll n,ll k){

    while(k--)
    {
        ll temp=arr[0];
        for(ll i=1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }
} 

int main()
{
    fast();
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    loop(i,n)
    cin>>arr[i];
    

//   Using_temp_array(arr,n,k);      // T(n)=O(N) ans  S(n)=O(k); 


     Rotate_one_by_one(arr,n,k);     // Time complexity : O(n * d)   Auxiliary Space : O(1)



     // A_Juggling_Algorithm(arr,n,k);    //Time complexity : O(n)    Auxiliary Space : O(1)



    loop(i,n)
    cout<<arr[i]<<" ";

    //solve()
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// /*Fuction to get gcd of a and b*/
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
 
//     else
//         return gcd(b, a % b);
// }
 
// /*Function to left rotate arr[] of siz n by d*/
// void leftRotate(int arr[], int d, int n)
// {
//     /* To handle if d >= n */
//     d = d % n;
//     int g_c_d = gcd(d, n);
//     for (int i = 0; i < g_c_d; i++) {
//         /* move i-th values of blocks */
//         int temp = arr[i];
//         int j = i;
 
//         while (1) {
//             int k = j + d;
//             if (k >= n)
//                 k = k - n;
 
//             if (k == i)
//                 break;
 
//             arr[j] = arr[k];
//             j = k;
//         }
//         arr[j] = temp;
//     }
// }
 
// // Function to print an array
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
// }
 
// /* Driver program to test above functions */
// int main()
// {
//     int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//     int n = sizeof(arr) / sizeof(arr[0]);
 
//     // Function calling
//     leftRotate(arr, 2, n);
//     printArray(arr, n);
 
//     return 0;
// }