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
void merge(int arr[],int l , int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[i+l];

    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else 
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;k++;

    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;k++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l>=r)
    return;
    int mid=l+(r-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);

}


// void merge(int arr[], int l, int m, int r)
// {
//     int n1 = m - l + 1;
//     int n2 = r - m;
 
//     // Create temp arrays
//     int L[n1], R[n2];
 
//     // Copy data to temp arrays L[] and R[]
//     for (int i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];
 
//     // Merge the temp arrays back into arr[l..r]
 
//     // Initial index of first subarray
//     int i = 0;
 
//     // Initial index of second subarray
//     int j = 0;
 
//     // Initial index of merged subarray
//     int k = l;
 
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         }
//         else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
 
//     // Copy the remaining elements of
//     // L[], if there are any
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
 
//     // Copy the remaining elements of
//     // R[], if there are any
//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }
 
// // l is for left index and r is
// // right index of the sub-array
// // of arr to be sorted */
// void mergeSort(int arr[],int l,int r){
//     if(l>=r){
//         return;//returns recursively
//     }
//     int m =l+ (r-l)/2;
//     mergeSort(arr,l,m);
//     mergeSort(arr,m+1,r);
//     merge(arr,l,m,r);
// }


int main()
{
    fast();
    int n ;
    cin>>n;
    int arr[n];
    loop(i,n)
    {
        cin>>arr[i];
    }
   
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    //solve()
    return 0;
}